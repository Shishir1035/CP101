///https://codeforces.com/problemset/problem/1422/A
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    unsigned long t,a,c,b,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        d=max(max(a,b),c);
lol:
        if(a+b+c>d&&b+c+d>a&&c+d+a>b&&d+a+b>c)
        {
            cout<<d<<endl;
        }
        else
        {
            d--;
            goto lol;
        }
    }
}
