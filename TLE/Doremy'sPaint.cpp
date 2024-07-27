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
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            mp[x]++;
        }
        if(mp.size()>=3)puts("NO");
        else 
        {
            if(abs(mp.begin()->second- mp.rbegin()->second) <=1)puts("YES");
            else puts("NO");

        }
    }
    return 0;
}