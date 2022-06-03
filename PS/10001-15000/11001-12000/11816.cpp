#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
	int n, ans=0;
	string x;
	cin >> x;
	if(x[0]=='0'){
		if(x[1]=='x'){
			for(int i=2; i<x.size(); i++){
				if((x[i]-'0')>=0&&(x[i]-'0')<10)
					ans+=((x[i]-'0')*pow(16, x.size()-(i+1)));
				else
					ans+=((x[i]-'a'+10)*pow(16, x.size()-(i+1)));
			}
			cout << ans;
		}
		else{
			for(int i=1; i<x.size(); i++)
				ans+=((x[i]-'0')*pow(8, x.size()-(i+1)));
			cout << ans;
		}
	}
	else
		cout << x;
}