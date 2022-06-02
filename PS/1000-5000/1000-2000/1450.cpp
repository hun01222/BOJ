#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n, c, cnt=1; // 비었을 경우 고려
    long long int temp=0;
    int arr[31];

    cin >> n >> c;
    for(int i=0; i<n; i++)
        cin >> arr[i];
    sort(arr, arr+n);

    int a[n/2+1], b[n/2];
    for(int i=0; i<n/2+1; i++){
        a[i]=arr[i];
        b[i]=arr[n/2+i];
    }

    

    cout << cnt;
}