//-------------------------Introduction to Recursion-------------------------//

#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

int cnt=0;
void f()
{
    //Base case
    if(cnt==4) return;
    cnt++;
    cout<<1<<endl;
    f();
}

int main()
{
    dfile();
    f();
    return 0;
}