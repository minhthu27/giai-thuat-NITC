//bt3(V) buoi 3
#include<bits/stdc++.h>
using namespace std;
bool findPath(vector<vector<int>> matrix){
    int c = matrix[0].size(), r = matrix.size(), c1 = -1, r1 = -1, cnt = 2;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(matrix[i][j] == 1){
                c1 = j;
                r1 = i;
            }
        }
    }
    if(c1==-1&&r1==-1) return false;
    while(cnt <= c*r){
        if(r1-1>=0&&r1-1<r&&matrix[r1-1][c1]==cnt){
            cnt++;
            r1--;
        }else if(c1-1>=0&&c1-1<c&&matrix[r1][c1-1]==cnt){
            cnt++;
            c1--;
        }else if(r1+1>=0&&r1+1<r&&matrix[r1+1][c1]==cnt){
            cnt++;
            r1++;
        }else if(c1+1>=0&&c1+1<c&&matrix[r1][c1+1]==cnt){
            cnt++;
            c1++;
        }else return false;
    }
    return true;
}
int main()
{
  int n, m;
  cin >> n >> m;
  vector<vector<int>> c;
  c.resize(n);
  for(int i = 0; i < n; i++){
    c[i].resize(m);
    for(int j = 0; j < m; j++){
        cin >> c[i][j];
    }}
    cout << findPath(c);
  

}
