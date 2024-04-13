//bt2 buoi 1
//C2:
#include<bits/stdc++.h>
using namespace std;
int diffzero(long long n){
    long long a = 1;
    for(long long i = 2; i <= n; i++){
        a *= i;
        while(a%10==0){
            a /= 10;
        }
        a %= 100;
    }
    while(a%10==0) a/=10;
    return a%10;
}
int main()
{
    long long n;
    cin >> n;
    cout << diffzero(n);
   
}
