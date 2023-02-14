//-------------------------Check Palindrome-------------------------//

#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

bool checkPalindrome(int a[],int n,int i,int j)
{
    if(i>=j) return true;
    if(a[i]!=a[j]) return false;
    return checkPalindrome(a,n,i+1,j-1);
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
    cout<<checkPalindrome(a,n,0,n-1)<<endl;
    return 0;
}

//Time Complexity - O(N);
//Space Complexity - O(N);