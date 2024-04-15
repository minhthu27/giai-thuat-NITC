//bt2 buoi 2
#include<bits/stdc++.h>
using namespace std;
string s(string a){
    int check = 1;
    while(check || a.length() > 1){
        check = 0;
        if((a[0] - '0') % 3 == 0){
            a.erase(0,1);
            check = 1;
        }else if((a[a.length()-1] - '0') % 3 == 0){
            a.erase(a.length()-1,1);
            check = 1;
        }else if(((a[0] - '0') + (a[a.length()-1] - '0')) % 3 == 0){
            a.erase(0,1);
            a.erase(a.length()-1,1);
            check = 1;
        }
    }
    return a;
}
int main()
{
   string a;
   cin >> a;
   cout << s(a);
}
