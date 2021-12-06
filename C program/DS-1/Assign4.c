#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAXSIZE 30
struct stack
{
    char s[MAXSIZE];
}S[MAXSIZE];

int top = -1;

int isfull()
{
    if(top == MAXSIZE)
    {
        return 1;
    }
    return 0;
}

int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int Icp(char ch)
{
    if(ch == '+'|| ch == '-')
        return 1;
    if(ch == '*'|| ch == '/')
        return 2;
    if(ch == '^')
        return 4;
    if(ch == '(')
        return 5;
    else
        return 0;
}
int Isp(char ch)
{
    if(ch == '+'|| ch == '-')
        return 1;
    if(ch == '*'|| ch == '/')
        return 2;
    if(ch == '^')
        return 3;
    else
        return 0;
}

void push(char str1)
{
    top++;
    S[top].s[0] = str1;
}
void push1(char str1[MAXSIZE])
{
    top++;
    strcpy(S[top].s, str1);
}

char* pop1()
{
    char *temp = S[top].s;
    top--;
    return(temp);
}

char pop()
{
    char temp = S[top].s[0];
    top--;
    return temp;
}
//infix_to_postfix(exp);
void INFIXtoPOSTFIX()
{
    char exp[MAXSIZE];
    printf("Enter Expresion: ");
    scanf("%s", exp);
    char x;
    int i = 0;
    while (exp[i] != '\0')
    {
        if (isalnum(exp[i]))
            printf("%c", exp[i]);
        else if (exp[i] == '(')
            push(exp[i]);
        else if (exp[i] == ')')
        {
            
            while ((x=pop()) != '(')
                printf("%c", x);
        }
        else
        {
            while (Isp(S[top].s[0]) >= Icp(exp[i]))
                printf("%c", pop());
            push(exp[i]);
        }
        i++;
    }
    while (!isEmpty())
    {
        printf("%c", pop());
    }
}

void POSTFIXtoINFIX()
{
    char exp[MAXSIZE],op1[MAXSIZE],op2[MAXSIZE],infix[MAXSIZE];
    printf("Enter Expresion: ");
    scanf("%s", exp);
    char x;
    int i = 0, l = 0;
    while (exp[i] != '\0')
    {
        if(!isalnum(exp[i]))
        {
            strcpy(op1, pop1());
            strcpy(op2, pop1());
            infix[0] = '(';
            infix[1] = '\0';
            strcat(infix, op2);
            l = strlen(infix);
            infix[l] = exp[i];
            infix[l + 1] = '\0';
            strcat(infix, op1);
            l = strlen(infix);
            infix[l] = ')';
            infix[l + 1] = '\0';
            push1(infix);
        }
        else
        {
            char str[20];
            str[0] = exp[i];
            str[1] = '\0';
            push1(str);
        }
        i++;
    }
    printf("%s", infix);
}

int main()
{
    int choice;
    while (choice != 3)
    {
    printf("\n============Menu============\n");
    printf("1.Infix to Postfix.\n2.Postfix to Infix.\n3.Exit\nInput Choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            INFIXtoPOSTFIX();
            break;
        case 2:
            POSTFIXtoINFIX();
            break;
    };
    }

    return 0;
}