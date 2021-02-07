                                                          /* PROBLEM STATEMENT*/
There will be two arrays of integers. Determine all integers that satisfy the following two conditions:

The elements of the first array are all factors of the integer being considered
The integer being considered is a factor of all elements of the second array
These numbers are referred to as being between the two arrays. Determine how many such numbers exist.

Example
a=[2,6]
b=[24,36]

There are two numbers between the arrays: 6 and 12.
Then  Return 2 .

Function Description

Complete the getTotalX function in the editor below. It should return the number of integers that are betwen the sets.

getTotalX has the following parameter(s):

int a[n]: an array of integers
int b[m]: an array of integers
Returns

int: the number of integers that are between the sets
Input Format

The first line contains two space-separated integers,  and , the number of elements in arrays  and .
The second line contains  distinct space-separated integers  where .
The third line contains  distinct space-separated integers  where .

Constraints
1<=n,m<=10
1<=a[i]<=100
1<=b[j]<=100

Sample Input

2 3
2 4
16 32 96
Sample Output

3
Explanation

2 and 4 divide evenly into 4, 8, 12 and 16.
4, 8 and 16 divide evenly into 16, 32, 96.

4, 8 and 16 are the only three numbers for which each element of a is a factor and each is a factor of all elements of b.

                           /*SOLution for the problem*/
                           
 #include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n],b[m];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    int count=0;
    //finding the factors
    for(int k=1;k<=100;k++){
        int flag=1;
        for(int i=0;i<n;i++){  // first conditon
            if(k%a[i]!=0)
                flag=0;
        }
        for(int i=0;i<m;i++){  //second condition
            if(b[i]%k!=0) flag=0;
        }
        if(flag==1) count++; 
    }
    printf("%d",count);

  return 0;
}
