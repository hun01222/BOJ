#include<iostream>
#include<string>
#define MAX 200002
using namespace std;

int sum[MAX][26]={0, };

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	string s;
	cin >> s;
	
	for(int i=0; i<s.size(); i++){
		if(i!=0)
			for(int j=0; j<26; j++)
				sum[i+1][j]=sum[i][j];
		sum[i+1][s[i]-'a']++;
	}
	
	int t;
	cin >> t;
	while(t--){
		char temp;
		int a, b;
		cin >> temp >> a >> b;
		
		cout << sum[b+1][temp-'a']-sum[a][temp-'a'] << "\n";
	}
}