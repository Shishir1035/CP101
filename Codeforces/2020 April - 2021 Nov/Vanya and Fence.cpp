///https://codeforces.com/problemset/problem/677/A
#include<iostream>
using namespace std;
int main()
{
    int n,h,a;
    cin>>n>>h;
    int wid=0;
    while(n--)
    {
        cin>>a;
        if(a>h)
            wid+=2;
        else
            wid++;
    }
    cout<<wid<<endl;
}
