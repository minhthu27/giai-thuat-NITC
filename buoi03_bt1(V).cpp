//bt1(V) buoi 3
#include<bits/stdc++.h>
using namespace std;
int checkKnight(string cell){
    int dem = 0;
    int d2[2] = {2, -2}, d1[2] = {1,-1}, x = cell[0] - 96, y = cell[1] - 48;
    for(int i = 0; i <= 1; i++){
        for(int j = 0; j <= 1; j++){
            if((x-d1[i]>=1&&x-d1[i]<=8)&&(y-d2[i]>=1&&y-d2[i]<=8)){
                dem++;
            }
        }
    } 
    for(int i = 0; i <= 1; i++){
        for(int j = 0; j <= 1; j++){
            if((y-d1[i]>=1&&y-d1[i]<=8)&&(x-d2[i]>=1&&x-d2[i]<=8)){
                dem++;
            }
        }
    } 
    return dem;
    
}
int main()
{
   string cell;
   cin >> cell;
   cout << checkKnight(cell);

}
