#include<iostream>
#define MAX 200020
using namespace std;

int arr[MAX]={0, };

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, q, ptr=0;
	
	cin >> n >> q;
	for(int i=0; i<n; i++)
		cin >> arr[i];
	
	while(q--){
		int temp;
		cin >> temp;
		if(temp==1){
			int i, x;
			cin >> i >> x;
			arr[(ptr+i-1)%n]+=x;
		}
		else if(temp==2){
			int s;
			cin >> s;
			ptr=(ptr+n-s)%n;
		}
		else{
			int s;
			cin >> s;
			ptr=(ptr+s)%n;
		}
	}
	
	for(int i=0; i<n; i++)
		cout << arr[(ptr+i)%n] << ' ';
}