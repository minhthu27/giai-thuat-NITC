//bt4 buoi 2
#include<bits/stdc++.h>
using namespace std;
int dem(string a){
    int cnt = 0;
    for(int i = 0; i < a.length(); i++){
        for(int j = i+1; j < a.length(); j++){
            if(  a[j] != '0' && a[i] != '0' && a[i] == a[j]){
                cnt++;
                a[j] = '0';
            }
        }
    }
    return cnt;
}
int main()
{
   string a;
   getline(cin,a);
   cout << dem(a);
}
