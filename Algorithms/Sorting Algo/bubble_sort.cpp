#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }


}

int main(){
    int numbers[] = {12, 23, 1, 3, 44, 56, 2, 100};
    bubble_sort(numbers, 8);

    for(int i = 0; i < 8; i++){
        cout<<numbers[i] <<" ";
    }

return 0;
}

