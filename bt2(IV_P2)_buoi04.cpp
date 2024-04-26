#include <bits/stdc++.h>
using namespace std;
int ATM(vector<int> a, int n, int t){
    int cnt = 0;
    sort(a.begin()+1,a.end(),greater<int> ());
    for(int i = 0; i < a.size(); i++){
        if(t >= a[i]) {
            t -= a[i];
            ++cnt;
        }
    }
    if(t==0) return cnt;
    else return -1;
}
int main(){
    
    int n, t;
    cin >> n >> t;vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << ATM(a,n,t);
}
