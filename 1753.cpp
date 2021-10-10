#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, x, temp, cnt=0;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    sort(arr, arr+n);

    cin >> x;
    temp=n;

    for(int i=0; i<n; i++){
        for(int j=temp; j>=0; j--){
            if(arr[i]+arr[j]==x){
                cnt++;
                temp=j;
                break;
            }
        }
    }
    cout << cnt/2;
}

// 1 2 3 5 7 9 10 11 12 // 13