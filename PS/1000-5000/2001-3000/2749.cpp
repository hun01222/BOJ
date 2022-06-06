#include<iostream>
#include<vector>
#define MOD 1000000
using namespace std;
typedef long long ll;
typedef vector<vector<ll>> matrix;

matrix operator * (const matrix &a, const matrix &b){
	ll size=a.size();
	matrix res(size, vector<ll>(size));

	for(ll i=0; i<size; i++)
		for(ll j=0; j<size; j++){
			for(ll k=0; k<size; k++)
				res[i][j]+=a[i][k]*b[k][j];
			res[i][j]%=MOD;
		}
	
	return res;
}

matrix power(matrix a, ll n){
	ll size=a.size();
	matrix res(size, vector<ll>(size));
	
	for(ll i=0; i<size; i++)
		res[i][i]=1;

	while(n>0){
		if(n%2==1)
			res=res*a;
		n/=2;
		a=a*a;
	}
	
	return res;
}

int main(){
	ll num;
	cin >> num;
	matrix A(2, vector<ll>(2));
	matrix ans(2, vector<ll>(2));
	A[0][0]=1, A[0][1]=1, A[1][0]=1, A[1][1]=0;
	ans[0][0]=1, ans[1][0]=0, ans[0][1]=0, ans[1][1]=1;
	
	A=power(A, num-1);
	ans=A*ans;

	cout << ans[0][0]%MOD;
}