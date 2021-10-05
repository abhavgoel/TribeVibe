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
        printf("============================================\n");
        printf("DOUBLY LINKED LIST PROGRAM\n");
        printf("============================================\n");
        printf("1. Create List\n");
        printf("2. Delete node - from beginning\n");
        printf("3. Delete node - from end\n");
        printf("4. Delete node - from N\n");
        printf("5. Display list\n");
        printf("0. Exit\n");
        printf("--------------------------------------------\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the total number of nodes");
            scanf("%d", &n);
            createList(n);
            break;

        case 2:
            deleteFromBegin();
            break;
        case 3:
            deleteFromEnd();
            break;
        case 4:
            printf("Enter the node position which you want to delete: ");
            scanf("%d", &n);
            deleteFromN(n);
            break;
        case 5:
            displayList();
            break;
        case 0:
            break;
        default:
            printf("Error! Invalid choice. Please choose between 0-5");
        }

        printf("\n\n\n\n\n");
    }
    return 0;
}
void createList(int n)
{
    int i, data;
    struct Node *newNode;
    if (n >= 1)
    {
        //creating head node
        head = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter data of Node 1\n");
        scanf("%d", &data);
        head->data = data;
        head->prev = NULL;
        head->next = NULL;
        last = head;
        //creating the rest of the nodes
        for (i = 2; i <= n; i++)
        {
            newNode = (struct Node *)malloc(sizeof(struct Node));
            printf("Enter the data of node %d\n", i);
            scanf("%d", &data);
            newNode->data = data;
            newNode->prev = last;
            newNode->next = NULL;
            last->next = newNode;
            last = newNode;
        }
        printf("DOUBLY LINKED LIST CREATED SUCCESSFULLY");
    }
}
void displayList(){
    struct Node* temp;
    int n=1;
    if(head==NULL){
        printf("List is empty");
    }
    else{
        temp=head;
        printf("Data in the list:\n");
        while(temp!=NULL){
            printf("Data of node %d = %d\n",n,temp->data);
            n++;
            temp=temp->next;
        }
    }
}
void deleteFromBegin()
{
    struct Node *toDelete;
    if (head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        toDelete = head;
        head = head->next;
        if (head != NULL)
        {
            head->prev = NULL;
        }
        free(toDelete);
        printf("Deleted succesfully");
    }
}
void deleteFromEnd(){
    struct Node* toDelete;
    if(last==NULL){
        printf("Unable to delete! List is Empty");
    }
    else{
        toDelete=last;
        last=last->prev;
        if(last!=NULL){ //when there is only one element to be deleted
            last->next=NULL;
        }
        free(toDelete);
        printf("Sucessfully deleted from the end");

    }
}
void deleteFromN(int position){
    struct Node* current;
    int i;
    current=head;
    for(i=1;i<position && current!=NULL;i++){
        current=current->next;
    }
    if(position==1){
        deleteFromBegin();
    }
    else if(current==last){
        deleteFromEnd();
    }
    else if(current!=NULL){
        current->prev->next=current->next;
        current->next->prev=current->prev;
        free(current);
        printf("Successfully deleted node from the Nth position");
    }
    else{
        printf("Invalid Position");
    }

}
