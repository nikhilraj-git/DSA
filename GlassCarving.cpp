#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);

  cin.tie(NULL);
  
  int w,h,n;
  cin>>w>>h>>n;
  
  set<int> w1;
  set<int> h1;
  w1.insert(w);
  w1.insert(0);
  h1.insert(h);
  h1.insert(0);

  multiset<int> wm,hm;
  wm.insert(w);
  hm.insert(h);
  while(n--)
  {
    char way;
    int pos;
    cin>>way>>pos;

    set<int> :: iterator it,l,r;
    multiset<int> :: iterator mit;
    
    int gap;
    switch(way)
    {
      case 'H':
        r=it=h1.lower_bound(pos);
        it--;
        l=it;
        gap = *r-*l;

        mit=hm.find(gap);
        hm.erase(mit);
        hm.insert(*r-pos);
        hm.insert(pos-*l);
        h1.insert(pos);

        break;
      case 'V':
        r=it=w1.lower_bound(pos);
        it--;
        l=it;
        gap = *r-*l;

        mit = wm.find(gap);
        wm.erase(mit);
        wm.insert(*r-pos);
        wm.insert(pos-*l);
        w1.insert(pos);

        break;
    }
    cout<<static_cast<long long>(*hm.rbegin())*(*wm.rbegin())<<endl;
  }
}