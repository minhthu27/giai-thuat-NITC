//bt1 buoi 2
#include<bits/stdc++.h>
using namespace std;
int dem(string a){
    int cnt = 0;
    for(int i = 0; i < a.length(); i++){
        string sub = "";
        for(int j = i; j < a.length(); j++){
            sub += a[j];
            if(a.find(sub)==i) cnt++;
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
