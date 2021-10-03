#include<iostream>
#include<vector>
#include<string>
using namespace std;

void check(char* s, char* alpha){
    for(int i=0; i<26; i++){
        if(s[i]>0)
            alpha[s[i]-'A']++;
    }
}

int main(){
    int n, cnt=0, deter=0;
    char s1[11], s2[11], alpha1[26], alpha2[26];
    cin >> n;
    scanf("%s", s1);
    check(s1, alpha1);

    for(int i=0; i<n-1; i++){
        scanf("%s", s2);
        check(s2, alpha2);

        for(int j=0; j<26; j++){
            if(s1[j]-s2[j]>1||s1[j]-s2[j]<-1)
                break;
            else if(s1[j]-s2[j]==1||s1[j]-s2[j]==-1){
                if(deter==1)
                    break;
                deter=1;
            }
            if(j==25)
                cnt++;
        }
        for(int j=0; j<26; j++)
            alpha2[j]=0;
    }
    cout << cnt;
}
