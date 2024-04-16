//bt1(I)_buoi03
#include<bits/stdc++.h>
using namespace std;
long long giaithua(long long n){
    if(n==0) return 1;
    return (n*giaithua(n-1)) %1000000007;
}
int main()
{
    long long n;
    cin >> n;
    cout << giaithua(n);
    
}
