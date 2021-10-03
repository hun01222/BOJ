#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, temp, size;
    vector<int> v;

    cin >> n;
    cin >> temp;
    v.push_back(temp);

    for(int i=1; i<n; i++){
        cin >> temp;
        size=v.size();

        if(temp>v[size-1]){
            v.push_back(temp);
        }
        else{
            for(int j=size-1; j>=0; j--){
                if(temp>v[j]){
                    v[j+1]=temp;
                    break;
                }
                else if(j==0){
                    v[0]=temp;
                }
            }
        }
    }
    // for(int i=0; i<size; i++)
    //     cout << v[i] << '\n';
    cout << v.size();
}