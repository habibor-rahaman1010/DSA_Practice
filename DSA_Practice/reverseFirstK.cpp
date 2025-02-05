#include <bits/stdc++.h>
using namespace std;

queue<int> reverseFirstK(queue<int> qu, int k){
    stack<int>numbers;

    for(int i = 0; i < k; i++){
        numbers.push(qu.front());
        qu.pop();
    }

    while(!numbers.empty()){
        qu.push(numbers.top());
        numbers.pop();
    }

    for(int i = 0; i < qu.size() - k; i++){
        qu.push(qu.front());
        qu.pop();
    }
    return qu;
}

int main(){
    queue<int>ages;
    int k = 3;
    ages.push(12);
    ages.push(13);
    ages.push(16);
    ages.push(19);
    ages.push(11);
    ages.push(25);

    queue<int> result = reverseFirstK(ages, k);

    while(!result.empty()){
        cout<<result.front() <<" ";
        result.pop();
    }

return 0;
}
