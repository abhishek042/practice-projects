#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main()
{
    ifstream ifile;
    ifile.open ("text.txt");
    cout<< "Reading data from a file :-" <<endl ;
    int c = ifile.peek();
    if ( c == EOF ) return 1;
    if ( isdigit(c) )
    {
        int n;
        ifile>> n;
        cout<< "Data in the file: " << n << "\n";
    }
    else
    {
        string str;
        ifile>> str;
        cout<< "Data in the file: " << str << "\n";
    }
    ifile.close();
    return 0;
}
