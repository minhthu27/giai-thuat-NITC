//bt4 buoi 1
//C1:
#include<bits/stdc++.h>
using namespace std;
bool arr[1000000001];
void sang(int n){
    for(int i = 2; i <= n; i++) arr[i] = 1;
    arr[0] = arr[1] = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(arr[i]){
            for(int j = i*2; j <= n; j+=i){
                arr[j] = 0;
            }
        }
    }
}
int sum(int n){
   sang(n);
   int s = 0;
   for(int i = 2; i <= n; i++){
    if(arr[i]){
        s= s+ i%22082018;
        s%=22082018;
    }
   }
   return s%22082018;
}
int main()
{
    long long n;
    cin >> n;
    cout << sum(n);
   
}
