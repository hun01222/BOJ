#include<iostream>
#include<queue>
using namespace std;

int main(){
	int t, n;
	deque<int> dq;
	cin >> t;
	
	while(t--){
		cin >> n;
		int ans=0, temp;
		for(int i=0; i<n; i++){
			cin >> temp;
			dq.push_front(temp);
		}
		whlie(dp.size()>1){
			
		}
		
		ans+=dp.front();
		cout << ans << "\n";
	}
}