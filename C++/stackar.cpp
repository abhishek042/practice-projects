#include <iostream>
using namespace std;
int stack[100], n=100, top=-1;
void push(int val) {
   if(top>=n-1)
      cout<<"Overflow condition of Stack!!!"<<endl;
   else {
      top++;
      stack[top]=val;
   }
}
void pop() {
   if(top<=-1)
      cout<<"Underflow condition of stack!!!"<<endl;
   else {
      cout<<"Element after pop operation:"<< stack[top] <<endl;
      top--;
   }
}
void display() {
   if(top>=0) {
      cout<<"Elements in the stack:";
      for(int i=top; i>=0; i--)
         cout<<stack[i]<<" ";
         cout<<endl;
   } else
      cout<<"No element present in stack!!!";
}
int main() {
   int option, val;
   cout<<"Enter the operation you want to perform: "<<endl;
   cout<<"1) Push element in stack"<<endl;
   cout<<"2) Pop element from stack"<<endl;
   cout<<"3) Display the elements of stack"<<endl;
   cout<<"4) Exit"<<endl;

      do
   {
      cin>>option;
      switch(option) {
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
   }while(option!=4);
      return 0;
}
