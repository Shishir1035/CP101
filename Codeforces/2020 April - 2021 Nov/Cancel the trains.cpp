#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main () 
{  
  int t,arr1[105],arr2[105];
  cin>>t;
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < n; ++i)
    {
      int a;
      cin>>a;
      arr1[i]=a;
    }
    for (int i = 0; i < m; ++i)
    {
      int a;
      cin>>a;
      arr2[i]=a;
    }

    vector<int> v(105); 
    vector<int>::iterator it;

    sort (arr1,arr1+n);  
    sort (arr2,arr2+m);

    it=set_intersection (arr1, arr1+n, arr2, arr2+m, v.begin());
    v.resize(it-v.begin());
    cout <<v.size()<<endl;
  }
}