///https://codeforces.com/problemset/problem/617/A
#include<iostream>
using namespace std;
int main()
{
    long x,step=0;
    cin>>x;
    for(int i=5; i>=1; i--)
    {
        step+=x/i;
        x%=i;
    }
    cout<<step<<endl;
}
