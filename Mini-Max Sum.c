#include<stdio.h>
int main()
{
    long long int a[5],sum=0,i,j;
    for( i=0;i<5;i++)
    {
      scanf("%lld",&a[i]);
       sum=sum+a[i];
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        if(a[i]>a[j]&&i!=j)
        {
            int k=a[i];
            a[i]=a[j];
            a[j]=k;
        }
    }
    printf("%lld %lld",sum-a[0],sum-a[4]);
    return 0;

}
