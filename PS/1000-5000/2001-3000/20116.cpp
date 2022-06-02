#include<iostream>
using namespace std;

int arr[200001];

int main(){
	int n, l, mid;
	double sum=0, temp;
	cin >> n >> l >> arr[0];
	for(int i=1; i<n; i++){
		cin >> arr[i];
		sum+=temp;
		
		if(((sum/i)<=arr[i-1]-l)||((sum/i)>=arr[i-1]+l)){
			cout << "unstable";
			return 0;
		}
	}

	cout << "unstable";
}