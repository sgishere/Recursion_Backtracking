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
bool check_palindrome(string s,int i){
    if(i>=s.size()/2)return 1;
    if(s[i]!=s[s.size()-i-1])return 0;
    return check_palindrome(s,i+1);
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    string boi="sexyyxes";
    cout<<check_palindrome(boi,0);
    
return 0;

}