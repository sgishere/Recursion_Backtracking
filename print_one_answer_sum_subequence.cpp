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
bool sum_subsequence(int arr[],int N,int i,vector<int>&v,int sum,int val){
    if(i==N){
        if(sum==val){
            for(auto it:v)
                cout<<it<<" ";
            cout<<endl;
            return true;
        }
        return false;
    }
    v.pb(arr[i]);
    sum+=arr[i];
    if(sum_subsequence(arr,N,i+1,v,sum,val))return true;
    v.pop_back();
    sum-=arr[i];
    if(sum_subsequence(arr,N,i+1,v,sum,val))return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int arr[]={1,1,2};
    vin v;
    sum_subsequence(arr,3,0,v,0,2);
return 0;

}