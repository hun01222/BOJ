#include<iostream>
#include<algorithm>
using namespace std;

pair<int, int> arr[100001];

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=0; i<n; i++)
			cin >> arr[i].first >> arr[i].second;
		sort(arr, arr+n);
		
		int ans=1;
		int interview=arr[0].second;
		for(int i=1; i<n; i++){
			if(interview>arr[i].second){
				ans++;
				interview=arr[i].second;
			}
		}
		cout << ans << "\n";
	}
}