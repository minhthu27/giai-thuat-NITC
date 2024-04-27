
#include<bits/stdc++.h>
using namespace std;
int find(vector<int>a, int i, int j){
  int k = a[j]-a[i];
  int cnt = 2;
  for(int x = j+1; x < a.size(); x++){
    if(a[x] - a[i] == k*cnt) cnt++;
  }
  return cnt;
}
int findmax(vector<int>a){
  int cnt = INT_MIN;
  for(int i = 0; i < a.size(); i++){
    for(int j = i+1; j < a.size(); j++){
      if(cnt < find(a,i,j)) cnt = find(a,i,j);
    }
  }
  return cnt;
}
int main(){
  int n;
  cin >> n;
  vector<int> a;
  for(int i = 0; i < n; i++){
    int j;
    cin >> j;
    a.push_back(j);
  }
  cout << findmax(a);
}
