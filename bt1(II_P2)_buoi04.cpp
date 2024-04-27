#include <bits/stdc++.h>
using namespace std;
void phanso(int a, int b){
    if(a==0||b==0) return;
    if(b%a==0){
        cout << "1 " << b/a << endl;
        return;
    }
    int c = b/a + 1;
    cout << "1 " << c << endl;
    phanso(a*c-b,b*c);
    
}
int main(){
    int a,b;
    cin >> a >> b;
    phanso(a,b);
}
