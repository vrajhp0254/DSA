// singly linklist
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
        this->next = NULL;
    }
    // ~node(){
    //     this->next=NULL;
    //     this->data=0;
    // }
};

// insert the data at any position
void insertatposition(node *&head, int position, int data)
{
    // node target(data);
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
                cout << position << " position does not exits " << endl;
                position = -1;
                break;
            }
            i++;
        }
        if (position != -1)
        {
            target->next = current->next;
            current->next = target;
        }
    }
}

void insertattail(node *&head, int data)
{
    int count = 1;
    node *current = head;
    if (current == NULL)
    {
        insertatposition(head, count, data);
        return;
    }
    count++;
    while (current->next != NULL)
    {
        current = current->next;
        count++;
    }
    insertatposition(head, count, data);
}
// to display the linklist
void display(node *&head)
{
    node *current = head;

    while (current != NULL)
    {
        cout << current->data << endl;
        current = current->next;
    }
}

// to delete a node at any position
void removeatposition(node *&head, int position)
{
    node *current = head;
    node *back;
    int i = 1;

    if (position == 1)
    {
        // cout << "in1" << endl;
        head = head->next;
        current = NULL;
    }

    else
    {
        while (i != position)
        {
            // cout << "ni2" << endl;
            if (current == NULL)
            {
                cout << position << "position is not found in linklist" << endl;
                return;
            }
            back = current;
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
            // cout << "in4" << endl;
            back->next = NULL;
        }
        else
        {
            // cout << "in3" << endl;
            back->next = current->next;
            current->next = NULL;
        }
    }
    // cout << "OUT" << endl;
}

// go to the required position
node *movetoposition(node *&head, int position)
{
    if (head == NULL)
    {
        cout << "no node available" << endl;
        return NULL;
    }

    node *current = head;
    int i = 1;
    while (i < position)
    {
        current = current->next;
        i++;
    }
    return current;
}

int length(node *head)
{
    int a = 0;
    node *current = head;

    while (current != NULL)
    {
        a++;
        current = current->next;
    }
    return a;
}

