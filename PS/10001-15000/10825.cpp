#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

struct info{
	string name;
	int kor, eng, math;
};

bool cmp(info x, info y){
	if(x.kor>y.kor)
		return true;
	else if(x.kor==y.kor){
		if(x.eng<y.eng)
			return true;
		else if(x.eng==y.eng){
			if(x.math>y.math)
				return true;
			else if(x.math==y.math)
				if(x.name<y.name)
					return true;
				
		}
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	vector<info> v;
	
	cin >> n;
	for(int i=0; i<n; i++){
		string name;
		int kor, eng, math;
		cin >> name >> kor >> eng >> math;
		v.push_back({name, kor, eng, math});
	}
	
	sort(v.begin(), v.end(), cmp);
	
	for(auto a:v)
		cout << a.name << "\n";
}