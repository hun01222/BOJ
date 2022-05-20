#include<iostream>
#include<cmath>
#include<string>
#include<queue>
using namespace std;

struct stru{
	int temp, cnt;
};

queue<stru> q;

bool IsPrime(int num){
	if(num<2)
		return false;
	
	for(int i=2; i<=sqrt(num); i++){
		if(num%i==0)
			return false;
	}
	
	return true;
}

void BFS(int n){
	while(!q.empty()){
		int temp=q.front().temp;
		int cnt=q.front().cnt;
		q.pop();
		
		if(cnt==n){
			cout << temp << "\n";
			continue;
		}
		
		for(int i=0; i<10; i++){
			if(IsPrime(temp*10+i))
				q.push({temp*10+i, cnt+1});
		}
	}
}

int main(){
	int n;
	cin >> n;

	q.push({2, 1});
	q.push({3, 1});
	q.push({5, 1});
	q.push({7, 1});
	
	BFS(n);
}