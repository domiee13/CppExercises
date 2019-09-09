#include <stdio.h>

int main(){
    int n;
    printf("n = ");
    scanf("%d",&n);
    int sum=0,sum1=0,sum2=0;
    // sum2 = 0;
    // sum1 = 0;
    for(int i = 0;i<=n;i++){
        sum+=i;
    }
    for(int i = 0;i<=n;i++){
        if(i%2==0) continue;
        sum1+=i;
    }
    for(int i = 0;i<=n;i++){
        if(i%2!=0) continue;
        sum2+=i;
    }
printf("%d\n%d\n%d",sum,sum1,sum2);   return 0;
}