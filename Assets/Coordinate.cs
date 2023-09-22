//using System.Collections;
//using System.Collections.Generic;
using UnityEngine;


public class Coordinate : MonoBehaviour
{
    int _rows = 4;


    private void Start()
    {
        

    }

    //gaussian elimination for solving Systems of equations
    public float[] Gauss(float[,] a)
    {
        int L = _rows - 1;
        int i, j, l, n, m, k = 0;
        float[] temp1 = new float[_rows];

        string str = "";
        //Debug.Log("before");
        //int num = a.Length;
        //int height = a.GetLength(0);
        //int width = a.GetLength(1);
        //Debug.Log("num=" + num+"height="+height+"width="+width);
        //for (int i0 = 0; i0 < a.GetLength(0); i0++)
        //{
        //    for (int j0 = 0; j0 < a.GetLength(1); j0++)
        //    {
        //        str += a[i0, j0] + ",";
        //    }
        //    str += "\n";
        //}
        //Debug.Log(str);


        //elimination to Upper Triangle
        do
        {
            n = 0;
            for (l = k; l < L; l++)
            {
                //temp1[n++] = a[l + 1, k] / a[k, k];
                float a1 = a[l + 1, k];
                float a2 = a[k, k];
                temp1[n++] = a1 / a2;

            }
            for (m = 0, i = k + 1; i < _rows; i++, m++)
            {
                for (j = k; j < _rows + 1; j++)
                {
                    a[i, j] -= temp1[m] * a[k, j];
                }
            }

            //str = "";
            //for (int i0 = 0; i0 < a.GetLength(0); i0++)
            //{
            //    for (int j0 = 0; j0 < a.GetLength(1); j0++)
            //    {
            //        str += a[i0, j0] + ",";
            //    }
            //    str += "\n";
            //}
            //Debug.Log("k=: "+k);
            //Debug.Log(str);


            k++;

        } while (l < _rows); //k < _rows - 1


        //Debug.Log("after");
        //str = "";
        //for (int i0 = 0; i0 < a.GetLength(0); i0++)
        //{
        //    for (int j0 = 0; j0 < a.GetLength(1); j0++)
        //    {
        //        str += a[i0, j0] + ",";
        //    }
        //    str += "\n";
        //}
        //Debug.Log(str);


        ////elimination to Diagonal
        //k = L - 2;

        //do
        //{
        //    n = 0;
        //    for (l = k; l >= 0; l--)
        //    {
        //        //temp1[n++] = a[k - 1, k + 1] / a[k + 1, k + 1];

        //        float a1 = a[k - 1, k + 1];
        //        float a2 = a[k + 1, k + 1];
        //        temp1[n++] = a1 / a2;
        //    }
        //    for (m = 0, i = k; i >= 0; i--, m++)
        //    {
        //        for (j = k; j < _rows + 1; j++)
        //        {
        //            a[k - i, j] -= temp1[m] * a[k + 1, j];
        //        }
        //    }
        //    k--;

        //} while (k > 0);

        //for (int i = 0; i < _rows; i++)
        //{
        //    double get_x = 0.0;
        //    for (int j = 0; j < _rows; j++)
        //    {
        //        get_x = get_x + A[_rows - 1 - i][j] * x[j];//把左边全部加起来了，下面需要多减去一次Xn*Ann
        //    }
        //    x[_rows - 1 - i] = (b[_rows - 1 - i] - get_x + A[_rows - 1 - i][_rows - 1 - i] * x[_rows - 1 - i]) / A[_rows - 1 - i][_rows - 1 - i];
        //}



        //str = "";
        //for (int i0 = 0; i0 < a.GetLength(0); i0++)
        //{
        //    for (int j0 = 0; j0 < a.GetLength(1); j0++)
        //    {
        //        str += a[i0, j0] + ",";
        //    }
        //    str += "\n";
        //}
        //Debug.Log(str);

        //string s = "";

        //Back to generating solutions
        float[] result = new float[4];

        result[_rows - 1] = a[_rows - 1, _rows] / a[_rows - 1, _rows - 1]; //parameter t

        for (i = _rows - 2; i >= 0; i--)
        {
            float sum = 0;
            for (j = i + 1; j < _rows; j++)
            {
                sum += a[i, j] * result[j];
            }
            result[i] = (a[i, _rows] - sum) / a[i, i];
        }


        //for (i = 0; i < _rows; i++)
        //{
        //    result[i] = a[i, _rows] / a[i, i];
        //    //double value =

        //    //s += "X" + (i + 1) + "=" + value + "/n";
        //    //r1,r2,r3,t

        //}
        //Debug.Log(s);

        return result;

    }//gauss end



