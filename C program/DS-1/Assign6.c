#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
//To create next 
void create(struct node *h)
{
    struct node *temp,*curr;
    temp = h;
    int choice = 1;
    while (choice == 1)
    {
        curr = (struct node *)malloc(sizeof(struct node));
        printf("Data: ");
        scanf("%d", &curr->data);
        curr->next = NULL;
        temp->next = curr;
        temp = curr;
        printf("Want to Enter another data (Enter 1 to add ): ");
        scanf("%d",&choice);
    } 
}
// To display Next
void display(struct node *h)
{
    struct node *curr;
    if(h->next == NULL)
    {
        printf("List is Empty!");
    }
    else
    {
        curr = h->next;
        while(curr!=NULL)
        {
            printf("\nCurrent:%p   Data: %d  Next:%p\n",curr ,curr->data,curr->next);
            curr = curr->next;
        }
    }
}
// To display Total length
int length(struct node *h)
{
    int i = 0;
    struct node *curr;
    curr = h->next;
    while(curr!=NULL)
    {
        i++;
        curr = curr->next;
    }
    return i;
}
//to insert data at particular position
void insert(struct node *h)
{
    int i = 1, pos, k = 0;
    struct node *curr, *nextnode;
    nextnode = (struct node *)malloc(sizeof(struct node));
    curr = h;
    printf("Data: ");
    scanf("%d", &nextnode->data);
    printf("Pos Where you want to insert: ");
    scanf("%d", &pos);
    k = length(h);
    if (pos > (k+1))
    {
        printf("Data can't be added");
    }
    else
    {
        while(curr!=NULL && i<pos)
        {
            i++;
            curr = curr->next;
        }
        nextnode->next = curr->next;
        curr->next = nextnode;
    }
}
// to delete the particular element
void deletePos(struct node *h)
{
    struct node *deleteNode, *curr, *prev, *temp;
    prev = h;
    int ctr = 1, pos;
    curr = h->next;
    printf("Enter the pos to delete: ");
    scanf("%d", &pos);
    int k = length(h);
    if(k<pos)
    {
        printf("\nCan't delete!");
    }
    else
    {
        while(ctr<pos && curr!=NULL)
        {
            ctr++;
            prev = curr;
            curr = curr->next;
        }
        temp = curr;
        prev->next = curr->next;
        curr->next = NULL;
        free(temp);
    }
}
//To revese the linked list
void reverse(struct node *h)
{
    struct node *prev, *curr,*future;
    prev = NULL;
    curr = h->next;
    while(curr!=NULL)
    {
        future = curr->next;
        curr->next = prev;
        prev = curr;
        curr = future;
    }
    h->next = prev;
}
//to sort the data
void sort(struct node *h)
{
    int k = length(h);
    struct node *temp, *prev, *curr;
    for (int i = 0; i < k-1; i++)
    {
        prev = h;
        curr = h->next;
        for (int j = 0; j < k-i-1; j++)
        {
            temp = curr->next;
            if(curr->data > temp->data)
            {
                prev->next = temp;
                curr->next = temp->next;
                temp->next = curr;
                prev = temp;
            }
            else
            {
                prev = curr;
                curr = curr->next;
            }
        }
    }
}
void merge(struct node *h1,struct node *h2 )
{
    struct node *curr1, *curr2, *temp;
    int flag;
    curr1 = h1->next;
    curr2 = h2->next;
    if(curr1->data < curr2->data)
    {
        temp = h1;
        flag = 1;
    }
    else
    {
        temp = h2;
        flag = 0;
    }
    while(curr1!=NULL && curr2!=NULL)
    {
        if(curr1->data < curr2->data)
        {
            temp->next = curr1;
            temp = curr1;
            curr1 = curr1->next;
        }
        else
        {
            temp->next = curr2;
            temp = curr2;
            curr2 = curr2->next;
        }
    }
    if(curr1 == NULL)
    {
        temp->next = curr2;
    }
    if(curr2 == NULL)
    {
        temp->next = curr1;
    }
    if(flag == 1)
    {
        display(h1);
    }
    else
    {
        display(h2);
    }
}
int main()
{
    struct node *head,*head1;
    head = (struct node *)malloc(sizeof(struct node));
    head->next = NULL;
    head1 = (struct node *)malloc(sizeof(struct node));
    head1->next = NULL;
    int choice;
    while(choice!=9)
    {
    printf("\n============Menu============\n");
    printf("1.Create\n2.Display.\n3.Length.\n4.Insert\n5.Delete\n6.reverse\n7.Sort\n8.Merge.\n9.Exit\n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1: 
            create(head);
            break;
        case 2:
            display(head);
            break;
        case 3:
            printf("Toal Lentgh of linked List is: %d",length(head));
            break;
        case 4:
            insert(head);
            break;
        case 5:
            deletePos(head);
            break;
        case 6:
            reverse(head);
            break;
        case 7:
            sort(head);
            break;
        case 8:
            printf("Enter Second Linked List: ");
            create(head1);
            sort(head);
            sort(head1);
            merge(head, head1);
            break;
        }
    }    
    return 0;
}
