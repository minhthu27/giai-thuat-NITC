//bt3 buoi 2
#include<bits/stdc++.h>
using namespace std;
string s(string a){
    string b = "", c = "";
    for(int i = 0; i < a.length(); i++){
        if(a[i] >= 'A' && a[i] <= 'Z') b += a[i]+32;
        else if(a[i] == '?') continue;
        else if((a[i] <= '9' && a[i] >= '0')||(a[i] >= 'a' && a[i] <= 'z')) b += a[i];
        else if(a[i] == ',') b += ", ";
        else {
            b += " ";
        }}
        cout << b << endl;
        int tm1 = 0, tm2 = 0;
        for(int i = 0; i < b.length(); i++){
            if(b[i]!=' '&&b[i]!=',') {c+=b[i]; tm1 = 0; tm2 = 0;}
            else if(b[i]==' '){
            if( tm1 == 0) {c += " ";
                tm1 = 1;}
            else continue;
            }else{
                if(tm1==1) {c.pop_back();
                tm1 = 0;
            }
            else {if(tm2==1) c.pop_back();
            c+=",";
            tm2 = 1;}
        }
        
    }
    if(tm1==1) c.pop_back();
    if(tm2==1) c.pop_back();
        c[0] -= 32;
        c+="?";
        return c;
}
int main()
{
   string a;
   getline(cin,a);
   cout << s(a);
}
