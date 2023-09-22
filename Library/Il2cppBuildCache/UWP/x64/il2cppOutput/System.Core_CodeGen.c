#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000F System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Intersect(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::IntersectIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000016 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000018 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType(System.Collections.IEnumerable)
// 0x0000001B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfTypeIterator(System.Collections.IEnumerable)
// 0x0000001C TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001D TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001E TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001F TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000020 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000021 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000022 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000023 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000024 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000026 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000027 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000028 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000029 TAccumulate System.Linq.Enumerable::Aggregate(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
// 0x0000002A System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5 (void);
// 0x0000002B System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000002C TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000002D System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000002E System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000002F System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000030 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000031 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000032 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000033 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000034 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000035 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000036 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000037 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000038 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000039 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000003A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003C System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000003D System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000003E System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000003F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000040 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000041 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000042 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000043 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000044 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000045 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000046 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000047 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000048 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000049 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000004A System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004C System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004D System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000004E System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000004F System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000050 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000051 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000052 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000053 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000054 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000055 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000056 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000057 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000058 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000059 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000005A System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000005B System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000005C System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000005D System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000005E System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x0000005F TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000060 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000061 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000062 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000063 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000064 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x00000065 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x00000066 System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x00000067 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x00000068 TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000069 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x0000006A System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x0000006B System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000006C System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006D System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x0000006E System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x0000006F System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000070 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000071 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000072 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000073 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000074 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000075 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000076 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x00000077 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x00000078 System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x00000079 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x0000007A System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x0000007B TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000007C System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x0000007D System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x0000007E System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000007F System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000080 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::.ctor(System.Int32)
// 0x00000081 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.IDisposable.Dispose()
// 0x00000082 System.Boolean System.Linq.Enumerable/<IntersectIterator>d__74`1::MoveNext()
// 0x00000083 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::<>m__Finally1()
// 0x00000084 TSource System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000085 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.Reset()
// 0x00000086 System.Object System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.get_Current()
// 0x00000087 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000088 System.Collections.IEnumerator System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000089 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::.ctor(System.Int32)
// 0x0000008A System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.IDisposable.Dispose()
// 0x0000008B System.Boolean System.Linq.Enumerable/<OfTypeIterator>d__97`1::MoveNext()
// 0x0000008C System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>m__Finally1()
// 0x0000008D TResult System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000008E System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.Reset()
// 0x0000008F System.Object System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.get_Current()
// 0x00000090 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000091 System.Collections.IEnumerator System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000092 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000093 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000094 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000095 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000096 System.Boolean System.Linq.Set`1::Remove(TElement)
// 0x00000097 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000098 System.Void System.Linq.Set`1::Resize()
// 0x00000099 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x0000009A System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000009B System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000009C System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009D System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000009E System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000009F System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x000000A0 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x000000A1 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x000000A2 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000A3 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x000000A4 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x000000A5 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000A6 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A7 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x000000A8 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x000000A9 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000AA System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000AB System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000AC System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000AD System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000AE System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000AF System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000B0 TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000B1 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000B2 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000B3 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000B4 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000B5 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000B6 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000B7 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000B8 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000B9 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000BA System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000BB System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000BC System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000BD System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000BE System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000BF System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000C0 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000C1 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000C2 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000C3 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000C4 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000C5 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000C6 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000C7 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000C8 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000C9 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000CA System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000CB System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000CC T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000CD System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000CE System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[206] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[206] = 
{
	7972,
	7972,
	8258,
	8258,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	7853,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[69] = 
{
	{ 0x02000004, { 105, 4 } },
	{ 0x02000005, { 109, 9 } },
	{ 0x02000006, { 120, 7 } },
	{ 0x02000007, { 129, 10 } },
	{ 0x02000008, { 141, 11 } },
	{ 0x02000009, { 155, 9 } },
	{ 0x0200000A, { 167, 12 } },
	{ 0x0200000B, { 182, 1 } },
	{ 0x0200000C, { 183, 2 } },
	{ 0x0200000D, { 185, 12 } },
	{ 0x0200000E, { 197, 8 } },
	{ 0x0200000F, { 205, 11 } },
	{ 0x02000010, { 216, 12 } },
	{ 0x02000011, { 228, 12 } },
	{ 0x02000012, { 240, 6 } },
	{ 0x02000013, { 246, 2 } },
	{ 0x02000015, { 248, 8 } },
	{ 0x02000017, { 256, 3 } },
	{ 0x02000018, { 261, 5 } },
	{ 0x02000019, { 266, 7 } },
	{ 0x0200001A, { 273, 3 } },
	{ 0x0200001B, { 276, 7 } },
	{ 0x0200001C, { 283, 4 } },
	{ 0x0200001D, { 287, 23 } },
	{ 0x0200001F, { 310, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 1 } },
	{ 0x0600000C, { 34, 2 } },
	{ 0x0600000D, { 36, 2 } },
	{ 0x0600000E, { 38, 2 } },
	{ 0x0600000F, { 40, 1 } },
	{ 0x06000010, { 41, 1 } },
	{ 0x06000011, { 42, 2 } },
	{ 0x06000012, { 44, 1 } },
	{ 0x06000013, { 45, 2 } },
	{ 0x06000014, { 47, 1 } },
	{ 0x06000015, { 48, 2 } },
	{ 0x06000016, { 50, 1 } },
	{ 0x06000017, { 51, 5 } },
	{ 0x06000018, { 56, 3 } },
	{ 0x06000019, { 59, 2 } },
	{ 0x0600001A, { 61, 1 } },
	{ 0x0600001B, { 62, 2 } },
	{ 0x0600001C, { 64, 4 } },
	{ 0x0600001D, { 68, 4 } },
	{ 0x0600001E, { 72, 3 } },
	{ 0x0600001F, { 75, 4 } },
	{ 0x06000020, { 79, 3 } },
	{ 0x06000021, { 82, 3 } },
	{ 0x06000022, { 85, 1 } },
	{ 0x06000023, { 86, 1 } },
	{ 0x06000024, { 87, 3 } },
	{ 0x06000025, { 90, 3 } },
	{ 0x06000026, { 93, 2 } },
	{ 0x06000027, { 95, 2 } },
	{ 0x06000028, { 97, 5 } },
	{ 0x06000029, { 102, 3 } },
	{ 0x0600003A, { 118, 2 } },
	{ 0x0600003F, { 127, 2 } },
	{ 0x06000044, { 139, 2 } },
	{ 0x0600004A, { 152, 3 } },
	{ 0x0600004F, { 164, 3 } },
	{ 0x06000054, { 179, 3 } },
	{ 0x0600009D, { 259, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[312] = 
{
	{ (Il2CppRGCTXDataType)2, 7991 },
	{ (Il2CppRGCTXDataType)3, 30517 },
	{ (Il2CppRGCTXDataType)2, 12781 },
	{ (Il2CppRGCTXDataType)2, 11942 },
	{ (Il2CppRGCTXDataType)3, 53049 },
	{ (Il2CppRGCTXDataType)2, 8817 },
	{ (Il2CppRGCTXDataType)2, 11984 },
	{ (Il2CppRGCTXDataType)3, 53117 },
	{ (Il2CppRGCTXDataType)2, 11957 },
	{ (Il2CppRGCTXDataType)3, 53071 },
	{ (Il2CppRGCTXDataType)2, 7992 },
	{ (Il2CppRGCTXDataType)3, 30518 },
	{ (Il2CppRGCTXDataType)2, 12816 },
	{ (Il2CppRGCTXDataType)2, 12002 },
	{ (Il2CppRGCTXDataType)3, 53142 },
	{ (Il2CppRGCTXDataType)2, 8843 },
	{ (Il2CppRGCTXDataType)2, 12046 },
	{ (Il2CppRGCTXDataType)3, 53526 },
	{ (Il2CppRGCTXDataType)2, 12024 },
	{ (Il2CppRGCTXDataType)3, 53317 },
	{ (Il2CppRGCTXDataType)2, 1375 },
	{ (Il2CppRGCTXDataType)3, 242 },
	{ (Il2CppRGCTXDataType)3, 243 },
	{ (Il2CppRGCTXDataType)2, 4651 },
	{ (Il2CppRGCTXDataType)3, 19532 },
	{ (Il2CppRGCTXDataType)2, 1378 },
	{ (Il2CppRGCTXDataType)3, 270 },
	{ (Il2CppRGCTXDataType)3, 271 },
	{ (Il2CppRGCTXDataType)2, 4670 },
	{ (Il2CppRGCTXDataType)3, 19540 },
	{ (Il2CppRGCTXDataType)3, 59479 },
	{ (Il2CppRGCTXDataType)2, 1427 },
	{ (Il2CppRGCTXDataType)3, 566 },
	{ (Il2CppRGCTXDataType)3, 59499 },
	{ (Il2CppRGCTXDataType)2, 1435 },
	{ (Il2CppRGCTXDataType)3, 602 },
	{ (Il2CppRGCTXDataType)2, 9680 },
	{ (Il2CppRGCTXDataType)3, 41936 },
	{ (Il2CppRGCTXDataType)2, 9681 },
	{ (Il2CppRGCTXDataType)3, 41937 },
	{ (Il2CppRGCTXDataType)3, 25474 },
	{ (Il2CppRGCTXDataType)3, 59399 },
	{ (Il2CppRGCTXDataType)2, 1381 },
	{ (Il2CppRGCTXDataType)3, 387 },
	{ (Il2CppRGCTXDataType)3, 59549 },
	{ (Il2CppRGCTXDataType)2, 1439 },
	{ (Il2CppRGCTXDataType)3, 634 },
	{ (Il2CppRGCTXDataType)3, 59420 },
	{ (Il2CppRGCTXDataType)2, 1416 },
	{ (Il2CppRGCTXDataType)3, 524 },
	{ (Il2CppRGCTXDataType)3, 59487 },
	{ (Il2CppRGCTXDataType)3, 18110 },
	{ (Il2CppRGCTXDataType)2, 4415 },
	{ (Il2CppRGCTXDataType)2, 5293 },
	{ (Il2CppRGCTXDataType)2, 5664 },
	{ (Il2CppRGCTXDataType)2, 5938 },
	{ (Il2CppRGCTXDataType)2, 1890 },
	{ (Il2CppRGCTXDataType)3, 4260 },
	{ (Il2CppRGCTXDataType)3, 4261 },
	{ (Il2CppRGCTXDataType)2, 8818 },
	{ (Il2CppRGCTXDataType)3, 33109 },
	{ (Il2CppRGCTXDataType)3, 59427 },
	{ (Il2CppRGCTXDataType)2, 1419 },
	{ (Il2CppRGCTXDataType)3, 538 },
	{ (Il2CppRGCTXDataType)2, 6971 },
	{ (Il2CppRGCTXDataType)2, 5040 },
	{ (Il2CppRGCTXDataType)2, 5309 },
	{ (Il2CppRGCTXDataType)2, 5666 },
	{ (Il2CppRGCTXDataType)2, 6972 },
	{ (Il2CppRGCTXDataType)2, 5041 },
	{ (Il2CppRGCTXDataType)2, 5310 },
	{ (Il2CppRGCTXDataType)2, 5667 },
	{ (Il2CppRGCTXDataType)2, 5311 },
	{ (Il2CppRGCTXDataType)2, 5668 },
	{ (Il2CppRGCTXDataType)3, 19533 },
	{ (Il2CppRGCTXDataType)2, 6973 },
	{ (Il2CppRGCTXDataType)2, 5042 },
	{ (Il2CppRGCTXDataType)2, 5312 },
	{ (Il2CppRGCTXDataType)2, 5669 },
	{ (Il2CppRGCTXDataType)2, 5313 },
	{ (Il2CppRGCTXDataType)2, 5670 },
	{ (Il2CppRGCTXDataType)3, 19534 },
	{ (Il2CppRGCTXDataType)2, 6970 },
	{ (Il2CppRGCTXDataType)2, 5308 },
	{ (Il2CppRGCTXDataType)2, 5665 },
	{ (Il2CppRGCTXDataType)2, 3264 },
	{ (Il2CppRGCTXDataType)2, 5288 },
	{ (Il2CppRGCTXDataType)2, 5289 },
	{ (Il2CppRGCTXDataType)2, 5662 },
	{ (Il2CppRGCTXDataType)3, 19531 },
	{ (Il2CppRGCTXDataType)2, 5287 },
	{ (Il2CppRGCTXDataType)2, 5661 },
	{ (Il2CppRGCTXDataType)3, 19530 },
	{ (Il2CppRGCTXDataType)2, 5039 },
	{ (Il2CppRGCTXDataType)2, 5307 },
	{ (Il2CppRGCTXDataType)2, 5038 },
	{ (Il2CppRGCTXDataType)3, 59375 },
	{ (Il2CppRGCTXDataType)3, 18109 },
	{ (Il2CppRGCTXDataType)2, 4414 },
	{ (Il2CppRGCTXDataType)2, 5291 },
	{ (Il2CppRGCTXDataType)2, 5663 },
	{ (Il2CppRGCTXDataType)2, 5937 },
	{ (Il2CppRGCTXDataType)2, 5342 },
	{ (Il2CppRGCTXDataType)2, 5678 },
	{ (Il2CppRGCTXDataType)3, 19968 },
	{ (Il2CppRGCTXDataType)3, 30519 },
	{ (Il2CppRGCTXDataType)3, 30521 },
	{ (Il2CppRGCTXDataType)2, 971 },
	{ (Il2CppRGCTXDataType)3, 30520 },
	{ (Il2CppRGCTXDataType)3, 30529 },
	{ (Il2CppRGCTXDataType)2, 7995 },
	{ (Il2CppRGCTXDataType)2, 11958 },
	{ (Il2CppRGCTXDataType)3, 53072 },
	{ (Il2CppRGCTXDataType)3, 30530 },
	{ (Il2CppRGCTXDataType)2, 5409 },
	{ (Il2CppRGCTXDataType)2, 5730 },
	{ (Il2CppRGCTXDataType)3, 19548 },
	{ (Il2CppRGCTXDataType)3, 59300 },
	{ (Il2CppRGCTXDataType)2, 12025 },
	{ (Il2CppRGCTXDataType)3, 53318 },
	{ (Il2CppRGCTXDataType)3, 30522 },
	{ (Il2CppRGCTXDataType)2, 7994 },
	{ (Il2CppRGCTXDataType)2, 11943 },
	{ (Il2CppRGCTXDataType)3, 53050 },
	{ (Il2CppRGCTXDataType)3, 19547 },
	{ (Il2CppRGCTXDataType)3, 30523 },
	{ (Il2CppRGCTXDataType)3, 59299 },
	{ (Il2CppRGCTXDataType)2, 12003 },
	{ (Il2CppRGCTXDataType)3, 53143 },
	{ (Il2CppRGCTXDataType)3, 30536 },
	{ (Il2CppRGCTXDataType)2, 7996 },
	{ (Il2CppRGCTXDataType)2, 11985 },
	{ (Il2CppRGCTXDataType)3, 53118 },
	{ (Il2CppRGCTXDataType)3, 33170 },
	{ (Il2CppRGCTXDataType)3, 15679 },
	{ (Il2CppRGCTXDataType)3, 19549 },
	{ (Il2CppRGCTXDataType)3, 15678 },
	{ (Il2CppRGCTXDataType)3, 30537 },
	{ (Il2CppRGCTXDataType)3, 59301 },
	{ (Il2CppRGCTXDataType)2, 12047 },
	{ (Il2CppRGCTXDataType)3, 53527 },
	{ (Il2CppRGCTXDataType)3, 30550 },
	{ (Il2CppRGCTXDataType)2, 7998 },
	{ (Il2CppRGCTXDataType)2, 12027 },
	{ (Il2CppRGCTXDataType)3, 53320 },
	{ (Il2CppRGCTXDataType)3, 30551 },
	{ (Il2CppRGCTXDataType)2, 5412 },
	{ (Il2CppRGCTXDataType)2, 5733 },
	{ (Il2CppRGCTXDataType)3, 19553 },
	{ (Il2CppRGCTXDataType)3, 19552 },
	{ (Il2CppRGCTXDataType)2, 11960 },
	{ (Il2CppRGCTXDataType)3, 53074 },
	{ (Il2CppRGCTXDataType)3, 59310 },
	{ (Il2CppRGCTXDataType)2, 12026 },
	{ (Il2CppRGCTXDataType)3, 53319 },
	{ (Il2CppRGCTXDataType)3, 30543 },
	{ (Il2CppRGCTXDataType)2, 7997 },
	{ (Il2CppRGCTXDataType)2, 12005 },
	{ (Il2CppRGCTXDataType)3, 53145 },
	{ (Il2CppRGCTXDataType)3, 19551 },
	{ (Il2CppRGCTXDataType)3, 19550 },
	{ (Il2CppRGCTXDataType)3, 30544 },
	{ (Il2CppRGCTXDataType)2, 11959 },
	{ (Il2CppRGCTXDataType)3, 53073 },
	{ (Il2CppRGCTXDataType)3, 59309 },
	{ (Il2CppRGCTXDataType)2, 12004 },
	{ (Il2CppRGCTXDataType)3, 53144 },
	{ (Il2CppRGCTXDataType)3, 30557 },
	{ (Il2CppRGCTXDataType)2, 7999 },
	{ (Il2CppRGCTXDataType)2, 12049 },
	{ (Il2CppRGCTXDataType)3, 53529 },
	{ (Il2CppRGCTXDataType)3, 33171 },
	{ (Il2CppRGCTXDataType)3, 15681 },
	{ (Il2CppRGCTXDataType)3, 19555 },
	{ (Il2CppRGCTXDataType)3, 19554 },
	{ (Il2CppRGCTXDataType)3, 15680 },
	{ (Il2CppRGCTXDataType)3, 30558 },
	{ (Il2CppRGCTXDataType)2, 11961 },
	{ (Il2CppRGCTXDataType)3, 53075 },
	{ (Il2CppRGCTXDataType)3, 59311 },
	{ (Il2CppRGCTXDataType)2, 12048 },
	{ (Il2CppRGCTXDataType)3, 53528 },
	{ (Il2CppRGCTXDataType)3, 19544 },
	{ (Il2CppRGCTXDataType)3, 19545 },
	{ (Il2CppRGCTXDataType)3, 19559 },
	{ (Il2CppRGCTXDataType)3, 569 },
	{ (Il2CppRGCTXDataType)3, 568 },
	{ (Il2CppRGCTXDataType)2, 5398 },
	{ (Il2CppRGCTXDataType)2, 5722 },
	{ (Il2CppRGCTXDataType)3, 19546 },
	{ (Il2CppRGCTXDataType)2, 5443 },
	{ (Il2CppRGCTXDataType)2, 5771 },
	{ (Il2CppRGCTXDataType)3, 571 },
	{ (Il2CppRGCTXDataType)2, 1248 },
	{ (Il2CppRGCTXDataType)2, 1428 },
	{ (Il2CppRGCTXDataType)3, 567 },
	{ (Il2CppRGCTXDataType)3, 570 },
	{ (Il2CppRGCTXDataType)3, 604 },
	{ (Il2CppRGCTXDataType)2, 5401 },
	{ (Il2CppRGCTXDataType)2, 5724 },
	{ (Il2CppRGCTXDataType)3, 606 },
	{ (Il2CppRGCTXDataType)2, 967 },
	{ (Il2CppRGCTXDataType)2, 1436 },
	{ (Il2CppRGCTXDataType)3, 603 },
	{ (Il2CppRGCTXDataType)3, 605 },
	{ (Il2CppRGCTXDataType)3, 389 },
	{ (Il2CppRGCTXDataType)2, 10970 },
	{ (Il2CppRGCTXDataType)3, 48222 },
	{ (Il2CppRGCTXDataType)2, 5391 },
	{ (Il2CppRGCTXDataType)2, 5717 },
	{ (Il2CppRGCTXDataType)3, 48223 },
	{ (Il2CppRGCTXDataType)3, 391 },
	{ (Il2CppRGCTXDataType)2, 960 },
	{ (Il2CppRGCTXDataType)2, 1382 },
	{ (Il2CppRGCTXDataType)3, 388 },
	{ (Il2CppRGCTXDataType)3, 390 },
	{ (Il2CppRGCTXDataType)3, 636 },
	{ (Il2CppRGCTXDataType)3, 637 },
	{ (Il2CppRGCTXDataType)2, 10974 },
	{ (Il2CppRGCTXDataType)3, 48227 },
	{ (Il2CppRGCTXDataType)2, 5404 },
	{ (Il2CppRGCTXDataType)2, 5726 },
	{ (Il2CppRGCTXDataType)3, 48228 },
	{ (Il2CppRGCTXDataType)3, 639 },
	{ (Il2CppRGCTXDataType)2, 969 },
	{ (Il2CppRGCTXDataType)2, 1440 },
	{ (Il2CppRGCTXDataType)3, 635 },
	{ (Il2CppRGCTXDataType)3, 638 },
	{ (Il2CppRGCTXDataType)3, 526 },
	{ (Il2CppRGCTXDataType)2, 10972 },
	{ (Il2CppRGCTXDataType)3, 48224 },
	{ (Il2CppRGCTXDataType)2, 5394 },
	{ (Il2CppRGCTXDataType)2, 5719 },
	{ (Il2CppRGCTXDataType)3, 48225 },
	{ (Il2CppRGCTXDataType)3, 48226 },
	{ (Il2CppRGCTXDataType)3, 528 },
	{ (Il2CppRGCTXDataType)2, 962 },
	{ (Il2CppRGCTXDataType)2, 1417 },
	{ (Il2CppRGCTXDataType)3, 525 },
	{ (Il2CppRGCTXDataType)3, 527 },
	{ (Il2CppRGCTXDataType)3, 540 },
	{ (Il2CppRGCTXDataType)2, 964 },
	{ (Il2CppRGCTXDataType)3, 542 },
	{ (Il2CppRGCTXDataType)2, 1420 },
	{ (Il2CppRGCTXDataType)3, 539 },
	{ (Il2CppRGCTXDataType)3, 541 },
	{ (Il2CppRGCTXDataType)2, 12832 },
	{ (Il2CppRGCTXDataType)2, 3265 },
	{ (Il2CppRGCTXDataType)3, 18152 },
	{ (Il2CppRGCTXDataType)2, 4432 },
	{ (Il2CppRGCTXDataType)2, 13339 },
	{ (Il2CppRGCTXDataType)3, 48219 },
	{ (Il2CppRGCTXDataType)3, 48220 },
	{ (Il2CppRGCTXDataType)2, 5955 },
	{ (Il2CppRGCTXDataType)3, 48221 },
	{ (Il2CppRGCTXDataType)2, 858 },
	{ (Il2CppRGCTXDataType)2, 1388 },
	{ (Il2CppRGCTXDataType)3, 422 },
	{ (Il2CppRGCTXDataType)3, 41911 },
	{ (Il2CppRGCTXDataType)2, 9682 },
	{ (Il2CppRGCTXDataType)3, 41938 },
	{ (Il2CppRGCTXDataType)2, 1891 },
	{ (Il2CppRGCTXDataType)3, 4262 },
	{ (Il2CppRGCTXDataType)3, 41917 },
	{ (Il2CppRGCTXDataType)3, 15619 },
	{ (Il2CppRGCTXDataType)2, 1013 },
	{ (Il2CppRGCTXDataType)3, 41912 },
	{ (Il2CppRGCTXDataType)2, 9677 },
	{ (Il2CppRGCTXDataType)3, 4799 },
	{ (Il2CppRGCTXDataType)2, 1943 },
	{ (Il2CppRGCTXDataType)2, 3485 },
	{ (Il2CppRGCTXDataType)3, 15637 },
	{ (Il2CppRGCTXDataType)3, 41913 },
	{ (Il2CppRGCTXDataType)3, 15614 },
	{ (Il2CppRGCTXDataType)3, 15615 },
	{ (Il2CppRGCTXDataType)3, 15613 },
	{ (Il2CppRGCTXDataType)3, 15616 },
	{ (Il2CppRGCTXDataType)2, 3481 },
	{ (Il2CppRGCTXDataType)2, 12895 },
	{ (Il2CppRGCTXDataType)3, 19542 },
	{ (Il2CppRGCTXDataType)3, 15618 },
	{ (Il2CppRGCTXDataType)2, 5208 },
	{ (Il2CppRGCTXDataType)3, 15617 },
	{ (Il2CppRGCTXDataType)2, 5047 },
	{ (Il2CppRGCTXDataType)2, 12825 },
	{ (Il2CppRGCTXDataType)2, 5345 },
	{ (Il2CppRGCTXDataType)2, 5680 },
	{ (Il2CppRGCTXDataType)3, 18131 },
	{ (Il2CppRGCTXDataType)2, 4425 },
	{ (Il2CppRGCTXDataType)3, 20707 },
	{ (Il2CppRGCTXDataType)3, 20708 },
	{ (Il2CppRGCTXDataType)3, 20713 },
	{ (Il2CppRGCTXDataType)2, 5949 },
	{ (Il2CppRGCTXDataType)3, 20710 },
	{ (Il2CppRGCTXDataType)3, 60807 },
	{ (Il2CppRGCTXDataType)2, 3489 },
	{ (Il2CppRGCTXDataType)3, 15667 },
	{ (Il2CppRGCTXDataType)1, 5197 },
	{ (Il2CppRGCTXDataType)2, 12838 },
	{ (Il2CppRGCTXDataType)3, 20709 },
	{ (Il2CppRGCTXDataType)1, 12838 },
	{ (Il2CppRGCTXDataType)1, 5949 },
	{ (Il2CppRGCTXDataType)2, 13337 },
	{ (Il2CppRGCTXDataType)2, 12838 },
	{ (Il2CppRGCTXDataType)2, 5352 },
	{ (Il2CppRGCTXDataType)2, 5685 },
	{ (Il2CppRGCTXDataType)3, 20714 },
	{ (Il2CppRGCTXDataType)3, 20712 },
	{ (Il2CppRGCTXDataType)3, 20711 },
	{ (Il2CppRGCTXDataType)2, 731 },
	{ (Il2CppRGCTXDataType)3, 15682 },
	{ (Il2CppRGCTXDataType)2, 982 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	206,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	69,
	s_rgctxIndices,
	312,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
