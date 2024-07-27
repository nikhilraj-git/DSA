#include<bits/stdc++.h>
using namespace std;
bool isSubstring(string s1,string s2)
{
    if(s2.find(s1) != string ::npos)
    {
        return s2.find(s1);
    }
    return -1;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        string x,s;
        cin>>x>>s;
        int ans=0;
        if(isSubstring(s,x)!=-1)
        {
            cout<<ans<<"\n";
            return 0;
        }
        bool flag =false;
        do{
            ans++;
            x+=x;
            if(isSubstring(s,x) !=-1)
            {
                flag =true;
                break;
            }
        }while(x.size() <= s.size()+m);
        if(flag)
        {
            cout<<ans<<"\n";
        }else cout<<-1<<"\n";

    }
}