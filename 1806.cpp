#include<iostream>
using namespace std;

int main(){
    int n, s, temp, start=0, end=0, len=100001;
    int arr[100001];
    cin >> n >> s;
    for(int i=0; i<n; i++)
        cin >> arr[i];
    temp=arr[0];

    while(end<n){
        if(temp<s){
            end++;
            temp+=arr[end];
            //cout << end << "\n";
        }
        else if(temp>=s){
            len=len<end-start+1?len:end-start+1;
            temp-=arr[start];
            start++;
            //cout << start << "\n";
        }
    }

    if(len==100001)
        cout << "0";
    else
        cout << len;
}