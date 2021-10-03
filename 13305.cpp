#include<iostream>
#include<algorithm>
#define max 100001
using namespace std;

int main(){
    int n, min;
    long long int sum=0, temp=0;
    int cost[max]={0, }, length[max]={0, };

    cin >> n;
    for(int i=0; i<n-1; i++)
        cin >> length[i];
    for(int i=0; i<n; i++)
        cin >> cost[i];

    min=cost[0];

    for(int i=0; i<n-1; i++){
        if(min>cost[i]){
            sum+=(min*temp);
            temp=0;
            min=cost[i];
        }
        temp+=length[i];
        if(i==n-2){
            sum+=(min*temp);
        }
    }
    cout << sum;
}