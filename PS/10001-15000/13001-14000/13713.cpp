#include<iostream>
#include<string>
#include<algorithm>
#define MAX 1000001
using namespace std;

int z[MAX]={0, };

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	string s;
	int len;
	cin >> s;
	reverse(s.begin(), s.end());
	len=s.length();
	
	int x=0, y=0;
	
	for(int i=1; i<len; i++){
		if(i>y){
			int j=0;
			while(i+j<len&&s[j]==s[i+j]){
				z[i]++;
				j++;
			}
		}
		else if(i+z[i-x]<=y){
			z[i]=z[i-x];
		}
		else{ // if(i+z[i-x]>y)
			z[i]=y-i+1;
			int j=y+1;
			while(j<len&&s[j]==s[j-i]){
				z[i]++;
				j++;
			}
		}
		
		if(i+z[i]-1>y){
			y=i+z[i]-1;
			x=i;
		}
	}

	int m;
	cin >> m;
	
	while(m--){
		int temp;
		cin >> temp;
		
		if(temp==len)
			cout << len << "\n";
		else
			cout << z[len-temp] << "\n";
	}
}