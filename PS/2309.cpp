#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;
    int temp, sum=0, b=0;
    for(int i=0; i<9; i++){
        cin >> temp;
        sum+=temp;
        v.push_back(temp);
    }

    
    for(int i=0; i<9; i++){
        for(int j=i+1; j<9; j++){
            if(sum-(v[i]+v[j])==100){
                v.erase(v.begin()+i);
                v.erase(v.begin()+j-1);
                
                b=1;
                break;
            }
        }
        if(b==1)
            break;
    }

    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++)
        cout << v[i] << '\n';
}