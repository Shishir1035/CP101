///https://codeforces.com/problemset/problem/71/A

#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    char str[110];
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%s",&str);
        if(strlen(str)<=10)
            printf("%s\n",str);
        else
            printf("%c%d%c\n",str[0],strlen(str)-2,str[strlen(str)-1]);
    }
}
