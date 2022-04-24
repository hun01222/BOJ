#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// end -> start
// asdf s 0 1 안됨
int main(){
	string s;
	int n, temp_start=0, temp_end=0;
	int arr[26][3]={0, };
	cin >> s >> n;
	arr[s[0]-97][0]++;
	
	while(n--){
		int start, end;
		char alpha;
		cin >> alpha >> end >> start;
		
		temp_start=arr[alpha-97][1];
		temp_end=arr[alpha-97][2];
		arr[alpha-97][1]=start;
		arr[alpha-97][2]=end;
		
		if(temp_start<start){
			for(int i=temp_start+1; i<=start; i++){
				arr[s[i]-97][0]++;
			}
		}
		if(temp_end>end){
			for(int i=temp_end-1; i>=end; i--){
				arr[s[i]-97][0]++;
			}
		}
		if(temp_start>start){
			for(int i=temp_start; i>start; i--){
				arr[s[i]-97][0]--;
			}
		}
		if(temp_end<end){
			for(int i=temp_end; i<end; i++){
				arr[s[i]-97][0]--;
			}
		}
		cout << arr[alpha-97][0] << "\n";
	}
}