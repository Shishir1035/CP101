///https://codeforces.com/problemset/problem/236/A
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int n,cot=0,i,j;
    char s[105],c;
    cin>>s;
    for(i=0; i<strlen(s); i++)
    {
        for(j=i+1; j<strlen(s); j++)
        {
            if(s[i]>s[j])
            {
                c=s[i];
                s[i]=s[j];
                s[j]=c;
            }
        }
    }
    for(i=0; i<strlen(s); i++)
    {
        if(s[i]!=s[i+1])
        {
            cot++;
        }
    }
    if(cot%2==0)cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}


