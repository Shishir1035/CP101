///https://codeforces.com/problemset/problem/158/A
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int n,a[110],yes=0,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>i)yes++;
    }
    cout<<yes<<endl;
}
