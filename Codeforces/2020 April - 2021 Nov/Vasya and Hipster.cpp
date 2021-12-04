///https://codeforces.com/problemset/problem/581/A?fbclid=IwAR0vXkSwGAw-0Va1WhSG-QaM3SbZRq0L1YO9IcnUolAs5LRTyMWGwDd2OH8#

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<min(a,b)<<" "<<(max(a,b)-min(a,b))/2<<endl;
}
