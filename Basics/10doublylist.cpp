#include <iostream>
using namespace std;

// node class 
class node
{
public:
    node *prev;
    int data;
    node *next;

    node()
    {
        this->next = NULL;
        this->prev = NULL;
    }
    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

// to insert the data at any position
void insertatposition(node *&head, int data, int position)
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
        head->prev = target;
        head = target;
    }
    else
    {
        while (i < position)
        {
            if (current->next != NULL)
            {
                current = current->next;
            }
            else
            {
                cout<<"In doubly linklist " << position << " position does not exits " << endl;
                position = -1;
                break;
            }
            i++;
        }
        if (position != -1)
        {
            target->next = current->next;
            current->next = target;
            target->prev=current;
            if(target->next!=NULL)
                (target->next)->prev=target;
        }
    }
}

// to display the data 
void display(node *&head)
{
    node* current=head;
    while (current!=NULL)
    {
        cout<<current->data<<endl;
        current=current->next;
    }
    
}

// to delete the data at any position 
void removeatposition(node *&head, int position)
{
    node *current = head;
    node *back;
    int i = 1;

    if (position == 1)
    {
        cout << "in1" << endl;
        head = head->next;
        head->prev=NULL;
    }

    else
    {
        while (i != position)
        {
            cout << "ni2" << endl;
            if (current == NULL)
            {
                cout << position << "position is not found in linklist" << endl;
                return;
            }
            back=current;
            current = current->next;
            i++;
        }
        if (current == NULL)
        {
            cout << position << "position is not found in linklist" << endl;
            return;
        }

        else if (current->next == NULL)
        {
            cout << "in4" << endl;
            back->next = NULL;
        }
        else
        {
            cout << "in3" << endl;
            back->next = current->next;

            current->next = NULL;
            current->prev = NULL;
            back->next->prev = NULL;

        }
    }
    cout << "OUT" << endl;
}

int main()
{
    node* head=NULL;
    insertatposition(head,5,1);
    insertatposition(head,4,1);
    insertatposition(head,3,1);
    insertatposition(head,2,1);
    // insertatpositon(head,7,3);
    removeatposition(head,1);
    display(head);

    return 0;
}