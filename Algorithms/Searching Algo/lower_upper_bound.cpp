#include <bits/stdc++.h>
using namespace std;

int LB(vector<int> &arr, int item){
    int L = 0;
    int R = arr.size();

    while(L < R){
        int M = (L + R) / 2;
        if(arr[M] < item){
            L = M + 1;
        }
        else{
            R = M;
        }
    }
    return L;
}

int UB(vector<int> &arr, int item){
    return LB(arr, item + 1);
}

int main(){
    vector<int> arr = {1, 3, 3, 6, 7, 8, 10, 10, 15};

    cout<<LB(arr, 10);
    cout<<"\n";
    cout<<UB(arr, 10);
    cout<<"\n";

    cout<<UB(arr, 10) - LB(arr, 3);

return 0;
}
