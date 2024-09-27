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
    int ans_index;
    int left_sum=0;
    int right_sum=0;
    for (int i = 0; i < n; i++)
    {
        ans_index=i+1;
       for (int j = 0; j < n; j++)
       {
        if(j<ans_index){
            left_sum += ar[j];
        }
        else if (j==ans_index)continue;
        else
        {
            right_sum+=ar[j];
        }
       }
       if(left_sum==right_sum)break;
       else{
        left_sum=0, right_sum=0;
       }
    }
    cout<<ans_index<<nl;
    
    

    return 0;
}
