#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<char> characters = {'H', 'A', 'B', 'I', 'B', 'O', 'R'};

    for(auto it = characters.begin(); it != characters.end(); it++){
        cout<<*it;
    }
    cout<<"\n";
    cout<<characters.count('B');

    cout<<"\n";
    cout<<characters.size();


    cout<<"\n";
    for(char ch : characters){
        cout<<ch;
    }

    cout<<"\n";
    if(!characters.empty()){
        cout<<"The set is not empty";
    }
    else{
        cout<<"The set is empty";
    }

return 0;
}
