#include <iostream>
using namespace std;
// node class
class node
{
public:
    int data;
    node *next;
    node() {}
    node(int a)
    {
        this->data = a;
        this->next = this;
    }
    // ~node(){
    //     this->next=NULL;
    //     this->data=0;
    // }
};

// to insert the element at any position
void insertatposition(node *&head, int position, int data)
{
    node *target = new node(data);
    node *current = head;
    int i = 2;
    if (head == NULL)
    {
        head = target;
    }
    else if (position == 1)
    {
        
        target->next = head;
        while (current->next!=head)
        {
            current=current->next;
        }
        current->next=target;
        head = target;
        
    }
    else
    {
        while (i < position)
        {
            if (current->next == head)
            {
                cout << "not available" << endl;
                position = -1;
                break;
            }
            current = current->next;
            i++;
        }
        if (position == -1)
        {
            target->next = current->next;
            current->next = target;
        }
    }
}

// to display the linklist
void display(node *&head)
{
    node *current = head;
    do
    {
        cout << current->data <<" 1"<< endl;
        current = current->next;
    } while (current != head);
}

void removeatposition(node* &head,int position){
    node* current=head;
    node* target=current;
    int i=1;
    if (position==1)
    {
        
        head=head->next;
        if (head->next==head)
        {
            head=NULL;
        }
        while (current->next!=target)
        {
            current=current->next;
        }
        current->next=head;
        
    }
    else{
        while (i!=position)
        {
            current=target;
            target=target->next;
            if (target==head)
            {
                cout<<"not available"<<endl;
                position=-1;
                break;
            }
            
            i++;
        }
        if (position!=-1)
        {
            current->next=target->next;
            target->next=NULL;
        }
        
    }
    
}

node* movetomiddle(node*&head){
    node*slow=head;
    node* fast=head->next;
    while (fast->next!=head && fast!=head)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
node* movetotail(node*&head){
    node* current=head;
    while (current->next!=head)
    {
        current=current->next;
    }
    return current;
}
node* divideintwo(node* &head){

    node*h2=movetomiddle(head);
    node*t1=h2;
    node*t2=movetotail(head);
    h2=h2->next;
    t1->next=head;
    t2->next=h2;
    return h2;

}
int main()
{
    node *head = NULL;
    insertatposition(head,1,5);
    insertatposition(head,1,5);
    insertatposition(head,1,4);
    insertatposition(head,1,4);
    insertatposition(head,1,6);
    insertatposition(head,1,6);
    insertatposition(head,1,3);
    // removeatposition(head,4);
    display(head);
    cout<<"original finished"<<endl;
    node* head2=divideintwo(head);
    display(head);
    cout<<"second"<<endl;
    display(head2);
    return 0;
}