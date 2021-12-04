/////https://codeforces.com/problemset/problem/1426/A
//
//#include<iostream>
//#include<cmath>
//#include<algorithm>
//using namespace std;
//int main()
//{
//    int t,n,x;
//    cin>>t;
//    while(t--)
//    {
//        cin>>n>>x;
//        if(x==1||x==2)cout<<x<<endl;
//        cout<<ceil((float)(n+2)/x)<<endl;
//    }
//}


#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&x);
        if(n==1||n==2)
            printf("1\n");
        else
        {
            int ans=ceil((float)(n-2)/x);
            printf("%d\n",++ans);
        }
    }
}
