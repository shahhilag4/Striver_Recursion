//-------------------------Printing Subsequence with sum equal to K-------------------------//

#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

void subsequence(int a[],int n,int index,vector<int> output,int sum,int k)
{
    if(index>=n)
    {
        if(sum==k)
        {
            for(int i=0;i<output.size();i++)
            {
                cout<<output[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    //Exclude
    subsequence(a,n,index+1,output,sum,k);
    //Include
    output.push_back(a[index]);
    sum+=a[index];
    subsequence(a,n,index+1,output,sum,k);
    sum-=a[index];
    output.pop_back();
}

int main()
{
    dfile();
    int n,k;
    cin>>n>>k;
    int a[10000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int> output;
    subsequence(a,n,0,output,0,k);
    return 0;
}

//Time Complexity - O(N*2^N);
//Space Complexity - O(N);