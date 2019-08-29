#include<stdio.h>
int main()
{
    
    int a[3],b[3],s,k;
    s=0;
    k=0;
    for(int i=0;i<3;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<3;i++)
    scanf("%d",&b[i]);
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
        s=s+1;
         if(a[i]<b[i])
         k=k+1;               
    }
printf("%d %d",s,k);
return 0;
}
