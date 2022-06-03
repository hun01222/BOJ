#include<iostream>
using namespace std;

int main(){
	int w, h, p, q, t;
	cin >> w >> h >> p >> q >> t;
	p+=t, q+=t;
	p%=(2*w), q%=(2*h);
	
	if(p>w)
		p=2*w-p;
	if(q>h)
		q=2*h-q;
	
	cout << p << ' ' <<q;
}