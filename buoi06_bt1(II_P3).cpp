#include <bits/stdc++.h>
using namespace std;
int main(){
    queue<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    long long n;
    cin>>n;
    while(n--){
        int a = s.front();
        s.pop();
        s.push(a); s.push(a);
    }
    cout << s.front();
}
