#include <bits/stdc++.h>
using namespace std;

void buble_sort(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


}

int main(){
    int numbers[] = {12, 23, 1, 3, 44, 56, 2, 100};
    buble_sort(numbers, 8);

    for(int i = 0; i < 8; i++){
        cout<<numbers[i] <<" ";
    }

return 0;
}
