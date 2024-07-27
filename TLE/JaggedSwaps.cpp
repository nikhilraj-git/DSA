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
        int arr[n];
        for(auto &x:arr)cin>>x;

        sort(arr+1,arr+n);
        if(is_sorted(arr,arr+n))cout<<"YES"<<"\n";
        else cout<<"No"<<"\n";

    }
}