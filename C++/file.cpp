#include<iostream>
#include<fstream>
#include<string>

using namespace std;
//write a program that reads questions from one file and then save ans to anotrher foel

int main()
{
    fstream que;
    fstream ans;
    ans.open("A.txt",ios::out|ios::app);
    que.open("Q.txt",ios::in);
    char oneQ[120];
    char ansQ[120];
    cout<<"The question is \n";
    while(que.eof()==0)
    {
    que.getline(oneQ,120);
    cout<<oneQ;
    cout<<"\n";
    cout<<"Ans:";
    gets(ansQ);
    cout<<"\n";
    ans<<ansQ;
    ans<<"\n";
    }
    que.close();
    ans.close();
    return 0;
}
