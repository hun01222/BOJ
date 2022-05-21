#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int n, arr[100001], min, max, start, end, sum;
    cin >> n;
    for(long long int i=0; i<n; i++)
        cin >> arr[i];
    sort(arr, arr+n);

    start=0;
    end=n-1;
    min=arr[start];
    max=arr[end];
    sum=arr[start]+arr[end];

    while(1){
        if(end-start==1)
            break;

        if(arr[start]+arr[end]>0)
            end--;
        else
            start++;

        if(abs(sum)>abs(arr[start]+arr[end])){
            min=arr[start];
            max=arr[end];
            sum=min+max;
        }
    }
    cout << min << " " << max;
}