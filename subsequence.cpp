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
// add call remove call
using namespace std;
void print_subsequences(int arr[],vector<int>v,int i,int N){
    if(i==N){
        if(v.empty()){
            cout<<"{}";
            return;
        }
        for(auto it:v){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    v.pb(arr[i]);
    print_subsequences(arr,v,i+1,N);
    v.pop_back();
    print_subsequences(arr,v,i+1,N);
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int arr[]={0,1,2};
    vin v;
    print_subsequences(arr,v,0,3);
return 0;

}