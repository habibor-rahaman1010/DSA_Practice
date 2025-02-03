//keybord type misting problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<char>name;
    stack<char>name_revers;
    string str = "hb*abcds***id*b";

    for(int i = 0; i < str.size(); i++){
        if(str[i] == '*'){
            name.pop();
        }
        else{
            name.push(str[i]);
        }
    }

    while(!name.empty()){
        cout<<name.top();
        name_revers.push(name.top());
        name.pop();
    }
    cout<<"\n";

    while(!name_revers.empty()){
        cout<<name_revers.top();
        name_revers.pop();
    }

return 0;
}
