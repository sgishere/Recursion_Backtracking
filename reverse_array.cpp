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
void reverse(int i,int arr[],int N){
    if(i>=N/2)return;
    swap(arr[i],arr[N-i-1]);
    reverse(i+1,arr,N);
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int arr[]={3,4,5,6,7,8};
    reverse(0,arr,6);
    lop(6){
        cout<<arr[i]<<" ";
    }
return 0;

}