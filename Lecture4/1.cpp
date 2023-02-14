//-------------------------Reverse an array-------------------------//

#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

void reverseArray(int * a,int n,int i,int j)
{
    if(i>=j)
    {
        return;
    } 
    swap(a[i],a[j]);
    reverseArray(a,n,i+1,j-1);
}

int main()
{
    dfile();
    int n;
    cin>>n;
    int* a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    reverseArray(a,n,0,n-1);
    for(int k=0;k<n;k++)
    {
        cout<<a[k]<<" ";
    }
    cout<<endl;
    return 0;
}

//Time Complexity - O(N);
//Space Complexity - O(N);