#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        if(i && arr.back() > x)arr.push_back(1);
        arr.push_back(x);
    }
    cout<<arr.size()<<"\n";
    for(int el:arr)cout<<el<<" ";
    cout<<"\n";

}
int32_t main()
{
    
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}