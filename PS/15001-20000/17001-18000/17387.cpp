#include<iostream>
#include<algorithm>
typedef long long ll;
using namespace std;

struct coordinate{
	ll x, y;
	
	void input(){
		cin >> x >> y;
	}
};

int ccw(coordinate A, coordinate B, coordinate C){
	ll temp=1LL*(A.x*B.y+B.x*C.y+C.x*A.y-(B.x*A.y+C.x*B.y+A.x*C.y));
	if(temp>0)
		return 1;
	else if(temp==0)
		return 0;
	else return -1;
}

bool IsLineSegmentIntersection(coordinate A, coordinate B, coordinate C, coordinate D){
	int AB=ccw(A, B, C)*ccw(A, B, D);
	int CD=ccw(C, D, A)*ccw(C, D, B);
	
	if(AB==0&&CD==0){
		if(A.x<B.x)
			swap(A.x, B.x);
		if(C.x<D.x)
			swap(C.x, D.x);
		return (C.x>=B.x)&&(A.x>=D.x);
	}
	
	return (AB<=0)&&(CD<=0);
}

int main(){
	coordinate A, B, C, D;
	
	A.input();
	B.input();
	C.input();
	D.input();
	
	if(IsLineSegmentIntersection(A, B, C, D))
		cout << 1;
	else
		cout << 0;
}