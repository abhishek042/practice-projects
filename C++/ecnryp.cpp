#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()

{

    string msg;
    cout << "Your Message : \n";
    getline (cin,msg);

    string a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 ";
    string b = "zyxwvutsrqponmlkjihgfedcbaZYXWVUTSRQPONMLKIJHGFEDCBA9876543210 ";

int choice;
    while (1){

        cout << "Select Your Option- \n";

        cout << "1. Encryption & Decryption\n"<<"2.End\n";

        cin >> choice;

    if (choice == 1) {

        for (int i = 0; i < msg.size(); i++) {

        int j = b.find(msg[i]);

        msg[i] = a.at(j);

    }

cout << "Encrypted Message : " << msg << "\n";



for (int i = 0; i < msg.size(); i++) {

int j = a.find(msg[i]);

msg[i] = b.at(j);

}

cout << "Decrypted Message : " << msg << "\n";

}
else
{
    cout<<"End";
    exit(0);

}

}

return 0;

}
