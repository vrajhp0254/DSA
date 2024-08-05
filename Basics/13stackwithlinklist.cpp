#include <iostream>
using namespace std;

// class node
class node
{
public:
    int data;
    node *next;
    node() {}
    node(int a)
    {
        this->data = a;
        this->next = NULL;
    }
};

class stack :public node{
    public:
    node* start;
    node* top;
    stack(){
        top=nullptr;
        start=nullptr;
    }


void push(int data){
    if (top==nullptr)
    {
        this->data=data;
        top=this;
        start=this;
        next=nullptr;
    }
    else{
        node * n=new stack();
        top->next=n;
        top=top->next;
        top->data=data;
        top->next=nullptr;
    }
    
}
void display(){
    while (start!=nullptr)
    {
        cout<<start->data<<endl;
        start=start->next;
    }
    
}

void pop(){
    if (start==top)
    {
        top=nullptr;
        start=nullptr;
        return ;
    }
    
    while (start->next!=top)
    {
        start=start->next;
    }
    start->next=nullptr;
    top=start;
}

};


int main()
{
    stack* s=new stack();
    s->push(5);
    s->push(50);
    s->pop();
    s->push(53);
    s->pop();
    s->display();
    return 0;
}