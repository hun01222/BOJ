#include<iostream>
#include<string>
#define MAX 52
using namespace std;

int main(){
	int n, m, ans=0;
	bool before[MAX][MAX], map[MAX][MAX];
	cin >> n >> m;
	
	for(int i=0; i<n; i++){
		string s;
		cin >> s;
		for(int j=0; j<m; j++)
			before[i][j]=(s[j]-'0');
	}
	
	for(int i=0; i<n; i++){
		string s;
		cin >> s;
		for(int j=0; j<m; j++){
			if((s[j]-'0')==before[i][j])
				map[i][j]=true;
			else
				map[i][j]=false;
		}
	}
	
	if(n<3||m<3){
		bool flag=false;
		for(int i=0; i<n; i++)
			for(int j=0; j<m; j++)
				if(!map[i][j])
					flag=true;
		if(flag)
			cout << -1;
		else
			cout << 0;
		return 0;
	}
	
	for(int i=0; i<n-2; i++)
		for(int j=0; j<m-2; j++){
			if(!map[i][j]){
				for(int p=i; p<i+3; p++)
					for(int q=j; q<j+3; q++){
						if(map[p][q])
							map[p][q]=false;
						else
							map[p][q]=true;
						}
				ans++;
			}
		}

	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			if(!map[i][j]){
				cout << -1;
				return 0;
			}
	cout << ans;
}