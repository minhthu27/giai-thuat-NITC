#include <bits/stdc++.h>
using namespace std;

void check(vector<vector<int>>& b,int i, int j, int n, int m, string a){
  if(i==n-1&&j==m-1){
    cout << a;
    return;
  }
  if(i+1<n&&b[i+1][j]==1){
    check(b,i+1,j,n,m,a+"D");
  }
  if(j+1<m&&b[i][j+1]==1){
    check(b,i,j+1,n,m,a+"R");
  }

}
int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> b(n, vector<int>(m));
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        cin >> b[i][j];
      }
    }
    check(b,0,0,n,m,"");
  
}
