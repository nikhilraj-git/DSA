#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        set<int> s;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            s.insert(x);
        }
        if(s.find(m)!=s.end())
        {
            cout<<"YES"<<"\n";
        }
        else cout<<"NO"<<"\n";
    }

}