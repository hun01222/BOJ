#include<stdio.h>

long long int sigma(long long int a){
    long long int sum=0;;
    if(a==1)
        return 2;
    else{
        sum+=a;
        while(a--){
            sum+=(2*a);
        }
        return sum;
    }
}

int main(){
    long long int t, x, y, dis=0, a=0, cnt=0;
    scanf("%lld", &t);
    while(t--){
        scanf("%lld %lld", &x, &y);
        dis=y-x;
        while(a++){
            if(dis<=sigma(a)){
                if(dis<=3){
                    cnt+=2;
                    dis-=2;
                    break;
                }
                cnt+=(2*a-1);
                dis-=sigma(a-1);
                break;
            }
        }
        while(a--){
            if(dis>=a){
                dis-=a;
                cnt++;
            }          
        }
        printf("%lld\n", cnt);
    }

    return 0;
}