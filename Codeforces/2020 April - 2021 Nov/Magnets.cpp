///https://codeforces.com/problemset/problem/344/A
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,con=1,large=0;
    cin>>n;
    char a[n][2];
    int wid=0;
    if(n==1)cout<<1<<endl;
    else
    {

    for(i=0; i<n; i++)
    {
        for(j=0; j<2; j++)
            cin>>a[i][j];
    }
    for(i=0; i<n-1; i++)
    {
        if(a[i][0]==a[i+1][0])
            con++;
        else
        {
            if(large<con)
            {
                large=con;
            }
            con=1;
        }
    }
    cout<<large<<endl;
    }
}
