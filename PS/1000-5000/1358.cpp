#include<iostream>
using namespace std;

int main(){
	int w, h, x, y, n, ans=0;
	cin >> w >> h >> x >> y >> n;
	for(int i=0; i<n; i++){
		int temp_x, temp_y;
		cin >> temp_x >> temp_y;
		if(((x<=temp_x)&&(x+w>=temp_x)&&(y<=temp_y)&&(y+h>=temp_y))||((x-temp_x)*(x-temp_x)+(y+h/2-temp_y)*(y+h/2-temp_y))<=(h/2)*(h/2)||((x+w-temp_x)*(x+w-temp_x)+(y+h/2-temp_y)*(y+h/2-temp_y))<=(h/2)*(h/2))
			ans++;
	}
	cout << ans;
}