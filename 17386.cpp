#include<iostream>
#include<vector>
#include<float.h>
#include<math.h>
using namespace std;

double x, y;

int compare(double x1, double y1, double x2, double y2){
    if(x1<=x2){
        if(x1<x&&x<x2)
            return 1;
    }
    else if(x1>=x2){
        if(x2<x&&x<x1)
            return 1;
    }
    if(fabs(x-x1)<=FLT_EPSILON||fabs(x-x2)<=FLT_EPSILON)
        return 1;
    return 0;
}

int main(){
    double a, b;
    double m1, m2;
    vector<pair<double, double>> v;

    for(int i=0; i<4; i++){
        cin >> a >> b;
        v.push_back({a, b});
    }

    m1=(v[1].second-v[0].second)/(v[1].first-v[0].first);
    m2=(v[3].second-v[2].second)/(v[3].first-v[2].first);

    if(m1==m2)
        cout << "0";
    else{
        x=(-m1*v[0].first+v[0].second+m2*v[2].first-v[2].second)/(-m1+m2);
        y=(-m2*(m1*v[0].first-v[0].second)+m1*(m2*v[2].first-v[2].second))/(-m1+m2);
        if(compare(v[0].first, v[0].second, v[1].first, v[1].second)==1&&compare(v[2].first, v[2].second, v[3].first, v[3].second==1))
            cout << "1";
        else
            cout << "0";
    }
    // cout << '\n' << x << '\n' << y << '\n';
    // cout << m1 << '\n' << m2 << '\n';
}