//bt1 buoi 1
#include<bits/stdc++.h>
using namespace std;
bool arr[10000001];
void sang(int n){
    for(int i = 2; i <= n; i++) arr[i] = 1;
    arr[0] = arr[1] = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(arr[i]){
            for(int j = i*2; j <= n; j+= i){
                arr[j] = 0;
            }
        }
    }
}
int main()
{
    int a,b;
    cin >> a >> b;
    sang(min(a,b));
    int cnt = 0;
    for(int i = min(a,b); i >= 2; i--){
        if(arr[i] && a % i == 0 && b % i == 0){
            cnt = 1;
            cout << i;
            break;
        }
    }
    if(cnt == 0) cout << -1;
   
}
