#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<memory.h>
using namespace std;

int n;
double ans;
bool a[20];
int sum_x[2], sum_y[2];

struct coor{
	int x, y;
};

vector<coor> v;

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		ans=-1;
		memset(a, 0, sizeof(a));
		for(int i=0; i<n; i++){
			int temp_x, temp_y;
			cin >> temp_x >> temp_y;
			v.push_back({temp_x, temp_y});
		}
		for(int i=n/2; i<n; i++)
			a[i]=1;
		
		do{
			sum_x[0]=sum_x[1]=sum_y[0]=sum_y[1]=0;
			for(int i=0; i<n; i++){
				sum_x[a[i]]+=v[i].x;
				sum_y[a[i]]+=v[i].y;
			}
			double temp=sqrt((sum_x[0]-sum_x[1])*(sum_x[0]-sum_x[1])+(sum_y[0]-sum_y[1])*(sum_y[0]-sum_y[1]));
			if(ans<0||ans>temp)
				ans=temp;
		}while(next_permutation(a, a+n));
		
		v.clear();
		printf("%f\n", ans);
	}
}