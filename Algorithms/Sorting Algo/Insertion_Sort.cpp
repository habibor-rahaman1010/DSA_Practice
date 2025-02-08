#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0  && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main(){
    int ages[] = {12, 23, 3, 1, 2, 4, 40, 50, 33};
    int n = sizeof(ages) / sizeof(ages[0]);

    insertion_sort(ages, n);

    for(int i = 0; i < n; i++){
        cout<<ages[i] <<" ";
    }

return 0;
}