node *movetomiddle(node *&head)
{
    node *slow = head;
    node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
// questions
// to reverse the linklist
void reverse(node *&head)
{
    node *current = NULL;
    node *back = NULL;

    while (current != head)
    {
        current = head;
        if (head->next != NULL)
            head = head->next;
        current->next = back;
        back = current;
    }
}

// to reverse group of node in a linklist
node *reverseforgroup(node *&head, int k)
{
    node *current = NULL;
    node *back = NULL;
    node *forward = head;
    int i = 0;

    // base condition
    if (forward == NULL || k == 1)
    {
        return forward;
    }

    while (current != forward)
    {
        if (i < k)
        {
            current = forward;
            forward = forward->next;
            i++;
        }
        else
        {
            break;
        }
        current->next = back;
        back = current;
    }

    head->next = reverseforgroup(forward, k);
    head = current;
    return current;
}

// to detect the loop in linklist and delete it
void detectloop(node *&head)
{
    node *fast = head;
    node *slow = head;
    node *back = NULL;
    int a = 1;
    fast = fast->next->next;
    slow = slow->next;
    while (fast != slow)
    {
        // cout << "in detection" << endl;
        if (fast->next != NULL)
        {
            fast = fast->next->next;
        }

        slow = slow->next;
    }
    if (fast->next == NULL || slow->next == NULL)
    {
        cout << "loop is not present" << endl;
    }
    else
    {
        cout << "loop is present " << endl;

        slow = head;
        while (fast != slow)
        {
            a++;
            back = fast;
            fast = fast->next;
            slow = slow->next;
        }
        cout << "loop is at data " << fast->data << " and at position " << a << endl;
        back->next = NULL;
        cout << "loop is removed" << endl;
    }
}

void removeduplfromsorted(node *&head)
{
    node *current = head;
    while (current != NULL && current->next != NULL)
    {
        if (current->data == current->next->data)
        {
            current->next = current->next->next;
        }
        current = current->next;
    }
}

node *mergetwolist(node *left, node *right)
{
    node *ans = new node(-1);
    node *temp = ans;

    if (left == NULL)
    {
        return right;
    }
    if (right == NULL)
    {
        return left;
    }
    while (left != NULL && right != NULL)
    {
        if (left->data < right->data)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }
    while (left != NULL)
    {
        temp->next = left;
        temp = left;
        left = left->next;
    }
    while (right != NULL)
    {
        temp->next = right;
        temp = right;
        right = right->next;
    }
    ans = ans->next;
    return ans;
}

node *mergesort(node *&head)
{
    if (head->next == NULL)
    {
        return head;
    }

    node *left = head;
    node *right = NULL;
    node *mid = NULL;

    mid = movetomiddle(head);
    right = mid->next;
    mid->next = NULL;

    left = mergesort(left);
    right = mergesort(right);
    left = mergetwolist(left, right);
}

class stack
{
private:
public:
    int top = 0;
    int size = 10; // default size is 10
    node *sac = NULL;
    stack() {}
    stack(int size, int data)
    {
        this->size = size;
        top++;
        insertattail(sac, data);
    }
    void push(int data)
    {
        if (top == size)
        {
            cout << "stack is overflow" << endl;
            return;
        }
        else
        {
            top++;
            insertatposition(sac, top, data);
        }
    }
    void pop()
    {
        if (top > 0)
        {
            removeatposition(sac, top);
            top--;
        }
        else
        {
            cout << "stack is underflow" << endl;
        }
    }
    void displaystack()
    {
        node *target = movetoposition(sac, top);
        if (target != NULL)
        {
            cout << target->data << endl;
        }
        else
        {
            return;
        }
    }
};
int main()
{
    //                                       to build a stack using linklist
    stack a;
    a.push(43);
    // a.push(43);
    // a.pop();
    // a.push(49);
    a.displaystack();

    //                                       main
    // node a(5);
    // node *head = &a;
    // insertatposition(head, 1, 4);
    // insertatposition(head, 3, 6);
    // insertatposition(head, 1, 3);
    // display(head);
    // removeatposition(head, 2);
    // display(head);

    //                                      reverse
    // node * head=new node(5);
    // insertatposition(head,2,6);
    // insertatposition(head,2,4);
    // insertatposition(head,2,3);
    // insertatposition(head,2,2);
    // display(head);
    // cout<<"h"<<endl;
    // reverse(head);
    // display(head);

    //                                      reverse for k group
    // node *head = new node(9);
    // insertatposition(head,1,8);
    // insertatposition(head,1,7);
    // insertatposition(head,1,6);
    // insertatposition(head,1,5);
    // insertatposition(head,1,4);
    // insertatposition(head,1,3);
    // insertatposition(head,1,2);
    // insertatposition(head,1,1);
    // display(head);
    // reverseforgroup(head,2);
    // display(head);

    //                                     find loop in linklist (5 ways to find)
    // node *head = NULL;
    // insertatposition(head, 1, 5);
    // insertatposition(head, 1, 4);
    // insertatposition(head, 1, 3);
    // insertatposition(head, 1, 2);
    // insertatposition(head, 1, 1);
    // node *attached = movetoposition(head, 3);
    // node *emit = movetoposition(head, 5);
    //  cout<<"data"<<attached->data;
    //  cout<<"data"<<emit->data;
    // emit->next=attached;
    //  display(head);
    // detectloop(head);
    // display(head);

    //                                     remove duplicates from a sorted and unsorted list
    // node *head = new node(6);
    // insertatposition(head, 2, 3);
    // insertatposition(head, 3, 8);
    // insertatposition(head, 4, 4);
    // insertatposition(head, 5, 1);
    // insertatposition(head, 5, 5);
    // insertatposition(head, 5, 3);
    // display(head);
    // removeduplfromsorted(head);
    // display(head);
    // node *mid = movetomiddle(head);
    // cout << mid->data;

    //                                          mergesort why merge sort in linklist is prefer than quicksort
    // node *head = new node(6);
    // insertatposition(head, 2, 3);
    // insertatposition(head, 3, 8);
    // insertatposition(head, 4, 4);
    // insertatposition(head, 5, 1);
    // insertatposition(head, 5, 5);
    // insertatposition(head, 5, 9);
    // display(head);
    // head=mergesort(head);
    // cout<<"h"<<endl;
    // display(head);
    return 0;
}
