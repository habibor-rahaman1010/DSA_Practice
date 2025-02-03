#include <bits/stdc++.h>
using namespace std;

stack<int> array_revers(int arr[], int length){
    stack<int>st;

    for(int i = 0; i < length; i++){
        st.push(arr[i]);
    }
    return st;
}

int main(){

    int numbers[] = {12, 23, 34, 45, 23, 45, 56, 66, 10};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    stack<int> arr = array_revers(numbers, n);

    while(!arr.empty()){
        cout<<arr.top() <<" ";
        arr.pop();
    }

return 0;
}
