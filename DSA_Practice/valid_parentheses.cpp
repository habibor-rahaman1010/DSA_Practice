#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<char> pattern_stack;
    cout<<"Enter your parentheses:";
    string s;
    cin>>s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            pattern_stack.push('(');
        }
        if(s[i] == ')'){
            pattern_stack.pop();
        }

        if(s[i] == '['){
            pattern_stack.push('[');
        }
        if(s[i] == ']'){
            pattern_stack.pop();
        }

        if(s[i] == '{'){
            pattern_stack.push('{');
        }
        if(s[i] == '}'){
            pattern_stack.pop();
        }
    }

    if(pattern_stack.empty() == true){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

return 0;
}
