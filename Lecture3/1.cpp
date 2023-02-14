//-------------------------Sum of numbers from 1 to N -Parameter way-------------------------//

#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

void summation(int n,int sum)
{
    if(n<1) 
    {
        cout<<sum<<endl;
        return;
    }
    summation(n-1,sum+n);
}

int main()
{
    dfile();
    int n;
    cin>>n;
    summation(n,0);
    return 0;
}

//Time Complexity - O(N);
//Space Complexity - O(N);