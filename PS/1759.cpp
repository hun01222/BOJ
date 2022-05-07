#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int l, c;
vector<char> alpha;
vector<char> v;

bool check(){
	int a=0;
	for(int i=0; i<l; i++){
		if(v[i]=='a'||v[i]=='e'||v[i]=='i'||v[i]=='o'||v[i]=='u')
			a++;
	}
	if(a>=1&&l-a>=2)
		return true;
	return false;
}

void DFS(int idx){
	if(v.size()==l){
		if(check()){
			for(int i=0; i<l; i++)
				cout << v[i];
			cout << "\n";
		}
		return;
	}
	for(int i=idx; i<c; i++){
		v.push_back(alpha[i]);
		DFS(i+1);
		v.pop_back();
	}
}

int main(){
	cin >> l >> c;
	for(int i=0; i<c; i++){
		char temp;
		cin >> temp;
		alpha.push_back(temp);
	}
	sort(alpha.begin(), alpha.end());
	DFS(0);
}