///https://codeforces.com/problemset/problem/231/A
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int n,a,b,c,yes=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        if((a==1&&b==1)||(a==1&&c==1)||(b==1&&c==1))yes++;
    }
    cout<<yes<<endl;
}
