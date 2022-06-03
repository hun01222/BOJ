#include<iostream>
using namespace std;

int main(){
    int x1, y1, x2, y2, x3, y3, product;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    product=((x2-x1)*(y3-y2))-((y2-y1)*(x3-x2));
    if(product>0)
        cout << "1";
    else if(product<0)
        cout << "-1";
    else
        cout << "0";
}