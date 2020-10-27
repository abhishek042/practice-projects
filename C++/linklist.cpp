#include<iostream>
using namespace std;
class node
{
public:
    int val;
    node* next;
    node()
    {
        next=NULL;
    }
};
void print(node* start)
{
    while(start!=NULL)
    {
        cout<<start->val<<endl;
        start=start->next;
    }
}
void createlist(int n)
{
    while(n>0)
    {

        n--;
    }

}
int main()
{

    return 0;
}
