#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int n, int item){
    int L = 0;
    int R = n - 1;

    while(L <= R){
        int M = (L + R) / 2;
        if(arr[M] == item){
            return true;
        }
        else if(arr[M] < item){
            L = M + 1;
        }
        else{
            R = M - 1;
        }
    }
    return false;
}

int main(){
    int arr[] = {1, 3, 4, 12, 22, 24, 31, 34, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int item = 3;

    bool result = binarySearch(arr, n, item);

    if(result){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}

