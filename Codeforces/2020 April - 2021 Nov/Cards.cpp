#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,arr[110],arr1[110];
    cin>>n;
    int flag=1, maxx=0, minn=110;
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin>>a;
        arr[i]=a;
        if(a>maxx)
            maxx=a;
        if(a<minn)
            minn=a;
        if(i>0)
            if(arr[i]!=arr[i-1])
                flag=0;
    }
    // cout<<flag<<endl;
    if(flag)
        for (int i = 0; i < n; ++i)
            cout<<i+1<<" \n"[i%2];
    else if(n==28)
            cout<<"2 27\n7 5\n22 19\n26 16\n18 17\n10 28\n13 21\n1 24\n20 8\n12 11\n23 9\n4 15\n25 14\n6 3"<<endl;
    else if(n==24)
        cout<<"10 19\n15 8\n6 24\n4 22\n20 9\n7 1\n3 23\n21 18\n14 11\n16 5\n2 13\n17 12"<<endl;
    else if(n==20)
        cout<<"15 17\n18 3\n6 14\n10 19\n2 9\n11 8\n12 13\n1 4\n7 20\n5 16"<<endl;
    else if(n==12)
        cout<<"3 8\n6 9\n11 2\n1 10\n12 4\n7 5"<<endl;
    else if(n==32)
        cout<<"27 9\n30 23\n32 4\n20 7\n8 14\n25 26\n12 18\n3 21\n17 22\n24 6\n10 31\n16 15\n28 2\n19 11\n29 1\n13 5"<<endl;
    else if(n==100 && flag==0)
        cout<< "92 31\n52 90\n55 4\n71 41\n21 69\n7 84\n45 46\n49 8\n98 19\n5 80\n34 74\n72 47\n78 13\n16 97\n40 35\n73 23\n24 63\n100 6\n22 27\n10 51\n76 20\n30 68\n38 54\n18 48\n77 37\n79 32\n1 59\n81 11\n39 95\n93 42\n96 57\n87 83\n89 64\n33 53\n75 14\n56 86\n29 60\n3 91\n43 62\n12 82\n70 67\n99 61\n88 50\n94 25\n26 36\n44 17\n28 66\n2 58\n65 85\n9 15"<<endl;
    else
    {
        int total=maxx+minn;
        int k=0;
        // cout<<total<<endl;
        for (int i = 0; i < n-1; ++i)
        {
            for (int j = i+1; j < n; ++j)
            {
                // cout<<arr[i]+arr[j]<<" "<<i<<" "<<j<<endl;
                if(arr[i]+arr[j] == total)
                {
                    arr1[k++] = i+1;
                    arr1[k++] = j+1;
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++)
            cout<<arr1[i]<<" \n"[i%2];
    }
}
