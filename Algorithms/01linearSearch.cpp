// search line by line in an array 
#include <iostream>
using namespace std;

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int a;
    int i=0;
    cout<<"enter the element "<<endl;
    cin>>a;
    while (i<10)
    {
        if(arr[i]==a)
            break;
        
        i++;
    }
    
    if(i>10)
        cout<<"that element is not found in array"<<endl;
    else
        cout<<"the position of that element is "<<i;
    return 0;
}