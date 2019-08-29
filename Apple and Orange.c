#include<stdio.h>
int main(){
    long long int s,t,a,b,m,n,count=0,count1=0,i;
    scanf("%lld%lld%lld%lld%lld%lld",&s,&t,&a,&b,&m,&n);
    long long int apples[m],oranges[n];
    for(i=0;i<m;i++){
        scanf("%lld",&apples[i]);
        if (apples[i]+a >= s && apples[i]+a <= t)
          count++;
        }
     for(i=0;i<n;i++){
         scanf("%lld",&oranges[i]);
         if (oranges[i]+b >= s && oranges[i]+b <= t)
           count1++;
         }
    printf("%lld\n%lld",count,count1);
    return 0; 
}
