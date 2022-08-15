#include<iostream>
using namespace std;

int main(){
	int l, p, v, i=1;
	while(1){
		int ans=0;
		cin >> l >> p >> v;
		if(!l&&!p&&!v)
			return 0;
		while(1){
			if(v>=p){
				ans+=l;
				v-=p;
			}
			else if(v>=l){
				ans+=l;
				break;
			}
			else{
				ans+=v;
				break;
			}
		}
		
		cout << "Case " << i << ": " << ans << "\n";
		i++;
	}
}