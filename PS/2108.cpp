#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int arr[500001]={0, };
int result[8001]={0, }; //result[4000]이 0

int main(){
	int n;
	int sum=0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> arr[i];
		sum+=arr[i];
		result[arr[i]+4000]++;
	}
	sort(arr, arr+n);
	
	int mcv, max=0;
	bool flag=false;
	for(int i=0; i<=8000; i++){
		if(result[i]>max){
			max=result[i];
			mcv=i-4000;
			flag=false;
		}
		else if(result[i]==max&&flag==false){
			mcv=i-4000;
			flag=true;
		}
	}
	
	if(round((double)sum/(double)n)==-0)
		cout << 0;
	else
		cout << round((double)sum/(double)n);
	cout << '\n' << arr[n/2] << '\n' << mcv << '\n' << arr[n-1]-arr[0];
}