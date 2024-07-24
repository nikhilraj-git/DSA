#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;cin>>n>>m;
  vector<int> city(n);for(auto &x:city)cin>>x;
  vector<int> tow(m);for(auto &y:tow)cin>>y;
  
  int i=0,j=0,ans=-1;
  while(i<n)
  {
    while(j+1<m)
    {
      int dist1 = abs(city[i]-tow[j]);
      int dist2 = abs(city[i]-tow[j+1]);
      if(dist1>=dist2)j++;
      else break;
    }
    ans=max(ans,abs(city[i]-tow[j]));
    i++;
  }
  cout<<ans<<" \n";
  return (0);
}
