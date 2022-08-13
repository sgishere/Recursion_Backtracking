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
void sum_of_num_parametric(int N,int sum){
    if(N<1){cout<<sum<<endl;
    return;}
    sum_of_num_parametric(N-1,sum+N);
}
void factorial_paramtrised(int N,int ans){
    if(N==0){cout<<ans<<endl;return;}
    factorial_paramtrised(N-1,ans*N);
}
int sum_of_num_functional(int N){
    if(N==0)return 0;
    return N + sum_of_num_functional(N-1);
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    sum_of_num_parametric(5,0);
   int ans= sum_of_num_functional(5);
   cout<<"\n"<<ans<<endl;
   factorial_paramtrised(5,1); 
return 0;

}