///https://codeforces.com/problemset/problem/41/A
#include<stdio.h>
#include<string.h>
int main()
{
    char s[110],t[110];
    scanf("%s",&s);
    scanf("%s",&t);
    if(strcmp(strrev(s),t)==0)
    printf("YES\n");
    else
    printf("NO\n");
}
