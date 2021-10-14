#include<iostream>
#include<vector>
#include<cstring>
using namespace std; // '은 문자 한개, "은 문자 여러개

int ToNumber(char arr[]){
    int sum=0;
    for(int i=19; i>=0; i--){
        if(arr[i]=='V'){
            if(arr[i+1]=='I'){
                if(arr[i+2]=='I'){
                    if(arr[i+3]=='I'){
                        arr[i+3]=0;
                        sum+=8;
                    }
                    else{
                        sum+=7;
                    }
                    arr[i+2]=0;
                }
                else{
                    sum+=6;
                }
                arr[i+1]=0;
            }
            else if(arr[i-1]=='I'){
                sum+=4;
                arr[i-1]=0;
            }
            else{
                sum+=5;
            }
            arr[i]=0;
        }
        if(arr[i]=='L'){
            if(arr[i+1]=='X'){
                if(arr[i+2]=='X'){
                    if(arr[i+3]=='X'){
                        arr[i+3]=0;
                        sum+=80;
                    }
                    else{
                        sum+=70;
                    }
                    arr[i+2]=0;
                }
                else{
                    sum+=60;
                }
                arr[i+1]=0;
            }
            else if(arr[i-1]=='X'){
                sum+=40;
                arr[i-1]=0;
            }
            else{
                sum+=50;
            }
            arr[i]=0;
        }
        if(arr[i]=='D'){
            if(arr[i+1]=='C'){
                if(arr[i+2]=='C'){
                    if(arr[i+3]=='C'){
                        arr[i+3]=0;
                        sum+=800;
                    }
                    else{
                        sum+=700;
                    }
                    arr[i+2]=0;
                }
                else{
                    sum+=600;
                }
                arr[i+1]=0;
            }
            else if(arr[i-1]=='C'){
                sum+=400;
                arr[i-1]=0;
            }
            else{
                sum+=500;
            }
            arr[i]=0;
        }

        if(arr[i]=='X'){
            if(arr[i+1]=='I'){
                sum+=11;
                arr[i+1]=0;
            }
            else if(arr[i-1]=='I'){
                sum+=9;
                arr[i-1]=0;
            }
            else{
                sum+=10;
            }
            arr[i]=0;
        }
        else if(arr[i]=='C'){
            if(arr[i-1]=='X'){
                sum+=90;
                arr[i-1]=0;
            }
            else{
                sum+=100;
            }
            arr[i]=0;
        }
        else if(arr[i]=='M'){
            if(arr[i-1]=='C'){
                sum+=900;
                arr[i-1]=0;
            }
            else{
                sum+=1000;
            }
            arr[i]=0;
        }
    }

    for(int i=19; i>=0; i--){        
        if(arr[i]=='I'){
            sum+=1;
            arr[i]=0;
        }
        else if(arr[i]=='X'){
            sum+=10;
            arr[i]=0;
        }
        else if(arr[i]=='C'){
            sum+=100;
            arr[i]=0;
        }
        else if(arr[i]=='M'){
            sum+=1000;
            arr[i]=0;
        }
    }
    return sum;
}

void ToSring(int sum){
    while(sum!=0){
        if(sum/1000!=0){
            cout << 'M';
            sum-=1000;
        }
        else if(sum/900!=0){
            cout << "CM";
            sum%=900;
        }
        else if(sum/800!=0){
            cout << "DCCC";
            sum%=800;
        }
        else if(sum/700!=0){
            cout << "DCC";
            sum%=700;
        }
        else if(sum/600!=0){
            cout << "DC";
            sum%=600;
        }
        else if(sum/500!=0){
            cout << 'D';
            sum%=500;
        }
        else if(sum/400!=0){
            cout << "CD";
            sum%=400;
        }
        else if(sum/100!=0){
            cout << 'C';
            sum-=100;
        }
        else if(sum/90!=0){
            cout << "XC";
            sum%=90;
        }
        else if(sum/80!=0){
            cout << "LXXX";
            sum%=80;
        }
        else if(sum/70!=0){
            cout << "LXX";
            sum%=70;
        }
        else if(sum/60!=0){
            cout << "LX";
            sum%=60;
        }
        else if(sum/50!=0){
            cout << 'L';
            sum%=50;
        }
        else if(sum/40!=0){
            cout << "XL";
            sum%=40;
        }
        else if(sum/10!=0){
            cout << 'X';
            sum-=10;
        }
        else if(sum/9!=0){
            cout << "IX";
            sum%=9;
        }
        else if(sum/8!=0){
            cout << "VIII";
            sum%=8;
        }
        else if(sum/7!=0){
            cout << "VII";
            sum%=7;
        }
        else if(sum/6!=0){
            cout << "VI";
            sum%=6;
        }
        else if(sum/5!=0){
            cout << 'V';
            sum%=5;
        }
       else if(sum/4!=0){
            cout << "IV";
            sum%=4;
        }
       else if(sum/1!=0){
            cout << 'I';
            sum-=1;
        }
    }
}

int main(){
    char s1[20], s2[20];
    int sum=0;
    cin >> s1 >> s2;

    sum=ToNumber(s1)+ToNumber(s2);
    cout << sum << '\n';

    ToSring(sum);

}

// I II III IV V VI VII VIII IX X XI