#include <bits/stdc++.h>
#define nl '\n'
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;


int main()
{
 fast();
    int n;cin>>n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }

    //find prefix sum
    int prefix_sum[n];
    prefix_sum[0] = ar[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i-1]+ar[i];
    }

    //find equilibirium index
    for(int i=1;i<n;i++) //o(n)
    {
       if(prefix_sum[i-1] == prefix_sum[n-1]-prefix_sum[i]){
        cout<<i<<nl;
        break;
       }
    }
    
    

    return 0;
}
