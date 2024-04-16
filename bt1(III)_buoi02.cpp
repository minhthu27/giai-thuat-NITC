//bt2(I_p2)_buoi03
#include<bits/stdc++.h>
using namespace std;
long long fibo(long long n){
    if(n<=1) return n;
    return (fibo(n-1)+fibo(n-2)) %1000000007;
}
long long fibo1(long long n){
    vector<long long> number(n+1);
    number[0] = 0;number[1] = 1;
    for(int i = 2; i <=  n; i++){
        number[i] = (number[i-1] + number[i-2])%1000000007;
    }
    return number[n];
}
int main()
{
    long long n;
    cin >> n;
    cout << fibo1(n);
    
}
