//-------------------------Print 1 to N without using "+"-------------------------//

#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

void print(int cnt,int n)
{
    //Base Case
    if(cnt==0)
    {
        return;
    }
    print(cnt-1,n);
    cout<<cnt<<endl;
}

int main()
{
    dfile();
    int n;
    cin>>n;
    print(n,n);
    return 0;
}

//Time Complexity - O(N);
//Space Complexity - O(N);