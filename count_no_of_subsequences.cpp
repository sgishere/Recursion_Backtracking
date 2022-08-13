#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define ff first
#define ss second

#define lop(n) for (int i = 0; i < n; i++)
#define lopj(n) for (int j = 0; j < n; j++)

#define all(x) x.begin(), x.end()
#define sortd(x) sort(x.rbegin(), x.rend())
#define bitcount(x) __builtin_popcount(x)

#define vin vector <int>
#define vll vector <ll>
#define pll pair <ll, ll>
#define pii pair <int, int>
#define vpll vector <pll>

using namespace std;
int count_sum_subsequences(int arr[],int N,int i,int sum,int val){
    if(i==N){
        if(sum==val)return 1;
       return 0;
    }
    int l=count_sum_subsequences(arr,N,i+1,sum+arr[i],val);
    int r=count_sum_subsequences(arr,N,i+1,sum,val);
    return l+r;
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int arr[]={2,1,1};
   int ans= count_sum_subsequences(arr,3,0,0,2);
   cout<<ans<<endl;
return 0;

}