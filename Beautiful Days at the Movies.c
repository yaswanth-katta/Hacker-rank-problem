#include <stdio.h>
#include <math.h>
int main() {
int a,b,c,count=0,i;
    scanf("%d %d %d",&a,&b,&c);
    for(i=a;i<=b;i++)
        {
        int p=i,rev=0;
        while(p!=0)
            {
            rev=rev*10+(p%10);
            p=p/10;
        }
        if(abs(rev-i)%c==0)
            count++;
    }
    printf("%d",count);
    return 0;
}
