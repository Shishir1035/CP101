///https://codeforces.com/problemset/problem/112/A
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char s1[110],s2[110];
    scanf("%s",&s1);
    scanf("%s",&s2);
    strupr(s1);
    strupr(s2);
    int i,flag;
    for (i = 0; i < max(strlen(s1),strlen(s2)); i++)
    {
        if (s1[i] > s2[i])
        {
            flag=1;
            break;
        }
        else if (s1[i] < s2[i])
        {
            flag=-1;
            break;
        }
        else
        {
            flag=0;
            continue;
        }
    }
    cout<<flag<<endl;

}
