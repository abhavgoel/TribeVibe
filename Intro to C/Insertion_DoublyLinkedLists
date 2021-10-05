#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
} * head, *last;

int main()
{
    int n, data, choice = 1;
    head = NULL;
    last = NULL;

    while (choice != 0)
    {
        printf("==================\n");
        printf("Doubly Linked List Program\n");
        printf("==================\n");
        printf("1.Create List\n");
        printf("2.Insert node at beginning\n");
        printf("3.Insert node at end\n");
        printf("4.Insert node at N\n");
        printf("5.Display List\n");
        printf("0.Exit\n");
        printf("==================\n");
        printf("Enter your choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the total number of nodes in list:");
            scanf("%d", &n);
            createList(n);
            break;

        case 2:
            printf("Enter the data of first element");
            scanf("%d", &data);

            insertAtBeginning(data);
            break;

        case 3:
            printf("Enter data of last node");
            scanf("%d", &data);
            insertAtEnd(data);
            break;

        case 4:
            printf("Enter the position where you want to insert new node:");
            scanf("%d", &data);
            printf("Enter data of %d node");
            scanf("%d", &data);
            insertAtN(data, n);
            break;

        case 5:
            displayList();
            break;

        case 0:
            break;
        default: //when none of the cases is true
            printf("Invalid Choice");
        }
        printf("\n\n\n\n");
    }
    return 0;
}
void createList(int n)
{
    int i, data;
    struct Node *newNode;
    if (n >= 1)
    {
        head = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter data of node 1");
        scanf("%d", &data);

        head->data = data;
        head->prev = NULL;
        head->next = NULL;

        last = head;

        for (i = 2; i <= n; i++)
        {
            newNode = (struct Node *)malloc(sizeof(struct Node));
            printf("Enter the data of node %d", i);
            scanf("%d", &data);
            newNode->data = data;
            newNode->prev = last;
            newNode->next = NULL;

            last->next = newNode;
            last = newNode; //last basically indicates what has been added lastly
        }
        printf("\nDoubly Linked List created successfully\n");
    }
}
void displayList()
{
    struct Node *temp;
    int n = 1;
    if (head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp = head;
        printf("Data in the list:\n");
        while (temp != NULL)
        {
            printf("Data of node %d =%d\n", n, temp->data);
            n++;
            temp = temp->next;
        }
    }
}
void insertAtBeginning(int data)
{
    struct Node *newNode;
    if (head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = head;
        newNode->prev = NULL;

        head->prev = newNode;
        printf("Node inserted successfully at the beginning");
    }
}

void insertAtEnd(int data)
{
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    //newNode->data=data;
    //newNode->next=NULL;
    if (last == NULL)
    {
        printf("Empty list!!sorry\n");
    }
    else
    {
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = last;

        last->next = newNode;
        last = newNode;
        printf("Node inserted successfully at the end");
    }
}
void insertAtN(int data, int position)
{
    int i;
    struct Node *newNode, *temp;
    if (head == NULL)
    {
        printf("Error!");
    }
    else
    {
        temp = head;
        i = 1;
        while (i < position - 1 && temp != NULL)
        {
            temp = temp->next;
            i++;
        }
        if (position == 1)
        {
            insertAtBeginning(data);
        }
        else if (temp == last)
        {
            insertAtEnd(data);
        }
        else if (temp != NULL)
        {
            newNode = (struct Node *)malloc(sizeof(struct Node));
            newNode->data = data;
            newNode->next = temp->next;
            newNode->prev = temp;

            if (temp->next != NULL)
            {
                temp->next->prev = newNode;
                
            }
             temp->next = newNode;
             printf("Node inserted successfully");
        }
        else{
            printf("Invalid Position");
        }
    }
}
