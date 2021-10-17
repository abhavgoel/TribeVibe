
#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head;


void insertbeg(int d)
{
    node *temp=new node;
    temp->data=d;
    if(head==NULL)
    {
        head=temp;
        temp->next=NULL;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
}

void insertend(int d)
{
    node *temp=new node;
    temp->data=d;
    temp->next=NULL;
    node *cur;
    cur=head;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        while(cur->next!=NULL)
        {
            cur=cur->next;
        }
        cur->next=temp;
    }
}

void insertpos(int d,int p)
{
    node *temp=new node;
    temp->data=d;
    node *cur;
    cur=head;
    if(p<=1)
    {
        temp->next=head;
        head=temp;
    }
    else
    {
        --p;
        while(--p && cur!=NULL)
        {
            cur=cur->next;
        }
        temp->next=cur->next;
        cur->next=temp;
    }
}

void display()
{
    node *temp;
    temp=head;
    if(head==NULL)
        cout<<"List is empty"<<endl;
    else
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl<<endl;
}

int main()
{
    int c,e,pos;
    char ch;
    h:
    cout<<endl<<"1. Insert at the beginning ."<<endl;
    cout<<"2. Insert at the end ."<<endl;
    cout<<"3. Insert at the given position ."<<endl;
    cout<<"4. Display the list ."<<endl;
    cout<<"5. To exit ."<<endl;
    cout<<endl<<"Enter your choice : ";
    cin>>c;
    switch(c)
    {
            case 1:
            cout<<"Enter the element : ";
            cin>>e;
            insertbeg(e);
            break;

            case 2:
            cout<<"Enter the element : ";
            cin>>e;
            insertend(e);
            break;

            case 3:
            cout<<"Enter the element : ";
            cin>>e;
            cout<<"Enter the position : ";
            cin>>pos;
            insertpos(e,pos);
            break;

            case 5:
            exit(0);

            case 4:
            display();
            break;

            default:
            cout<<"Wrong choice entered , enter again ."<<endl;
            goto h;

    }
    cout<<endl<<"Do you want to continue ? "<<endl;
    cin>>ch;
    while(ch=='y' || ch=='Y')
        goto h;
    return 0;
}
