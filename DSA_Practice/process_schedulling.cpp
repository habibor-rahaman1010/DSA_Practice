#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<pair<string, int>> Q;
    Q.push({"p1", 150});
    Q.push({"p2", 80});
    Q.push({"p3", 200});
    Q.push({"p4", 350});
    Q.push({"p5", 20});

    int currentTime = 0;
    int quantum = 100;

    while(!Q.empty()){
        pair<string, int> currentProcess = Q.front();
        Q.pop();

        string processName = currentProcess.first;
        int remainingTime = currentProcess.second;

        if(remainingTime <= quantum){
            currentTime += remainingTime;
            cout << processName << " " << currentTime << "\n";
        }
        else{
            currentTime += quantum;
            remainingTime -= quantum;
            Q.push({processName, remainingTime});
        }
    }

return 0;
}
