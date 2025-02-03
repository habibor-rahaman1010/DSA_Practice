//Remove characters from the first string which are present in the second string

#include <bits/stdc++.h>
using namespace std;

void remove_character(string str1, string str2){
    stack<char>st;
    unordered_set<char> removed(str2.begin(), str2.end());

    for(int i = 0; i < str1.size(); i++){
        st.push(str1[i]);
    }

    string result = "";
    while(!st.empty()){
        char ch = st.top();
        st.pop();
        if(removed.find(ch) == removed.end()){
           result += ch;
        }
    }
    reverse(result.begin(), result.end());
    cout<<result;
}

int main() {
    string s1 = "computer";
    string s2 = "cat";
    remove_character(s1, s2);

return 0;
}
