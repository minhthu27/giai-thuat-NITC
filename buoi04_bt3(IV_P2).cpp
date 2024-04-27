#include <bits/stdc++.h>
using namespace std;
int maxactivity(vector<int> start, vector<int> end, int n){
  int max = 1;
  vector<pair<int,int>> a;
  for(int i = 0; i < n; i++){
    a.push_back({start[i],end[i]});
  }
  sort(a.begin(),a.end());
  int kt = a[0].second;
  for(int i = 1; i < n; i++){
    if(a[i].first > kt){
      kt = a[i].second;
      max++;
    }
  }
  return max;
}
int main(){
    int n;
    cin >> n;
    vector<int> start(n);
    vector<int> end(n);
    for(int i = 0; i < n; i++){
      cin >> start[i];
    }
    for(int i = 0; i < n; i++){
      cin >> end[i];
    }
    cout << maxactivity(start,end,n);
  
}
