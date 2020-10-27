#include <bits/stdc++.h>
using namespace std;
struct Node {
   int data;
   struct Node *link;
};
struct Node* top = NULL;
void push(int val) {
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
   newnode->data = val;
   newnode->link = top;
   top = newnode;
}
void pop() {
   if(top==NULL)
      cout<<"Underflow condition of stack!!!"<<endl;
   else {
      cout<<"Element after pop operation:"<< top->data <<endl;
      top = top->link;
   }
}
void display() {
   struct Node* ptr;
   if(top==NULL)
      cout<<"stack is empty";
   else {
      ptr = top;
      cout<<"Elements in the stack: ";
      while (ptr != NULL) {
         cout<< ptr->data <<" ";
         ptr = ptr->link;
      }
   }
   cout<<endl;
}
int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
      return 0;
}++
