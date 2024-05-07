#include <bits/stdc++.h>
using namespace std;
string check(string s){
    stack<char> st;
    for(int i = 0 ; i < s.size(); i++){
        if(s[i]!=']') st.push(s[i]);
        else{
            string current = "";
            while(st.top()!='['){
                current = st.top() + current;
                st.pop();
            }
            st.pop();
            string number = "";
            while(!st.empty()&&isdigit(st.top())){
                number = st.top() + number;
                st.pop();
            }
            int n = stoi(number);
            while(n--){
                for(int i = 0; i < current.size(); i++){
                    st.push(current[i]);
                }
            }
        }
    }
    s = "";
    while(!st.empty()){
        s = st.top() + s;
        st.pop();
    }
    return s;
}
int main(){
   string s;
   cin >> s;
   cout << check(s);
}
