///https://codeforces.com/problemset/problem/734/A
#include<iostream>
using namespace std;
int main()
{
    long a=0,b=0,n;
    char s[100000];
    cin>>n;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='A')
            a++;
        else if(s[i]=='D')
            b++;
    }
    if(a>b)
        cout<<"Anton"<<endl;
    else if(a<b)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
}
