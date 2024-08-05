// Title: Const
// Description:
//   1. const variable
//   2. const pointer
//   3. const pointer to const variable
//   4. const function
//   5. const function parameter
//   6. const return type
//   7. const object
//   8. const object calling const function
//   9. const object calling non-const function

#include <iostream>
using namespace std;

int fun(int *a)
{
    return *a;
}

int fun2 (const int*  a){
}
void fun3(const int a)
{
}
int fun4(int* const a){

}
const int foo(int a)
{
    return a;
}

const int foo2(const int a){
    return a;
}

// look const int * and int* const are different 
int main()
{
    // must be initialize at decleration
    const int a = 5;

    //  this give an error
    //   a=6;

    // const variable is stored in only in  pointer that point to const value
    const int *b = &a;

    // const variable can be stored in  pointer
    int a1 = 5;
    int *b2 = &a1;
    *b2 = 6;

    const int *b1 = &a1;
    b1 = &a;
    // you cannot change the value
    // *b1=6;

    // const pointer variable pointer to value
    int a3 = 6;
    int *const b3 = &a1;
    // const pointer cannot change
    // b3=&a3;
    *b3 = 9;

    // const pointer points to const vairable
    const int *const b4 = &a1;
    const int *const b5 = &a;
    // you cannot change address and value
    // b4=&a3;
    // *b5=2;

    // you cannot pass non-const variable function parameter to const variable
    // fun(b);
    fun(b2);

    fun2(b3);
    fun2(b);

    // you can pass const and non-const in const argument
    fun3(a3);
    fun3(a);

    // fun4(b);
    fun4(b2);

    // it doesn't matter what argument you pass for const return type it produce copy for it and can be change both
    foo(a);

    // it does not matter what you pass it can not be changeable becoz it produce const copy for it 
    foo2(a);

    // const function can be called by const or non-const object
    // const object is inistialize at its declaration with the help of object
    // and const object can call only const function

    return 0;
}