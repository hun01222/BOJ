#include<iostream>
using namespace std;

int main(){
	int mul, n, m, ans, x1=0, y1=0, x2=0, y2=0, flag=0;
	int arr[4][2]={0, };
	
	cin >> mul;
	for(int i=0; i<6; i++){
		cin >> n >> m;
		if(arr[n-1][0]==0)
			arr[n-1][0]=m;
		else{
			if(arr[n-1][0]>m)
				arr[n-1][1]=m;
			else{
				arr[n-1][1]=arr[n-1][0];
				arr[n-1][0]=m;
			}
			if(flag==0){
				x1=arr[n-1][0], x2=arr[n-1][1];
				flag=1;
			}
			else
				y1=arr[n-1][0], y2=arr[n-1][1];
		}
	}
	
	ans = (x1+x2)*(y1+y2)-x2*y2;
	cout << mul*ans;
}