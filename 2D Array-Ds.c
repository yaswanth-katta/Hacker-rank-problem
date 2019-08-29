#include<stdio.h>

int main(){

    int ar[10][10],maxsum = -36985247;
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++)scanf("%d",&ar[i][j]);
    }

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(j+2 < 6 && i+2 < 6 ){
                int sum = ar[i][j] + ar[i][j+1] + ar[i][j+2] + ar[i+1][j+1] + ar[i+2][j] + ar[i+2][j+1] + ar[i+2][j+2];
                if(sum > maxsum)maxsum = sum;
            }
        }
    }
    printf("%d",maxsum);
    return 0;
}
