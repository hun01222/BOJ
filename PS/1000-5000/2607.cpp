#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

void check(char* s, int* alpha){
    for(int i=0; i<strlen(s); i++){
        for(int j=0; j<26; j++){
            if(s[i]>0){
                alpha[s[i]-'A']++;
                //cout << i << ' ';
                break;
            }
        }
    }
}

int main(){
    int n, cnt=0, swap=0, a=0;
    char s1[11], s2[11];
    int alpha1[26]={0, }, alpha2[26]={0, };
    cin >> n;
    cin >> s1;
    check(s1, alpha1);

    for(int i=0; i<n-1; i++){
        cin >> s2;
        check(s2, alpha2);

        for(int j=0; j<26; j++){
            if(alpha1[j]-alpha2[j]>1||alpha1[j]-alpha2[j]<-1)
                break;
            else if(alpha1[j]-alpha2[j]==1){
                if(swap==1||a==3)
                    break;
                swap=1;
                a++;
            }
            else if(alpha1[j]-alpha2[j]==-1){
                if(swap==2||a==3)
                    break;
                swap=2;
                a++;
            }
            if(j==25){
                cnt++;
                //cout << i;
            }
        }
        swap=0;
        a=0;
        for(int j=0; j<26; j++)
            alpha2[j]=0;
    }
    cout << cnt;
}
