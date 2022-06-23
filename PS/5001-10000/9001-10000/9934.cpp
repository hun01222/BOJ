#include<iostream>
#include<vector>
using namespace std;

const int MAX=1025;

int k;
vector<int> v[10];
int arr[MAX];

void insert_tree(int depth, int start, int end){
	if(depth==k)
		return;
	
	int mid=(start+end)/2;
	v[depth].push_back(arr[mid]);
	insert_tree(depth+1, start, mid);
	insert_tree(depth+1, mid+1, end);
}

int main(){
	int n, idx=0;
	
	cin >> k;
	while(cin>>n)
		arr[idx++]=n;
	
	insert_tree(0, 0, idx);
	
	for(int i=0; i<k; i++){
		for(auto a:v[i])
			cout << a << ' ';
		cout << "\n";
	}
}