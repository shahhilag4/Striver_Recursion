//-------------------------Combination Sum-------------------------//
//Problem Link - https://leetcode.com/problems/combination-sum/

#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

void solve(int index,int target,vector<int>& candidates,vector<vector<int>>& ans,vector<int>& output)
{
    if(index>=candidates.size())
    {
        if(target==0) ans.push_back(output);
        return;
    }
    if(candidates[index]<=target)
    {
        output.push_back(candidates[index]);
        solve(index,target-candidates[index],candidates,ans,output);
        output.pop_back();
    }
    solve(index+1,target,candidates,ans,output);
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> output;
    solve(0,target,candidates,ans,output);
    return ans;
}

int main()
{
    dfile();
    int n,target;
    cin>>n>>target;
    vector<int> candidates;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        candidates.push_back(temp);
    }
    vector<vector<int>> ans=combinationSum(candidates,target);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//Time Complexity - O(K*2^T); //K=time complexity to put in time complexity and 2^T for 2 options
//Space Complexity - O(K*x); //K=average length x=number of combinations //Hypothtical 