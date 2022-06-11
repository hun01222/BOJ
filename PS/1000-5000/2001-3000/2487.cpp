#include<iostream>
#include<algorithm>
#define MAX 20001
typedef long long ll;
using namespace std;

ll cnt;
bool visited[MAX];
int tree[MAX];

int GCD(ll a, ll b){
	if(a<b)
		swap(a, b);
	if(a%b==0)
		return b;
	return GCD(b, a%b);
}

void DFS(int curr){
	if(visited[curr])
		return;
	
	cnt++;
	visited[curr]=true;
	DFS(tree[curr]);
}

int main(){
	ll n, ans=1;
	cin >> n;
	for(int i=1; i<=n; i++)
		cin >> tree[i];
	
	for(int i=1; i<=n; i++){
		cnt=0;
		if(!visited[i]){
			DFS(i);
			ans=(cnt*ans)/GCD(cnt, ans);
		}
	}
	
	cout << ans;
}