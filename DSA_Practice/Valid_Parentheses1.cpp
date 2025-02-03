#include <bits/stdc++.h>
using namespace std;

bool isBlanced(string &parentheses){
    stack<char> stack_paren;
    for(int i = 0; i < parentheses.length(); i++){
        if(parentheses[i] == '(' || parentheses[i] == '{' || parentheses[i] == '['){
            stack_paren.push(parentheses[i]);
        }
        else{
            if(!stack_paren.empty() && (stack_paren.top() == '(' && parentheses[i] == ')' ||
                                        stack_paren.top() == '{' && parentheses[i] == '}'||
                                        stack_paren.top() == '[' && parentheses[i] == ']'))

            {
                stack_paren.pop();
            }
            else{
                return false;
            }
        }
    }
    return stack_paren.empty();
}

int main() {
    string s = "[((())[]{{}})]";
    bool result = isBlanced(s);

    if(result){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

return 0;
}
