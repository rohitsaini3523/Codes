//3. Write a C program to create student database using array of structures. 
//Apply Bubble and Insertion Sort.
// Name : rohit saini
// roll no : 18
//panel: B2
//prn : 1032200897
#include<stdio.h>

struct student
{
    char name[20];
    int rollno;
    char div[1];
};
void accept(struct student s[], int m)
{
    for (int i = 0; i < m; i++)
    {
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("roll no: ");
        scanf("%d", &s[i].rollno);
        printf("Div: ");
        scanf("%s", s[i].div);
    }
}

void display(struct student s[], int m)
{
    for (int i = 0; i < m; i++)
    {
        printf("Name: %s\t", s[i].name);
        printf("Rollno: %d\t", s[i].rollno);
        printf("Div: %s\t", s[i].div);
        printf("\n");
    }
}

void bubblesort(struct student s[], int m)
{
    struct student temp = {0, 0, 0, 0};
    for (int i = 0; i < m - 1; i++)
    {
        for (int j = 0; j < m - i - 1; j++)
        {
            if(s[j].rollno > s[j+1].rollno)
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}

void insertion(struct student s[], int m)
{
    int j;
    struct student temp = {0, 0, 0, 0};
    for (int i = 1; i < m; i++)
    {
        temp = s[i];
        j = i - 1;
        // comparing previous roll no if less then shifting to right
        while(s[j].rollno > temp.rollno && j >= 0)
        {
            s[j + 1] = s[j];
            j--;
        }
        s[j + 1] = temp;
    }
}

int main()
{
    int m;
    printf("Number of students: ");
    scanf("%d", &m);
    struct student s[m];
    int choice;
    while(choice != 5)
    {
        printf("====Menu====\n");
        printf("1.Insert\n2.Display\n3.Bubble Sort\n4.Insertion Sort\n5.Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                accept(s, m);
                break;
            case 2:
                display(s, m);
                break;
            case 3:
                bubblesort(s, m);
                break;
            case 4:
                insertion(s, m);
                break;
            }
    }
    return 0;
}