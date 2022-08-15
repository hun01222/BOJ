#include<iostream>
#include<queue>
#include<algorithm>
typedef long long ll;
using namespace std;

struct stru{
	ll x, cnt;
};

int main(){
	ll a, b;
	queue<stru> q;
	cin >> a >> b;
	q.push({a, 1});
	while(!q.empty()){
		ll temp_x=q.front().x;
		ll temp_cnt=q.front().cnt;
		q.pop();
		if(temp_x==b){
			cout << temp_cnt;
			return 0;
		}
		if(temp_x*2<=b)
			q.push({temp_x*2, temp_cnt+1});
		if(temp_x*10+1<=b)
			q.push({temp_x*10+1, temp_cnt+1});
	}
	cout << -1;
}