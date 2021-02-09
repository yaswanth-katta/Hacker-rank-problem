                  /*problem statement*/

ABCXYZ company has up to  employees.
The company decides to create a unique identification number (UID) for each of its employees.
The company has assigned you the task of validating all the randomly generated UIDs.

A valid UID must follow the rules below:

It must contain at least  uppercase English alphabet characters.
It must contain at least  digits ( - ).
It should only contain alphanumeric characters ( - ,  -  &  - ).
No character should repeat.
There must be exactly  characters in a valid UID.
Input Format

The first line contains an integer , the number of test cases.
The next  lines contains an employee's UID.

Output Format

For each test case, print 'Valid' if the UID is valid. Otherwise, print 'Invalid', on separate lines. Do not print the quotation marks.

Sample Input

2
B1CD102354
B1CDEF2354
Sample Output

Invalid
Valid
Explanation

B1CD102354:  is repeating → Invalid
B1CDEF2354: Valid

             /*Solution for the above problem*/
import re
for _ in range(int(input())):
    uid = input()
    uid = "".join(sorted(uid))
    if (re.search(r"[A-Z]{2}",uid) and #2 uppercase alphabets
        re.search(r"\d{3}",uid) and #3+ digits
        not re.search(r"[^A-Za-z0-9]",uid) and #no nonalphanumeric
        not re.search(r"(\w)\1",uid) and #no repetition
        len(uid) == 10): #10 characters long
        print("Valid")
    else:
        print("Invalid")
