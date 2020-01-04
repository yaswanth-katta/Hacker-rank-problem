/* MODIFIES KAPREKAR NUMBER PROBLEM */

A modified Kaprekar number is a positive whole number with a special property. If you square it, 
then split the number into two integers and sum those integers, you have the same value you started with.

Consider a positive whole number  with  digits. We square  to arrive at a number that is either  digits long or  digits long. 
Split the string representation of the square into two parts,  and . The right hand part,  must be  digits long. 
The left is the remaining substring. Convert those two substrings back to integers, add them and see if you get .

For example, if ,  then . We split that into two strings and convert them back to integers  and . We test , so this is not a modified Kaprekar number. If , still , and . This gives us , the original .

Note: r may have leading zeros.

Here's an explanation from Wikipedia about the ORIGINAL Kaprekar Number (spot the difference!):

In mathematics, a Kaprekar number for a given base is a non-negative integer, the representation of whose square in that base can be split into two parts that add up to the original number again. For instance, 45 is a Kaprekar number, because 45² = 2025 and 20+25 = 45.

Given two positive integers  and  where  is lower than , write a program to print the modified Kaprekar numbers in the range between  and , inclusive.

Function Description

Complete the kaprekarNumbers function in the editor below. It should print the list of modified Kaprekar numbers in ascending order.

kaprekarNumbers has the following parameter(s):

p: an integer
q: an integer
Input Format

The first line contains the lower integer limit .
The second line contains the upper integer limit .

Note: Your range should be inclusive of the limits.

Constraints


Output Format

Output each modified Kaprekar number in the given range, space-separated on a single line. 
If no modified Kaprekar numbers exist in the given range, print INVALID RANGE.

Sample Input

1
100
Sample Output

1 9 45 55 99

Explanation
1,9 ,45 ,55 ,99 are the Kaprekar Numbers in the given range.

/* HERE IS THE SOLUTION FOR THE PROBLEM */

import java.util.*;
import java.io.*;

class Kaprekar{
    int int1=0,int2=0,range=0;
    void method(int st,int lt){
        try{
        for(int i=st;i<=lt;i++){
            int sqr=i*i,count=0;

            for(int j=1;(sqr/j)>0;j=j*10){  //to check no.of digits in a number
                count++;
            }
            if(count%2!=0){ //if count is odd numeber then add '1' to that count
                count++;
            }
            int iterate=count/2,div=1;

            for(int k=1;k<=iterate;k++){   //to seperate the number into two intgers
                div=div*10;
            }
            int1=sqr/div;
            int temp=int1;
             for(int k=1;k<=iterate;k++){
                temp=temp*10;
            }
            int2=sqr-temp;
            if(i==(int1+int2)){
                System.out.print(i+" ");
                range++;
            }
        }
        if(range==0){
            System.out.println("INVALID RANGE");
        }
      }catch(Exception e){}
    }
}
public class Main{
    public static void main(String args[]){
      try{
        Scanner input=new Scanner(System.in);
        int first=input.nextInt();
        int last=input.nextInt();

        Kaprekar obj=new Kaprekar();
        obj.method(first,last);
      }catch(Exception e){}
    }
} 
