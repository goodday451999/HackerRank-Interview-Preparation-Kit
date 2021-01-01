/*Sherlock considers a string to be valid if all characters of the string appear the same number of times. It is also valid if he can remove just 1 character at 1 index in the string, and the remaining characters will occur the same number of times. Given a string , determine if it is valid. If so, return YES, otherwise return NO.

Example

S = abc
This is a valid string because frequencies are a = 1, b = 1, c = 1.

S = abcc
This is a valid string because we can remove one c and have 1 of each character in the remaining string.

S = abccc
This string is not valid as we can only remove 1 occurrence of . That leaves character frequencies of a = 1, b = 1, c = 2.

Function Description

Complete the isValid function in the editor below.

isValid has the following parameter(s):

string s: a string
Returns YES OR NO

string: either YES or NO
Input Format

A single string .

Constraints

Each character 
Sample Input 0

aabbcd
Sample Output 0

NO
Explanation 0

Given , we would need to remove two characters, both c and d  aabb or a and b  abcd, to make it valid. We are limited to removing only one character, so  is invalid.

Sample Input 1

aabbccddeefghi
Sample Output 1

NO
Explanation 1

Frequency counts for the letters are as follows:

{'a': 2, 'b': 2, 'c': 2, 'd': 2, 'e': 2, 'f': 1, 'g': 1, 'h': 1, 'i': 1}

There are two ways to make the valid string:

Remove  characters with a frequency of : .
Remove  characters of frequency : .
Neither of these is an option.

Sample Input 2

abcdefghhgfedecba
Sample Output 2

YES
Explanation 2

All characters occur twice except for e which occurs 3 times. We can delete one instance of e to have a valid string.*/

// C++ CODE
