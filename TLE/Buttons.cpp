#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a == b)
    {
        if(c%2 == 0)
        {
            puts("Second");
        }
        else 
        {
            puts("First");
        }
    }
    else if(a+c > b+c)
    {
        puts("First");
    }
    else{
        puts("Second");
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}