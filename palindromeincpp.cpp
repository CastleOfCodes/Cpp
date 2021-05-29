#include<iostream>
#include<conio.h>
#include<string.h>
#include<algorithm>
using namespace std;

void palindrom(char s[])
{
    string str(s);
    reverse(str.begin(), str.end());

    string result = (str == s) ? "Palindrome" : "Not Palindrome";
    cout<<result;
}

int main()
{
    char s[20];
    gets(s);
    palindrom(s);

    return 0;
}
