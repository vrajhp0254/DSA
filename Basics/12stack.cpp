#include <iostream>
using namespace std;
// it also exits of stack in one of the library

// impliment with array
class stack
{
private:
    int *arr;
    int size=10;        //default size is 10
    int top;

public:
    stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }
    void push(int data)
    {
        if (top == size - 1)
        {
            cout << "stack overflow" << endl;
            return;
        }
        else
        {
            top++;
            top[arr] = data;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack underflow" << endl;
        }
    }
    void display()
    {
        if (top >= 0)
        {
            cout << top[arr] << endl;
        }
        else
        {
            cout << "cannot find any stack here";
        }
    }
};

int main()
{
    stack s(5);
    s.push(8);
    s.pop();
    s.push(7);
    s.pop();
    s.display();
    return 0;
}