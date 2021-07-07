#include<bits/stdc++.h>
using namespace std;

int main(){
int key;
string s,r = "",z="";
cin>>s;
cout<<"Enter Key: ";
cin>>key;
key = key % 26;
for(int i = 0; i < s.size(); i++){
if(s[i] >= 'a' && s[i] <= 'z'){
r += (s[i] == 'z')? 'a' + key - 1 : s[i] + key;
}else if(s[i] >= 'A' && s[i] <= 'Z'){
r += (s[i] == 'Z')? 'A' + key - 1 : s[i] + key;
}
}
cout<<"Encypted Text of key ("<<key<<"): "<<r<<'\n';

for(int i = 0; i < r.size(); i++){
if(r[i] >= 'a' && r[i] <= 'z'){
z += (r[i] == 'a')? 'z' - key + 1 : r[i] - key;
}else if(r[i] >= 'A' && r[i] <= 'Z'){
z += (r[i] == 'A')? 'Z' - key + 1 : r[i] - key;
}
}
cout<<"Plain Text of key ("<<key<<"): "<<z<<'\n';

return 0;

}
