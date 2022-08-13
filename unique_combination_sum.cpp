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
void find_combinations(int arr[],int N,int ind,vector<int>ds,int target){
    if(target==0){
        for(auto it:ds){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
   for(int i=ind;i<N;i++){
    if(arr[i]==arr[i-1] and i>ind)continue;
    if(arr[i]>target)break;
    ds.pb(arr[i]);
    find_combinations(arr,N,ind+1,ds,target-arr[i]);
    ds.pop_back();
   }
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int arr[]={10,1,2,7,6,1,5};
    sort(arr,arr+7);
    vector<int>ds;
    find_combinations(arr,7,0,ds,8);
    
return 0;

}