// Write a program to demonstrate the use of #define preprocessor directive.
// MACROS
#include <iostream>
using namespace std;

#define HELLO 5
#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 43
#define ELE 1,\
            2,\
            3,4
#define FUN(a,b) (a*b)

int main()
{
    cout<<HELLO<<endl;
    cout<<FOLLOWERS<<endl;
    int ar[4]={ELE};
    cout<<*ar+1<<endl;
    cout<<FUN(4,5);
    return 0;
}