#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, m, temp, sum=0, right, mid, left;
    vector<int> v;

    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> temp;
        v.push_back(temp);
    }
    cout << sum;

    while(1){
        left=0, right=sum, mid=(right+left)/2;

        if(m<sum-(n*mid)){
            left=mid;
            mid=(right+left)/2;
        }
        else if(0>sum-(n*mid)){
            right=mid;
            mid=(right+left)/2;
        }
        else{
            break;
        }
    }
    cout << mid;
}