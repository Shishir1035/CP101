///https://codeforces.com/problemset/problem/266/A
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,cot=0,i,j;
    char s[55];
    cin>>n;
    cin>>s;
    for(i=0;i<strlen(s)-1;i++)
    {
            if(s[i]==s[i+1])
            {
                cot++;
            }
    }
    cout<<cot<<endl;
}


