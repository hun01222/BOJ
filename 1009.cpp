#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, temp;
        cin >> a >> b;
        temp=1;
        while(b--){
            temp=(temp*a)%10;
            if(temp==0)
                temp=10;
        }
            cout << temp << '\n';
    }
}