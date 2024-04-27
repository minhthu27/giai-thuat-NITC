#include <bits/stdc++.h>
using namespace std;
int a[100], n, b[16], stop = 0, w;
void khoitao(){
    for(int i = 0; i < n; i++) a[i] = 0;
}
void sinh(){
    int i = n - 1;
    while(i>=0&&a[i]==1){
        a[i] = 0;
        i--;
    }
    if(i==-1) stop = 1;
    else{
        a[i] = 1;
    }
}
int chuongtrinh(){
    int maxx = INT_MIN;
    while(stop==0){
        int sum = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == 1) sum += b[i];
        }
        if(sum <= w && sum > maxx) maxx = sum;
        sinh();
    }
    return maxx;
}
int main(){
    cin >> w >> n;
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    khoitao();
    cout << chuongtrinh();
}
