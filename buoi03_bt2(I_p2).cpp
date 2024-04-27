//bt2(I_p2)_buoi03
#include<bits/stdc++.h>
using namespace std;
long long fibo(long long n){
    if(n<=1) return n;
    return (fibo(n-1)+fibo(n-2)) %1000000007;
}
int main()
{
    long long n;
    cin >> n;
    cout << fibo(n);
    
}
