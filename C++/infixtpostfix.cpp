#include<bits/stdc++.h>
using namespace std;
char st[20];
int top = -1;
void push(char x)
{
    st[++top] = x;
}

char pop()
{
    if(top == -1)
        return -1;
    else
        return st[top--];
}

int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
}

main()
{
    char exp[20];
    char *e, x;
    cout<<"Enter the expression:";
    cin>>exp;
    e = exp;
    while(*e != '\0')
    {
        if(isalnum(*e))
            cout<<*e;
        else if(*e == '(')
            push(*e);
        else if(*e == ')')
        {
            while((x = pop()) != '(')
                cout<<x;
        }
        else
        {
            while(priority(st[top]) >= priority(*e))
                cout<<pop();
            push(*e);
        }
        e++;
    }
    while(top != -1)
    {
        cout<<pop();
    }
}

