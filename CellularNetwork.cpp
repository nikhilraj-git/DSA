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

// The question is solved by observing that we have to find the maximum distance of a city 
// from a tower which can provide network in the city . From the first city we calculate that which
//  tower is going to provide network in that city.For each possible city we chose the closest
// tower. Througout this process we keep an answer to store the maximum distance found between
// city and tower