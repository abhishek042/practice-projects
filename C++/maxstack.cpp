#include <bits/stdc++.h>
#define ll long long
#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b
using namespace std;
int readline(char *str) {
int i = 0;
char ch;
while((ch = getchar()) != '\n') {
    str[i++] = ch;
}
str[i] = '\0';
return i;
}
stack<ll int> s, m;
int main(int argc, char *argv[]) {
int t, x;
ll int v, mx = -1;
cin >> t;
while(t--) {
cin >> x;
if(x == 1) {
cin >> v;
if(mx == -1 || m.empty()) {
mx = v;
}
else {
mx = MAX(m.top(), v);
}
s.push(v);
m.push(mx);
}
else if(x == 2) {
s.pop();
m.pop();
}
else {
cout << m.top() << endl;
}
}
return 0;
}
