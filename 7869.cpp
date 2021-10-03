#include<iostream>
#include<cmath>
#include<algorithm>
#define pi 3.1415926535
using namespace std;

int main(){
    cout << fixed;
    cout.precision(3);
    double x1, y1, r1, x2, y2, r2, r_max, r_min, theta1, theta2, cnt;;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    if(r1>r2){
        r_max=r1;
        r_min=r2;
        cnt=1;
    }
    else{
        r_max=r2;
        r_min=r1;
        cnt=2;
    }

    double length=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    if(length>=r1+r2)
        cout << "0.000";
    else if(length+r_min<=r_max){
        if(cnt==2)
            cout << r1*r1*pi;
        else
            cout << r2*r2*pi;
    }
    else{
        theta1=2*acos((length*length+r2*r2-r1*r1)/(2*length*r2));
        theta2=2*acos((length*length+r1*r1-r2*r2)/(2*length*r1));

        double sum1=(r1*r1*theta2)/2-(r1*r1*sin(theta2))/2;
        double sum2=(r2*r2*theta1)/2-(r2*r2*sin(theta1))/2;
        cout << sum1+sum2;
    }
}