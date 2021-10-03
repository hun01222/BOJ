#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, temp;
    vector<int> v;

    cin >> n;

    for(int i=1; i<=n; i++){
        cin >> temp;
        v.insert(v.begin()+v.size()-temp, i);
    }

    for(int i=0; i<n; i++)
        cout << v[i] << ' ';
}