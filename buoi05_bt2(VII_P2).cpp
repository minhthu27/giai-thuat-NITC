#include <bits/stdc++.h>
using namespace std;
int check(int arr[], int n){
  vector<int> b(n,1);
  for(int i = 1;i < n; i++){
    for(int j = 0; j < i; j++){
      if(arr[i] > arr[j]){
        b[i] = max(b[i], 1 + b[j]);
      }
    }
  }
  int a = INT_MIN;
  for(int i = 0; i < b.size(); i++){
    if(b[i] > a) a = b[i];
  }
  return a;
}
int main(){
  int n; cin >> n; int arr[n];
 for(int i = 0; i < n; i++) cin >> arr[i];
 cout << check(arr,n);
}
