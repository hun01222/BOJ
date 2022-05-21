#include<iostream>
#include<queue>
#define max 100001
using namespace std;

int n, k;
int check[max]={0, };

struct A{
    int x, cost;
};
queue<A> q;

int BFS(){
    while(!q.empty()){
        int x=q.front().x;
        int cost=q.front().cost;
        q.pop();

        //cout << x << " " << cost << "\n";

        int x1=x-1;
        int x2=x+1;
        int x3=x*2;

        if(x==k)
            return cost;

        if(0<=x1&&check[x1]==0){
            check[x1]=1;
            q.push({x1, cost+1});
        }
        if(x2<=max&&check[x2]==0){
            check[x2]=1;
            q.push({x2, cost+1});
        }
        if(x3<=max&&check[x3]==0){
            check[x3]=1;
            q.push({x3, cost+1});
        }

    }
    return 0;
}

int main(){
    cin >> n >> k;
    if(n<=k){
        q.push({n, 0});
        cout << BFS();
    }
    else{
        cout << n-k;
    }
}