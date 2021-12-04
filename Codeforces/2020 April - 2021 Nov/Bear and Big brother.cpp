///https://codeforces.com/problemset/problem/791/A
#include<iostream>
using namespace std;
int main()
{
    int a,b,t=1;
    cin>>a>>b;
    while(3*a*t<=2*b*t)
    {
        t++;
        a=3*a;
        b=2*b;
    }
    cout<<t<<endl;
}


