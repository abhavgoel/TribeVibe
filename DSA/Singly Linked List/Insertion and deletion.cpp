
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

void deletebeg()
{
    node *temp=new node;
    if(head==NULL)
        cout<<"list is already empty"<<endl;
    else
    {
        temp=head;
        head=head->next;
        delete temp;
    }
}

void deleteend()
{
    node *temp,*cur;
    temp=head;
    while(temp->next!=NULL)
    {
        cur=temp;
        temp=temp->next;
    }
    cur->next=NULL;
    delete temp;
}

void deletepos(int p)
{
    node *cur,*pre;
    cur=head;
    if(p<=1)
    {
        cur=head;
        head=head->next;
        delete cur;
    }
    else
    {
        while(--p && cur->next!=NULL)
        {
            pre=cur;
            cur=cur->next;
        }
        pre->next=cur->next;
        delete cur;
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
    cout<<"4. Delete at the beginning ."<<endl;
    cout<<"5. Delete at the end ."<<endl;
    cout<<"6. Delete at the given position ."<<endl;
    cout<<"7. Display the list ."<<endl;
    cout<<"8. To exit ."<<endl;
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

            case 4:
            deletebeg();
            break;

            case 5:
            deleteend();
            break;

            case 6:
            cout<<"Enter the position : ";
            cin>>pos;
            deletepos(pos);
            break;

            case 7:
            display();
            break;

            case 8:
            exit(0);



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
