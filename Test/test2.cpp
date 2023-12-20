#include <iostream>
#include<vector>
using namespace std;
void solve(int start,int end,int gap,vector<int>&ans)
{
    if(start>end)
    {
        return;
    }
    ans.push_back(start);
    solve(start+gap,end,gap,ans);
    
}
int main()
{
    int start,end,gap;
    cout<<"Enter starting value"<<endl;
    cin>>start;
    cout<<"Enter ending value"<<endl;
    cin>>end;
    cout<<"Enter gap value"<<endl;
    cin>>gap;
    for(int i=start;i<=end;i+=gap)
    {
        cout<<i<<" ";    
    }
    // vector<int>ans;
    // solve(start,end,gap,ans);
    // for(int i=0;i<ans.size();i++)
    // {
    //     cout<<ans[i]<<" ";
    // }
}
