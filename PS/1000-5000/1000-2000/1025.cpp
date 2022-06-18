#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

bool IsSquare(int n){
	int root=(int)sqrt(n);
	if(root*root==n)
		return true;
	return false;
}

int main(){
	int n, m, ans=-1, map[10][10];
	
	cin >> n >> m;
	for(int i=1; i<=n; i++){
		string s;
		cin >> s;
		for(int j=1; j<=m; j++)
			map[i][j]=s[j-1]-'0';
	}
	
	for(int i=1; i<=n; i++)
		for(int j=1; j<=m; j++)
			for(int x=-n; x<n; x++){
				for(int y=-m; y<m; y++){
					if(x==0&&y==0)
						continue;
					int a=i, b=j;
					int temp=0;
					while(a>0&&a<=n&&b>0&&b<=m){
						temp*=10;
						temp+=map[a][b];
						if(IsSquare(temp))
							ans=max(ans, temp);
						a+=x;
						b+=y;
					}
					if(IsSquare(temp))
						ans=max(ans, temp);
				}
			}
	
	cout << ans;
}