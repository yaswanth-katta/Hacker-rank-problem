#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char str;
    int i,hash[26]={0};
    while(scanf("%c",&str)==1)
    {
        if(str>=65 && str<=90) 
        {   
           hash[str-65]++;
        }   
        else if(str>=97 && str<=122)
        {
            hash[str-97]++;
        }   
    }  
     for(i=0;i<26;i++)                                                  
     {
        if(hash[i]==0)
            break;
     }
    if(i==26)
        printf("pangram\n");
    else
        printf("not pangram\n");
       return 0;

}
