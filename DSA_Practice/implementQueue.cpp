//implement queue using vector
#include <bits/stdc++.h>
using namespace std;

class Queue{
public:
    vector<int>arr;
    int qSize;
    int capacity;
    int qFront;

    Queue(int initial){
        qSize = 0;
        qFront = 0;
        capacity = initial;
        arr.resize(initial);
    }

    void enqueue(int item){
        if(qSize == capacity){
            return;
        }
        arr[qSize] = item;
        qSize++;
    }

    void dequeue(){
        if(qSize == 0){
            return;
        }

        for(int i = 1; i < qSize; i++){
            arr[i - 1] = arr[i];
        }
        qSize--;
    }

    int getFront(){
        if(qSize == 0){
            return - 1;
        }
        return arr[qFront];
    }

    bool isEmpty(){
        if(qSize == 0){
            return true;
        }
        return false;
    }

    void displayQueue(){
        for(int i = 0; i < qSize; i++){
            cout<<arr[i] <<" ";
        }
    }

};

int main(){
    Queue* que = new Queue(15);
    que->enqueue(2);
    que->enqueue(3);
    que->enqueue(4);
    que->enqueue(1);
    que->enqueue(8);
    que->enqueue(5);
    que->enqueue(14);
    que->enqueue(11);

    que->displayQueue();

    que->dequeue();
    cout<<"\n";
    que->displayQueue();

    cout<<"\n" <<que->getFront();

    if(!que->isEmpty()){
        cout<<endl <<"False";
    }
    else{
        cout<<endl <<"True";
    }

return 0;
}
