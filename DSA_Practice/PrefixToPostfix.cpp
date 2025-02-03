#include <bits/stdc++.h>
using namespace std;

bool isOperator(char op){
    if(op == '+' || op == '-' || op == '*' || op == '/'){
        return true;
    }
    return false;
}

string prefixToPostfix(string &expression){
    stack<string> st;
    int n = expression.length();
    for(int i = n - 1; i >= 0 ; i--){
        char ch = expression[i];
        if(isOperator(ch)){
            string operend1 = st.top();
            st.pop();
            string operend2 = st.top();
            st.pop();
            string temp = operend1 + operend2 + ch;
            st.push(temp);
        }
        else{
            st.push(string(1, ch));
        }
    }
    return st.top();
}

int main(){

    string s = "*-A/BC-/AKL";
    cout<<"Postfix: " <<prefixToPostfix(s);

return 0;
}
