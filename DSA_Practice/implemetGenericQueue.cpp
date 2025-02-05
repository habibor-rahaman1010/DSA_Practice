//implement queue using vector
#include <bits/stdc++.h>
using namespace std;

template <typename T>

class Queue{
public:
    vector<T>arr;
    int qSize;
    int capacity;
    int qFront;

    Queue(int initial){
        qSize = 0;
        qFront = 0;
        capacity = initial;
        arr.resize(initial);
    }

    void enqueue(T item){
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

    T getFront(){
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
    Queue<int>* que = new Queue<int>(15);
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
    cout<<"\n";

    // Create a queue of strings
    Queue<string>* strQue = new Queue<string>(10);
    strQue->enqueue("apple");
    strQue->enqueue("banana");
    strQue->enqueue("cherry");

    strQue->displayQueue();
    cout<<endl;

    strQue->dequeue();
    cout << "after dequeue: \n";
    strQue->displayQueue();

    delete que;
    delete strQue;

return 0;
}

