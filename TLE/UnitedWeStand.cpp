#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    vector<int> arr(n);for(auto &x:arr)cin>>x;
    sort(arr.begin(),arr.end());
    if(arr.back()==arr[0])
    {   
        if(arr.back()==arr[0])
        {
            cout<<"-1\n";
        }
    }
    else {
        int it=0;
        while(arr[it]==arr[0])it++;
        cout<<it<<" "<<n-it<<"\n";
        for(int j=0;j<it;j++)cout<<arr[j]<<" ";
        cout<<"\n";
        for(int k=it;k<n;k++)cout<<arr[k]<<" ";
    }
}
int main()
{
    ios_base::sync_with_stdio;
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
    return 0;    
}