    //----------coordinate conversion------------//
    public Vector3 coordinate_conversion(Vector3 coordinate)
    {
        //4 corners
        GameObject corner1 = GameObject.Find("corner1");
        GameObject corner2 = GameObject.Find("corner2");
        GameObject corner3 = GameObject.Find("corner3");
        GameObject corner4 = GameObject.Find("corner4");
        // Transform corner1 = transform.parent.Find("corner1");

        //4 reality coordinates  
        //float X1 = 201220.60F; float Y1 = 0; float Z1 = 5375896.13F;
        //float X2 = 201103.03F; float Y2 = 0; float Z2 = 5376096.67F; 
        //float X3 = 201384.76F; float Y3 = 0; float Z3 = 5375989.58F;
        //float X4 = 201266.92F; float Y4 = 18.35F; float Z4 = 5376192.46F;
        //
        float X1 = -155F; float Y1 = 0; float Z1 = -100F;
        float X2 = 75F; float Y2 = 0; float Z2 = -100F;
        float X3 = -155F; float Y3 = 0; float Z3 = 89F;
        float X4 = 75F; float Y4 = 18.35F; float Z4 = 89F;

        // unity coordinate  
        float x1 = corner1.transform.position.x;
        float y1 = corner1.transform.position.y;
        float z1 = corner1.transform.position.z;

        float x2 = corner2.transform.position.x;
        float y2 = corner2.transform.position.y;
        float z2 = corner2.transform.position.z;

        float x3 = corner3.transform.position.x;
        float y3 = corner3.transform.position.y;
        float z3 = corner3.transform.position.z;

        float x4 = corner4.transform.position.x;
        float y4 = corner4.transform.position.y;
        float z4 = corner4.transform.position.z;
        //x2,x3,x4...

        //x,y,z Augmented Matrix
        float[,] Ax = new float[4, 5] { { x1, y1, z1, 1, X1 }, { x2, y2, z2, 1, X2 }, { x3, y3, z3, 1, X3 }, { x4, y4, z4, 1, X4 } };
        float[,] Ay = new float[4, 5] { { x1, y1, z1, 1, Y1 }, { x2, y2, z2, 1, Y2 }, { x3, y3, z3, 1, Y3 }, { x4, y4, z4, 1, Y4 } };
        float[,] Az = new float[4, 5] { { x1, y1, z1, 1, Z1 }, { x2, y2, z2, 1, Z2 }, { x3, y3, z3, 1, Z3 }, { x4, y4, z4, 1, Z4 } };

        float[] R1 = Gauss(Ax); //r11,r12,r13,tx
        float[] R2 = Gauss(Ay);
        float[] R3 = Gauss(Az);



        //calculate corresponding coordinates

        GameObject target = GameObject.Find("target1");
        //float xx = target.transform.localScale.x;
        //float yy = target.transform.localScale.y;
        //float zz = target.transform.localScale.z;
        float xx = coordinate.x;
        float yy = coordinate.y;
        float zz = coordinate.z;

        //converted coordinates
        float XX = R1[0] * xx + R1[1] * yy + R1[2] * zz + R1[3];
        float YY = R2[0] * xx + R2[1] * yy + R2[2] * zz + R2[3];
        float ZZ = R3[0] * xx + R3[1] * yy + R3[2] * zz + R3[3];

        Vector3 conv = new Vector3(XX, YY, ZZ);

        return conv;


        //float z = gameObject.transform.localScale.z;
        //Vector3 scale = new Vector3(x, y, z);


    }//end coordinate conversion


    //
    public Vector3 Func1(Vector3 vec)
    {
        Vector3 vec_converted = coordinate_conversion(vec);
        return vec_converted;
    }

}


