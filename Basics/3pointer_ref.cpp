// all about pointer and reference variable
#include <iostream>
using namespace std;

 void pint(int *a){
    // a=a+1;
    *a =*a+1;
    // cout<<a<<endl;
}

 void pin(int **a){
    // a=a+1;

    *a=*a+2;

    // **a =**a+1;
    cout<<*a<<endl;
}

void up(int &a){
    a=a+1;
}
// return type of reference variable and pointer is bad practice
int main()
{
    //              pointer 
    // int a=5;
    // int arr[5]={7,4,8,6,9};
    // char c='r';
    // char crr[5]="hell";


    // int *p=&a;
    // int *p1=arr;
    // char *p2=&c;
    // char *p3=crr;
    
    // *p=8;
    // cout<<p<<endl; 
    // cout<<p1<<endl;
    // cout<<p2<<endl;
    // cout<<crr<<endl;
    // cout<<p3<<endl;


    // cout<<*p<<endl;
    // cout<<*p1<<endl;
    // cout<<*p2<<endl;
    // cout<<*crr<<endl;


    // cout<<&a<<endl;
    // cout<<*(++p1)<<endl;
    // cout<<&c<<endl;
    // cout<<&crr<<endl;

    // cout<<p;
    // pint(p);
    // cout<<p;
    // cout<<*p;

    // cout<<arr[0]<<endl;
    // pint(arr);
    // cout<<arr[0]<<endl;

    // cout<<3[arr];
    // cout<<arr+1;

    //              double pointer

    // int a=9;
    // int *c=&a;
    // int **b=&c;
    // int arr[5];
    // int * d=&arr[0];
    // int **e=&d;

    // cout<<a<<endl;
    // cout<<*c<<endl;
    // cout<<*b<<endl;

    // // cout<<b<<endl;
    // // cout<<&c<<endl;
    //  pin(b);

    // cout<<a<<endl;
    // cout<<*b<<endl;



    //                  reference variable 

    // int a=9;
    // int &b=a;
    // cout<<b<<endl;
    // cout<<a<<endl;


    // int a=9;
    // int &b=a;
    // cout<<b<<endl;
    // up(b);
    // cout<<b<<endl;

    // it is an bad practice because stack has low memory for program
    // int a;
    // cin>>a;
    // int arr[a];

    //                  solution is dyanmic memory 
    // int a;
    // cin>>a;
    // int *b=new int[a];
    // delete []b;

    //                          creating 2d array 

    // int a;
    // cin>>a;
    // int **b=new int *[a];
    // for (int i = 0; i < a; i++)
    // {
    //     b[i]=new int[a];
    // }
    
    // for (int i = 0; i < a; i++)
    // {
    //     for (int j = 0; j < a; j++)
    //     {
    //         cin>>b[i][j];
    //     }
        
    // }

    // for (int i = 0; i < a; i++)
    // {
    //     for (int j = 0; j < a; j++)
    //     {
    //         cout<<b[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // for (int i = 0; i < a; i++)
    // {
    //     delete  [] b[i];
    // }
    // delete []b;

    //              void pointer hold any datatype address 
    // int i=5;
    // void* a=&i;

    //                  address type casting
    char u='j';
    char *p=&u;
    int a=5;
    int* b=(int *)&u;

    // p=(char*)&a;
    *(int **)&p=&a;

    cout<<*b;
    return 0;
}