#include <bits/stdc++.h>
using namespace std;
int n, m;vector<int> matrix[10001];
bool visited[1001];
void intput(){
  cin >> n >> m;
  
  for(int i = 1; i <= m; i++){
    int u, v; cin >> u >> v;
    matrix[u].push_back(v);
    matrix[v].push_back(u);
  }
}
void dfs(int x){
  cout << x << " ";
  visited[x] = true;
  for(auto i : matrix[x]) if(!visited[i]) dfs(i);
}
int main(){
   intput();
   dfs(1);
  
}
