#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],i,k,r,j;
    for(i=0;i<n;i++){ scanf("%d",&arr[i]); }
    for(i=0;i<n;i++){
        for(j=1;j<=20;j++){
        k=5*j;
        if(arr[i]<38)
            break;
        else if(arr[i]<k){
          r=k-arr[i];
          if(r<3)
          arr[i]=k;
          break;
        }
     }
    }
    for(i=0;i<n;i++)printf("%d\n",arr[i]);
    return 0;
}
