//-------------------------Printing any Subsequence with sum equal to K-------------------------//

#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

bool subsequence(int a[],int n,int index,vector<int> output,int sum,int k)
{
    //If you need the same length of ans as array you implement a check
    if(index>=n)
    {
        if(sum==k)
        {
            for(int i=0;i<output.size();i++)
            {
                cout<<output[i]<<" ";
            }
            cout<<endl;
            return true;
        }
        return false;
    }
    //Exclude
    if(subsequence(a,n,index+1,output,sum,k)==true) return true;
    //Include
    output.push_back(a[index]);
    sum+=a[index];
    if(subsequence(a,n,index+1,output,sum,k)==true) return true;
    sum-=a[index];
    output.pop_back();
    return false;
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