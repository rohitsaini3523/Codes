#include<stdio.h>
#include<stdlib.h>
struct node
{
    int coefficent;
    int power;
    struct node *next;
};
//To create next 
void create(struct node *h)
{
    struct node *temp,*curr;
    temp = h;
    int ch = 1;
    while (ch == 1)
    {
        curr = (struct node *)malloc(sizeof(struct node));
        printf("Coefficent: ");
        scanf("%d", &curr->coefficent);
        printf("Power: ");
        scanf("%d", &curr->power);
        curr->next = h;
        temp->next = curr;
        temp = curr;
        printf("Want to Enter another data (Enter 1 to add ): ");
        scanf("%d",&ch);
    } 
}
// To display Next
void display(struct node *h)
{
    struct node *curr;
    curr = h->next;
    while(curr!=h)
    {
        printf("%dX^%d + ",curr->coefficent,curr->power);
        curr = curr->next;
    }
}
int power(int n, int m)
{
    int res =1;
    while (m--)
    {
        res *= n;
    }
    return res;
}
void evaluate(struct node *h)
{
    struct node *curr;
    curr = h->next;
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    int result = 0;
    while (curr != h)
    {
        result = result + ((curr->coefficent) * power(x, curr->power));
        curr = curr->next;
    }
    printf("Result is : %d", result);
}

int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    head->next = head;
    int choice;
    while(choice!=4)
    {
    printf("\n============Menu============\n");
    printf("1.Create\n2.Display.\n3.Evaluate\n4.Exit\n");
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
            evaluate(head);
            break;
        }
    }
    return 0;
}