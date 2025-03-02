#include <bits/stdc++.h>
using namespace std;

bool linear_search(int arr[], int n, int item){
    for(int i = 0; i < n; i++){
        if(item == arr[i]){
            return true;
            break;
        }
    }
    return false;
}

int main(){
    int arr[] = {34, 12, 3, 4, 22, 1, 31, 50, 24, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int item = 22;

    bool result = linear_search(arr, n, item);

    if(result){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
