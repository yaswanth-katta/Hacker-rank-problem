#include<stdio.h>

int main()
{
    long long int n,m,i,max;
     scanf("%lld%lld",&n,&m);
     
     long long int arr[1000000] = { 0 };
     max=arr[0];
    while(m!=0){
        long long int a,b,k;
        scanf("%lld%lld%lld",&a,&b,&k);
        
        for(i=a-1;i<b;i++){
            arr[i]=arr[i]+k;
            if(arr[i]>max)
                max=arr[i];
        }
        m--;
    }

     printf("%lld",max);

}
