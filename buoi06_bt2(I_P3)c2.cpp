#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int cnt = 0;
  int cnt1 = 1;
  while(n-5*pow(2,cnt) > 0){
    n = n-5*pow(2,cnt);
    ++cnt; 
  }
  while(n-pow(2,cnt)>0){
    n-=pow(2,cnt);
    ++cnt1;
  }
  cout << cnt1;
}
