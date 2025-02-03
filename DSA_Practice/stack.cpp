///((())) blanced or imblance problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<char> pattern_stack;
    string pattern;
    cout<<"Enter your patterns: ";
    cin>>pattern;

    for(int i = 0; i < pattern.size(); i++){
        if(pattern[i] == '('){
            pattern_stack.push('(');
        }
        if(pattern[i] == ')'){
            pattern_stack.pop();
        }
    }

    if(pattern_stack.empty() == true){
        cout<<"Blanced";
    }
    else{
        cout<<"Imblanced";
    }

return 0;
}
