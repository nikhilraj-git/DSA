#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int> arr(n);for(auto &x:arr)cin>>x;
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        ans=min(abs(0-arr[i]),ans);
    }
    cout<<ans<<"\n";
}