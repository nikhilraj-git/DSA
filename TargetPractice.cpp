#include<bits/stdc++.h>
using namespace std;
int score[10][10] = {
    {1,1,1,1,1,1,1,1,1,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,1,1,1,1,1,1,1,1,1}
};
int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    while(t--)
    {
        vector<vector<char>> arr(10,vector<char>(10));
        int ans=0;
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                char x;cin>>x;
                arr[i][j]=x;
                if(x=='X')
                {
                    ans+=score[i][j];
                }
            }
        }
        cout<<ans<<"\n";

    }   
}