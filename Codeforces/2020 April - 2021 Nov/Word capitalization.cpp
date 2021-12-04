///https://codeforces.com/problemset/problem/281/A
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[1010];
    cin>>s;
    char c=toupper(s[0]);
    cout<<c;
    for(int i=1;i<strlen(s);i++)
    {
        cout<<s[i];
    }
    cout<<endl;
}

