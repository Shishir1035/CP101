///https://codeforces.com/problemset/problem/705/A
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i=0;
    char s1[100]="I hate that ",s2[100]="I love that ";
    char s3[100]="I hate it",s4[100]="I love it";
    cin>>n;
    if(n==1)
        cout<<s3<<endl;
    else if(n%2==0)
    {
        while(i<n-1)
        {
            if(i%2==0)
            {
                cout<<s1;
                i++;
                continue;
            }
            else if(i%2==1)
            {
                cout<<s2;
                i++;
                continue;
            }
        }
        cout<<s4<<endl;
    }
    else if(n%2==1)
    {
        while(i<n-1)
        {
            if(i%2==0)
            {
                cout<<s1;
                i++;
                continue;
            }
            else if(i%2==1)
            {
                cout<<s2;
                i++;
                continue;
            }
        }
        cout<<s3<<endl;
    }
}
