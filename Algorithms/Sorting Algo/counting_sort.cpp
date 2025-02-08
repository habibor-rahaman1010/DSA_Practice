// a string sort by alphabetically

#include <bits/stdc++.h>
using namespace std;

void sort_alphabet(string& name){
    vector<int> freq(26, 0);
    for(int i = 0; i < name.size(); i++){
        int rnk = name[i] - 'a';
        freq[rnk]++;
    }

    int idx = 0;
    for(int i = 0; i < 26; i++){
        int currentCount = freq[i];
        while(currentCount--){
           name[idx] = 'a' + i;
           idx++;
        }
    }
}

int main(){
    string text = "helloprogrammer";
    sort_alphabet(text);

    for(char ch : text){
        cout<<ch;
    }

return 0;
}
