#include <bits/stdc++.h>
using namespace std;
void check(string s){
  stack<char> c;
  c.push('@');
  for(int i = 0; i < s.size(); i++){
    if(s[i]==')'){
      if(c.top()=='(') c.pop();
      else c.push('(');
    }
    else if(s[i]==']'){
      if(c.top()=='[') c.pop();
      else c.push(']');
    }
    else if(s[i]=='['||s[i]=='(') c.push(s[i]);
  }
  if(c.top()=='@') cout << "yes\n";
  else cout << "no\n";
}
int main(){
  string arr;
  cin >> arr;
  check(arr);
}
