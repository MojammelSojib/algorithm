#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<int>mat[n];
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        if(mat[x].size()>0)
        {
           sort(mat[x].begin(),mat[x].end());
           for(int i=0;i<mat[x].size();i++)
           {
            cout<<mat[x][i]<<" ";
    }
    cout<<endl;
   }
   else
   {
    cout<<"-1"<<endl;
   }
 }

           
    
    return 0;
}