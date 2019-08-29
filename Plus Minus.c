#include<stdio.h>
int main()
{
    int i,s;
    double c=0,c1=0,c2=0;
    double x,y,z;
    scanf("%d",&s);
    int a[s];
    for(i=0;i<s;i++)
    {
    scanf("%d",&a[i]);
    if(a[i]>0)
    c++;
    if(a[i]<0)
    c1++;
    if(a[i]==0)
     c2++;   
    }
x=c/s;
y=c1/s;
z=c2/s;
printf("%f\n",x);
printf("%f\n",y);
printf("%f\n",z);
return 0;
}

