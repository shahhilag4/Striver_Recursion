//-------------------------Print Name N times-------------------------//

#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

void print(int cnt,int n)
{

    if(cnt==n) return;
    cout<<"Hilag"<<endl;
    print(cnt+1,n);
}

int main()
{
    dfile();
    int n;
    cin>>n;
    print(0,n);
    return 0;
}

//Time Complexity - O(N);
//Space Complexity - O(N);