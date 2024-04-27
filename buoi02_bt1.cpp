//bt1 buoi 2
#include<bits/stdc++.h>
using namespace std;
bool checkPalin[10001][10001];
void check(string a){
    for(int len = 1; len <= a.length(); len++){
        for(int i = 0; i < a.length(); i++){
            if(len==1) checkPalin[i][i] = 1;
            else if(len==2 && i < a.length()-1 && a[i] == a[i+1]) checkPalin[i][i+1] = 1;
            else{
                int j = i+len-1;
                if(j == a.length()) break; 
                if(a[i]==a[j] && checkPalin[i+1][j-1]) checkPalin[i][j] = 1;
            }
        }
    }
}
int main()
{
   string a;
   int l, r;
   cin >> a;
   cin >> l >> r;
   check(a);
   cout << checkPalin[l][r];
}
