#include <bits/stdc++.h>
using namespace std;

bool isOperator(char ch){
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/'){
        return true;
    }
    else{
        return false;
    }
}

string psotfixToPrefix(string &expression){
    stack<string> st;
    int n = expression.length();

    for(int i = 0; i < n; i++){
        char ch = expression[i];
        if(isOperator(ch)){
            string operend1 = st.top();
            st.pop();
            string operend2 = st.top();
            st.pop();

            string temp = ch + operend1 + operend2;
            st.push(temp);
        }
        else{
            st.push(string(1, ch));
        }
    }
    return st.top();
}

int main(){
    string expression = "ABC/-AK/L-*";
    cout<<"Prefix: " <<psotfixToPrefix(expression);
return 0;
}
