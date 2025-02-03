#include <bits/stdc++.h>
using namespace std;

queue<int> reverseFirstK(queue<int> numbers, int k){
    stack<int> revers;

    for(int i = 0; i < k; i++){
        int item = numbers.front();
        revers.push(item);
        numbers.pop();
    }

    while(!revers.empty()){
        numbers.push(revers.top());
        revers.pop();
    }

    for(int i = 0; i < numbers.size() - k; i++){
        numbers.push(numbers.front());
        numbers.pop();
    }

    return numbers;
}


int main() {
    queue<int> numbers;
    int k = 3;
    numbers.push(12);
    numbers.push(11);
    numbers.push(9);
    numbers.push(10);
    numbers.push(21);
    numbers.push(91);
    numbers.push(110);

    queue<int> result = reverseFirstK(numbers, k);

    while(!result.empty()){
        cout<<result.front() <<" ";
        result.pop();
    }

return 0;
}
