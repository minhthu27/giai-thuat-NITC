//bt3 buoi 1
//C1:
#include<bits/stdc++.h>
using namespace std;
int digitsProduct(int n){
    if(n==1) return 1;
    if(n==0) return 10;
    int cnt = 0;
    int tmp = 0;
    for(int i = 9; i >= 2; i--){
        while(n%i==0){
            n/=i;
            tmp = tmp*10 + i;
        }
    }
    if(n!=1) return -1;
    else{
        int tmp2 = 0;
        while(tmp){
            tmp2 = tmp2*10 + tmp%10;
            tmp /= 10;
        }
        return tmp2;
    }
}
int main()
{
    long long n;
    cin >> n;
    cout << digitsProduct(n);
   
}
