#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<char> arr(n);for(auto &x:arr) cin>>x;
        int temp=0,count=0;
        for(auto x:arr)
        {
            if(x == '#')
            {
                temp=0;
            }
            else if(x =='.')
            {
                count++;
                temp++;
                if(temp==3)break;
            }
        }
        if(temp ==3)cout<<"2"<<"\n";
        else cout<<count<<"\n";
    }
}