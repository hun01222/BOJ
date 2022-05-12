#include<iostream>
#include<map>
using namespace std;

int n, s;
int arr[41];
map<int, int> m;
long long cnt;

void rs(int mid, int sum){
	if(mid==n){
		m[sum]++;
		return;
	}
	rs(mid+1, sum+arr[mid]);
	rs(mid+1, sum);
}

void ls(int st, int sum){
	if(st==n/2){
		cnt+=m[s-sum];
		return;
	}
	ls(st+1, sum+arr[st]);
	ls(st+1, sum);
}

int main(){
	cin >> n >> s;
	for(int i=0; i<n; i++)
		cin >> arr[i];
	
	rs(n/2, 0);
	ls(0, 0);
	
	if(s==0)
		cout << cnt-1;
	else
		cout << cnt;
}