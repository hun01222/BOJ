#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x1, y1, x2, y2, cnt;
        cnt=0;
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> n;
        while(n--){
            int cx, cy, r, len1, len2;
            cin >> cx >> cy >> r;
            len1=sqrt((cx-x1)*(cx-x1)+(cy-y1)*(cy-y1));
            len2=sqrt((cx-x2)*(cx-x2)+(cy-y2)*(cy-y2));
            if(len1<r)
                cnt++;
            if(len2<r)
                cnt++;
            if(len1<r&&len2<r)
                cnt=cnt-2;
        }
        cout << cnt << '\n';
    }
}