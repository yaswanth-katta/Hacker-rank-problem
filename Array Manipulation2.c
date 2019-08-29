int main() {
    long long int n,k,i,max=0,x=0;
    scanf("%lld %lld",&n,&k);
    int *a=(int *)malloc(sizeof(int)*(n+1));
    for(i=0;i<n;i++){
      *(a+i)=0;
    }
    for(i=0;i<k;i++){
        long long int c,d,g;
        scanf("%lld %lld %lld",&c,&d,&g);
        *(a+c)+=g;
        if(d+1<=n){
            *(a+d+1)-=g;
        }
        
    }
    for(i=1;i<=n;i++){
        x+=*(a+i);
        if(max<x){
            max=x;
        }
    }
    printf("%lld",max);
    return 0;
}
