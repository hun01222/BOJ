#include<iostream>
#include<string>
using namespace std;

int main(){
	string str, cmp, ans="";
	int str_len, cmp_len;
	cin >> str >> cmp;
	
	str_len=str.length(), cmp_len=cmp.length();
	for(int i=0; i<str_len; i++){
		ans+=str[i];
		
		if(str[i]==cmp[cmp_len-1]){
			for(int j=0; j<cmp_len; j++){
				if(ans[ans.length()-1-j]!=cmp[cmp_len-1-j])
					break;
				if(j==cmp_len-1){
					for(int k=0; k<cmp_len; k++)
						ans.pop_back();
				}
			}
		}
	}
	
	if(ans=="")
		cout << "FRULA";
	else
		cout << ans;
}