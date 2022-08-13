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
void print_rev(int X,int N){
    if(X>N)return;
    print_rev(X+1,N);
    cout<<X<<" ";
}
void print_straight(int N){
    if(N==0)return;
    print_straight(N-1);
    cout<<N<<" ";
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    print_rev(1,4);cout<<endl;
    print_straight(4);
    
return 0;

}