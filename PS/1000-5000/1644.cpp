#include<iostream>
#include<math.h>
#define max 4000000
using namespace std;

int arr[max+1], prime[max+1]; // 큰 크기의 배열은 전역변수로!!

int main(){
    arr[1]=1; // 소수면 0
    int k=0;
    for(int i=2; i<=sqrt(max); i++){
        if(arr[i]==0){
            for(int j=i*2; j<=max; j+=i)
                arr[j]=1;
        }
    }

    for(int i=0; i<=max; i++){
        if(arr[i]==0)
            prime[k++]=i;
    }

    int n, start=0, end=0, temp=0, cnt=0;
    cin >> n;
    while(1){
        if(temp>=n){
            temp-=prime[++start];
        }
        else if(end==k-1)
            break;
        else if(temp<n){
            temp+=prime[++end];
        }

        if(temp==n){
            cnt++;
            //cout << prime[start-1] << prime[end-1] << "\n";
        }
    }
    cout << cnt;
}