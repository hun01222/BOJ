#include<iostream>
using namespace std;

int heap[100001][2]={0, };
int heapCount=0;

void push(int x){
    heap[++heapCount][0]=abs(x);
    if(x>0)
        heap[heapCount][1]=1;
    else
        heap[heapCount][1]=0;

    int child=heapCount;
    int parent=child/2;

    while(child!=1&&heap[child][0]<heap[parent][0]){
        swap(heap[child][0], heap[parent][0]);
        swap(heap[child][1], heap[parent][1]);
        child=parent;
        parent=child/2;
    }
}

int pop(){
    int root=heap[1][0];
    int plus=heap[1][1]; // +는 1, -는 0

    swap(heap[1][0], heap[heapCount][0]);
    swap(heap[1][1], heap[heapCount][1]);
    heap[heapCount][0]=0;
    heap[heapCount][1]=0;
    heapCount--;

    int parent=1;
    int child=parent*2;

    if(child+1<=heapCount){
        child=(heap[child][0]<heap[child+1][0])?child:child+1;
    }

    while(child<=heapCount&&heap[child][0]<heap[parent][0]){
        swap(heap[child][0], heap[parent][0]);
        swap(heap[child][1], heap[parent][1]);
        parent=child;
        child=parent*2;

        if(child+1<=heapCount)
            child=(heap[child][0]<heap[child+1][0])?child:child+1;
    }
    if(plus==1)
        return root;
    else
        return -root;
}

void my_sort(){
    for(int i=2; i<100001; i++){
        if(heap[1][0]==heap[i][0]){
            if(heap[i][1]==0){
                swap(heap[1][1], heap[i][1]);
                break;
            }
        }
        else
            break;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n;
    while(n--){
        cin >> x;
        if(x==0){
            if(heap[1][0]==0)
                cout << "0" << "\n";
            else if((heap[1][0]==heap[2][0]||heap[1][0]==heap[3][0])&&heap[1][1]==1){
                my_sort();
                cout << pop() << "\n";
            }
            else
                cout << pop() << "\n";
        }
        else
            push(x);
    }
}