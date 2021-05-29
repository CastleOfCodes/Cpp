/*
Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

Input
Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

Output
If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.

Examples
inputCopy
aaaa
aaaA
outputCopy
0
inputCopy
abs
Abz
outputCopy
-1
inputCopy
abcdefg
AbCdEfF
outputCopy
1
*/
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    string str1,str2;
    cin>>str1>>str2;
   /* for(int i = 0; i < str1.size(); i++)                 ////////////////////////////  
    {
        if(str1[i] >= 'A' && str1[i] <= 'Z')             one method to convert to lowercase
        {
            str1[i] += 32;
        }
        if (str2[i] >= 'A' && str2[i] <= 'Z')
        {
            str2[i] += 32;
        }
*/
        for (int i = 0; i < str1.size(); i++)
        {
            str1[i] = tolower(str1[i]) , str2[i] = tolower(str2[i]);
        }
    
        if(str1> str2)
            cout<<1;
        else if (str1< str2)
            cout<<-1;
        else
            cout<<0;
            
        return 0;
    
}