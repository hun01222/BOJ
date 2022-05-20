#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
#define max 10001
using namespace std;

int main(){
	vector<int> v(max, 1);
	for(int i=2; i<=sqrt(max); i++){
		for(int j=i*2; j<=max; j+=i){
			if(v[j])
				v[j]=0;
		}
	}
	
	int t;
	cin >> t;
	while(t--){
		int a, b, mem[10001]={0, };
		queue<pair<int, int>> q;
		cin >> a >> b;
		
		q.push(make_pair(a, 0));
		while(!q.empty()){
			int num=q.front().first;
			int cnt=q.front().second;
			q.pop();
			if(mem[num])
				continue;
			mem[num]=1;
			if(num==b){
				cout << cnt << "\n";
				break;
			}
			
			for(int i=1; i<10; i++){
				int temp=num;
				temp%=1000;
				if(v[temp+1000*i])
					q.push(make_pair(temp+1000*i, cnt+1));
			}
			for(int i=0; i<10; i++){
				int temp=num;
				int share=(temp/1000);
				temp%=100;
				if(v[share*1000+100*i+temp])
					q.push(make_pair(share*1000+100*i+temp, cnt+1));
			}
			for(int i=0; i<10; i++){
				int temp=num;
				int share=(temp/100);
				temp%=10;
				if(v[share*100+10*i+temp])
					q.push(make_pair(share*100+10*i+temp, cnt+1));
			}
			for(int i=0; i<10; i++){
				int temp=num;
				int share=(temp/10);
				if(v[share*10+i])
					q.push(make_pair(share*10+i, cnt+1));
			}
		}
	}
}