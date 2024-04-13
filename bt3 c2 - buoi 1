//bt3 buoi 1
//C2:
#include<bits/stdc++.h>
using namespace std;
int digitsProduct(int n){
    if(n==1) return 1;
    if(n==0) return 10;
    string ans = "";
    for(int i = 9; i >= 2; i--){
        while(n%i==0){
            n/=i;
            string s0 = to_string(i);
            ans = s0 + ans;
        }
    }
    if(n!=1) return -1;
    else{
        return atoi(ans.c_str());
    }
}
int main()
{
    long long n;
    cin >> n;
    cout << digitsProduct(n);
   
}
