// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.41.5/source/uno/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{struct Array;}}

namespace g{
namespace Uno{

// public static class Array :145
// {
uClassType* Array_typeof();
void Array__Copy1_fn(uType* __type, uArray* sourceArray, uArray* destinationArray, int* length);
void Array__Sort_fn(uType* __type, uArray* elements, int* index, int* length, uDelegate* comparison);
void Array__Sort1_fn(uType* __type, uArray* elements, uDelegate* comparison);

struct Array : uObject
{
    static void Copy1(uType* __type, uArray* sourceArray, uArray* destinationArray, int length);
    static void Sort(uType* __type, uArray* elements, int index, int length, uDelegate* comparison);
    static void Sort1(uType* __type, uArray* elements, uDelegate* comparison);
};
// }

}} // ::g::Uno
