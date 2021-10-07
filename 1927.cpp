#include<iostream>
using namespace std;

int heap[100001]={0, };
int heapCount=0;

void push(int x){
    heap[++heapCount]=x;

    int child=heapCount;
    int parent=child/2;

    while(child!=1&&heap[child]<heap[parent]){
        swap(heap[child], heap[parent]);
        child=parent;
        parent=child/2;
    }
}

int pop(){
    int root=heap[1];

    swap(heap[1], heap[heapCount]);
    heap[heapCount]=0;
    heapCount--;

    int parent=1;
    int child=parent*2;

    if(child+1<=heapCount)
        child=(heap[child]<heap[child+1])?child:child+1;

    while(child<=heapCount&&heap[child]<heap[parent]){
        swap(heap[child], heap[parent]);
        parent=child;
        child=parent*2;

        if(child+1<=heapCount)
            child=(heap[child]<heap[child+1])?child:child+1;
    }
    return root;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n;
    while(n--){
        cin >> x;
        if(x==0){
            if(heap[1]==0)
                cout << "0" << "\n";
            else
                cout << pop() << "\n";
        }
        else
            push(x);
    }
}