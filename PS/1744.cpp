#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int main(){
	int n, minus=0, plus=0, zero=0, ans=0;
	deque<int> dq;
	cin >> n;
	for(int i=0; i<n; i++){
		int temp;
		cin >> temp;
		if(temp<0)
			minus++;
		if(temp==0)
			zero++;
		if(temp>0)
			plus++;
		dq.push_back(temp);
		
		if(temp==1){
			ans+=1;
			plus--;
			dq.pop_back();
		}
	}
	sort(dq.begin(), dq.end());
	
	while(minus>1){
		ans+=dq[0]*dq[1];
		dq.pop_front();
		dq.pop_front();
		minus=minus-2;
	}
	while(plus>1){
		ans+=dq[dq.size()-1]*dq[dq.size()-2];
		dq.pop_back();
		dq.pop_back();
		plus=plus-2;
	}
	
	if(minus==1&&zero>0){
		if(plus==1)
			ans+=dq[zero+minus];
	}
	else{
		while(!dq.empty()){
			ans+=dq.back();
			dq.pop_back();
		}
	}
	cout << ans;
}