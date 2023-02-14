//-------------------------Recursion on subsequence-------------------------//

#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

void subsequence(int a[],int n,vector<int> output,int index)
{
    vector<vector<int>> ans;
    if(index>=n)
    {
        ans.push_back(output);
         for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j<ans[i].size();j++)
            {
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    //Exclude
    subsequence(a,n,output,index+1);
    //Include
    output.push_back(a[index]);
    subsequence(a,n,output,index+1);
    output.pop_back(); //Backtrack - Trial Room analogy
}

int main()
{
    dfile();
    int n;
    cin>>n;
    int a[10000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int> output;
    subsequence(a,n,output,0);
    return 0;
}

//Time Complexity - O(N*2^N);
//Space Complexity - O(N);