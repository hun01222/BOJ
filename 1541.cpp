#include<iostream>
#include<string>
using namespace std;

int main(){
    string s="", temp="";
    int sum=0;
    bool minus=false;

    cin >> s;
    for(char c:s){
        if(c=='+'){
            if(minus==true)
                sum-=stoi(temp);
            else
                sum+=stoi(temp);
            temp.clear();
        }
        else if(c=='-'){
            if(minus==true)
                sum-=stoi(temp);
            else{
                sum+=stoi(temp);
                minus=true;
            }
            temp.clear();
        }
        else{
            temp+=c;
        }
    }
    if(minus==true)
        sum-=stoi(temp);
    else
        sum+=stoi(temp);
    cout << sum;
}