//-------------------------Factorial of N-------------------------//

#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

int factorial(int n)
{
    //Base case
    if(n==0) return 1;
    return n*factorial(n-1);
}

int main()
{
    dfile();
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}

//Time Complexity - O(N);
//Space Complexity - O(N);