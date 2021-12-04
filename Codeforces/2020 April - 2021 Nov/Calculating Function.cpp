                                                                                                                              ///https://codeforces.com/problemset/problem/486/A
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    long long n,sum=0;
    cin>>n;
    if(n%2==0)
    cout<<n/2<<endl;
    else
        cout<<-(n+2)/2<<endl;
}
