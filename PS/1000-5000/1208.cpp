#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> v;
int n, s, half;
long long ans;
map<int ,int> mp; // idx<0 을 참조해야 되기 때문, map[index]=value

void DFSL(int idx, int sum){
    if(idx==half){
        mp[sum]++;
        return;
    }
    DFSL(idx+1, sum);
    DFSL(idx+1, sum+v[idx]);
}

void DFSR(int idx, int sum){
    if(idx==n){
        ans+=mp[s-sum];
        return;
    }
    DFSR(idx+1, sum);
    DFSR(idx+1, sum+v[idx]);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> s;
    half=n/2;
    v.resize(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    
    DFSL(0, 0);
    DFSR(n/2, 0);

    if(s==0) ans--; // 아무것도 없는거 하나 빼줌
    cout << ans;
}