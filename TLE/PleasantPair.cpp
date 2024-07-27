<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;cin>>t;
  while(t--)
  {
    int n;cin>>n;
    vector<long long> arr(n+1);
    for(int i=1;i<=n;i++)
    {
      cin>>arr[i];
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
      for(int j=arr[i]-i;j<=n;j+=arr[i])
      {
        if(j>=0 && arr[i]*arr[j]== i+j && i<j)
        {
          ans++;
        }
      }
    }
    cout<<ans<<"\n";
  }
}

//The problem states that arr[i]*arr[j] == i+j, which implies that if arr[i] is 8 then (i+j)
//should be a multiple of 8 i.e. arr[i] . By observing this we can say that for every i , j 
//should be equal to arr[i]-i so that (i+j) can be eqaul or a multiple of arr[i].By this 
=======
#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;cin>>t;
  while(t--)
  {
    int n;cin>>n;
    vector<long long> arr(n+1);
    for(int i=1;i<=n;i++)
    {
      cin>>arr[i];
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
      for(int j=arr[i]-i;j<=n;j+=arr[i])
      {
        if(j>=0 && arr[i]*arr[j]== i+j && i<j)
        {
          ans++;
        }
      }
    }
    cout<<ans<<"\n";
  }
}

//The problem states that arr[i]*arr[j] == i+j, which implies that if arr[i] is 8 then (i+j)
//should be a multiple of 8 i.e. arr[i] . By observing this we can say that for every i , j 
//should be equal to arr[i]-i so that (i+j) can be eqaul or a multiple of arr[i].By this 
>>>>>>> aa6e139989bb81f128aec2311f85108a20254e75
//we can reduce the time complexity of this solution