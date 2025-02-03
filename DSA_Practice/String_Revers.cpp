#include <bits/stdc++.h>
using namespace std;

void string_reverse(string &message){
    stack<char> result;

    for(int i = 0; i < message.length(); i++){
        result.push(message[i]);
    }

    while(!result.empty()){
        cout<<result.top();
        result.pop();
    }
}

int main(){
    string message = "Hello i am from bnagladesh";
    string_reverse(message);

return 0;
}
