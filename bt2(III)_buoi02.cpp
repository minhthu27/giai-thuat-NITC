//bt2(III) buoi 2
#include<bits/stdc++.h>
using namespace std;
int differentSquares(vector<vector<int>> matrix){
    int cnt = 0;
    string s = "@";
    for(int i = 0; i < matrix.size() - 1; i++){
        
        for(int j = 0; j < matrix[0].size() - 1; j++){
            string p = "";
            p = p + "@" + char(matrix[i][j] + 48) + " " + char(matrix[i][j+1] + 48) + " " + char(matrix[i+1][j] + 48) + " " + char(matrix[i+1][j+1] + 48) + "@";
            if(s.find(p) < 0 || s.find(p) > s.length()-1){
                cnt++;
                s = s + p;
            }
        }
    }
    return cnt;
}
int main()
{
   int a, b;
   cin >> a >> b;
   vector<vector<int>> matrix;
   matrix.resize(a);
   for(int i = 0; i < a; i++){
    matrix[i].resize(b);
    for(int j = 0; j < b; j++){
        cin >> matrix[i][j];
    }
   }
   cout << differentSquares(matrix);

}
