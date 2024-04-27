
#include<bits/stdc++.h>
using namespace std;
void check(int n){
  if(n<=3){
    cout << "NO SOLUTION";
    return;
  }
  for(int i = n; i > 0; i--){
    if(i%2==0) cout << i << " "; 
  }
  for(int i = n; i > 0; i--){
    if(i%2!=0) cout << i << " "; 
  }
}
int main(){
  int n;
  cin >> n;
  check(n);
}
