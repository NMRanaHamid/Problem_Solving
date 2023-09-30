#include<bits/stdc++.h>
using namespace std ;

class Node
{
    public :
    int val;
    Node* next ;
    Node* prev ;
    Node(int val)
    {
        this->val = val;
        this->next = NULL ;
        this->prev = NULL ;
    }
};

void insert_at_head(Node*& head, int val)
{
    Node* newnode = new Node(val);
    if(head==NULL)
    {
        head = newnode ;
        return ;
    }
    newnode->next = head ;
    head->prev = newnode ;
    head = newnode ;
}

void insert_at_position(Node* head, int pos, int val)
{
    Node* newnode = new Node(val);
    Node* tmp = head ;
    for(int i=1; i<=pos-1; i++)
    {
        tmp = tmp->next ;
        if(tmp==NULL)
        {
            cout<<"Invalid Index "<<endl;
            return ;
        }
    }
    newnode->next = tmp->next ;
    tmp->next = newnode ;
    newnode->prev = tmp ;
    newnode->next->prev = newnode ;

}

void insert_at_tail(Node*& head, int val)
{
    Node* newnode = new Node(val);
    Node* tmp = head ;
    if(head==NULL)
    {
        head = newnode ;
        return ;
    }
    while(tmp->next!=NULL)
    {
        tmp = tmp->next ;
    }
    tmp->next = newnode ;
    newnode->prev = tmp ;
}

void delete_tail(Node*& head ,Node*& tail)
{
    Node* del = tail ;
    tail = tail->prev ;
    delete del ;
    if(tail==NULL)
    {
        head = NULL ;
        return ;
    }
    tail->next = NULL ;
}

void delete_head(Node*& head, Node*& tail)
{
    Node* del = head ;
    head = head->next;
    delete del ;
    if(head==NULL)
    {
        tail = NULL ;
        return ;
    }
    head->prev = NULL ;
    
}

void delete_position(Node*& head, int pos)
{
    Node* tmp = head ;
    for(int i=1; i<=pos-1; i++)
    {
        tmp = tmp->next ;
        if(tmp==NULL)
        {
            cout<<"Invalid position "<<endl;
            return ;
        }
    }
    if(tmp->next==NULL)
    {
        cout<<"Invalid Position"<<endl;
        return ;
    }
    Node* del = tmp->next ;
    tmp->next = tmp->next->next ;
    tmp->next->prev = tmp ;
    delete del ;
}

void print_normal(Node * head)
{
    Node* tmp = head ;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next ;
    }
}

void print_reverse(Node* tail)
{
    while(tail!=NULL)
    {
        cout<<tail->val<<" ";
        tail = tail->prev ;
    }
}

int main()
{
    Node* head = NULL ;
    Node* tail = NULL ;
    while(1)
    {
        int op;
        cout << "Option 1: Insert at Head" << endl;
        cout << "Option 2: insert at any  position " << endl;
        cout << "Option 3: insert at tail" << endl;
        cout<< "Option 4 : delete tail node "<<endl;
        cout<<"Option 5 : delete any node "<<endl;
        cout<<"Option 6 : delete head node"<<endl;
        cout<<"Option 7 : print linked list normally "<<endl;
        cout<<"Option 8 : print linked list reversed "<<endl;
        cin>>op ;
        if(op==1)
        {
            // insert at head
            int val ;
            cout<<"Enter value : ";
            cin>>val;
            insert_at_head(head, val);
        }
        else if(op==2)
        {
            // insert at any position
            int pos,val;
            cout<<"Enter position : ";
            cin>>pos ;
            cout<<"Enter value : ";
            cin>>val ;
            if(pos==0)
            {
                insert_at_head(head,val);
            }
            else
            {
                insert_at_position(head,pos,val);
            }
        }
        else if(op==3)
        {
            // insert at tail
            int val;
            cout<<"Enter value : ";
            cin>>val;
            insert_at_tail(head, val);
        }
        else if(op==4)
        {
            // delete tail node
            delete_tail(head,tail);
        }
        else if(op==5)
        {
            // delete any node
            int pos;
            cout<<"Enter position : ";
            cin>>pos ;
            if(pos==0)
            {
                delete_head(head);
            }
            else
            {
                delete_position(head,pos);
            }
        }
        else if(op==6)
        {
            // delete head node
            delete_head(head,tail);
        }
        else if(op==7)
        {
            // print linked list normally
            print_normal(head);
            cout<<endl;
        }
        else if(op==8)
        {
            // print linked list reverse
            print_reverse(tail);
            cout<<endl;
        }
        else
        {
            cout<<endl;
            break;
        }
    }

    return 0;
}
