#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main()
{
    int a = 48;
    int b =13;
    a += b++ *5/a++ +b;
    cout<<a;
    return 0;
}
