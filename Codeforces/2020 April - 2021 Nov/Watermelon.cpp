///https://codeforces.com/problemset/problem/4/A

#include<iostream>
using namespace std;
int main()
{
    int k,i,j,flag=0;
    cin>>k;
    if(k%2==1||k==2)cout<<"NO"<<endl;
    else
    {
        while(i!=j)
        {
        i=2;
        j=k-i;
        if(i%2==0&&j%2==0)
            {
                flag=1;
                break;
            }
        else
        {
            i++;j--;
        }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}
