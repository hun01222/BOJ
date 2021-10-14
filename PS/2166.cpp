#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

double arr[10001][2];
double sum=0;

void width(double a, double b, double c, double d){
    sum+=((b*c+d*arr[0][0]+a*arr[0][1])-(a*d+c*arr[0][1]+b*arr[0][0]))/2;
}

int main(){
    int n;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i][0] >> arr[i][1];
    }

    for(int i=1; i<n-1; i++){
        width(arr[i+1][0], arr[i+1][1], arr[i][0], arr[i][1]);
    }

    printf("%.1lf", abs(sum));
}