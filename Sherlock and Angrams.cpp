/*Two strings are anagrams of each other if the letters of one string can be rearranged to form the other string. Given a string, find the number of pairs of substrings of the string that are anagrams of each other.

For example , the list of all anagrammatic pairs is  at positions  respectively.

Function Description

Complete the function sherlockAndAnagrams in the editor below. It must return an integer that represents the number of anagrammatic pairs of substrings in .

sherlockAndAnagrams has the following parameter(s):

s: a string .
Input Format

The first line contains an integer , the number of queries. 
Each of the next  lines contains a string  to analyze.

Constraints

 
 
String  contains only lowercase letters  ascii[a-z].

Output Format

For each query, return the number of unordered anagrammatic pairs.

Sample Input 0

2
abba
abcd
Sample Output 0

4
0
Explanation 0

The list of all anagrammatic pairs is  and  at positions  and  respectively.

No anagrammatic pairs exist in the second query as no character repeats.

Sample Input 1

2
ifailuhkqq
kkkk
Sample Output 1

3
10
Explanation 1

For the first query, we have anagram pairs  and  at positions  and respectively.

For the second query: 
There are 6 anagrams of the form  at positions  and . 
There are 3 anagrams of the form  at positions  and . 
There is 1 anagram of the form  at position .

Sample Input 2

1
cdcd
Sample Output 2

5
Explanation 2

There are two anagrammatic pairs of length :  and . 
There are three anagrammatic pairs of length :  at positions  respectively.*/

/*HERE IS THE CODE FOR THE ABOVE THE PROBLEM*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int check_anagram(char a[], char b[])
{
   int first[26] = {0}, second[26] = {0}, c = 0;

   while (a[c] != '\0') {
      first[a[c]-'a']++;
      c++;
   }
   c = 0;
   while (b[c] != '\0') {
      second[b[c]-'a']++;
      c++;
   }

   for (c = 0; c < 26; c++) {
      if (first[c] != second[c])
         return 0;
   }

   return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[100];
        char sub1[100] = {0};
        char sub2[100] = {0};
        scanf("%s", s);

        int count = 0;
        for (int len = 1; len < strlen(s); len++) {
            memset(sub1, 0, len);
            for (int i = 0; i < strlen(s) - len; i++) {
                strncpy(sub1, &s[i], len);
                memset(sub2, 0, len);
                for (int j = i + 1; j < strlen(s) - len + 1; j++) {
                    strncpy(sub2, &s[j], len);
                    if (check_anagram(sub1, sub2) == 1) {
                        count++;
                    }  
                }
            }     
        }

        printf("%d\n", count);


}
    return 0;
}
