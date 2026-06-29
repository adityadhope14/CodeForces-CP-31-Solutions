/*
===============================================================================
                            COMPETITIVE PROGRAMMING TEMPLATE
===============================================================================

Author : Aditya Dhope

Current Goals
-------------
** Codeforces : Reach Specialist (1400+ Rating)
** Solve 2500+ DSA & CP Problems
** qualify for ICPC Regionals

"Small improvements every day lead to extraordinary results."

"Consistency beats intensity."

"When others stop after solving one problem,
I solve one more."

"Dream → Practice → Contest → Upsolve → Repeat."

Reminder
--------
✔ Think before coding.
✔ Handle edge cases.
✔ Dry run sample test cases.
✔ Watch for overflow.
✔ Keep code clean.
✔ Never give up after one WA.

===============================================================================
*/

#include <bits/stdc++.h>
using namespace std;

// -------------------- Macros --------------------
#define ll long long
#define ld long double
#define ull unsigned long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define ff first
#define ss second

// -------------------- Constants --------------------
const int MOD = 1e9 + 7;
const ll INF = 1e18;

// -------------------- Fast I/O --------------------
void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

// -------------------- Debug (Disabled on Online Judge) --------------------
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif

// -------------------- Utility Functions --------------------

// Greatest Common Divisor
ll gcd(ll a, ll b) {
    return (b == 0) ? a : gcd(b, a % b);
}

// Least Common Multiple
ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

// Binary Exponentiation
ll power(ll a, ll b) {
    ll ans = 1;

    while (b) {
        if (b & 1)
            ans *= a;

        a *= a;
        b >>= 1;
    }

    return ans;
}

// Modular Binary Exponentiation
ll modPower(ll a, ll b, ll mod = MOD) {
    ll ans = 1;
    a %= mod;

    while (b) {
        if (b & 1)
            ans = (ans * a) % mod;

        a = (a * a) % mod;
        b >>= 1;
    }

    return ans;
}

// -------------------- Solve Function --------------------
void solve() {
    string s ;
    cin>>s;
    int cnt_ab = 0 ;
    int cnt_ba = 0 ;
    for(int i = 0 ; i<s.size()-1 ; i++){
        if(s[i]== 'a' && s[i+1] == 'b'){
            cnt_ab += 1;
        }
        else if(s[i]== 'b' && s[i+1] == 'a'){
            cnt_ba+=1;
        }
        else{
            cnt_ab+=0;
            cnt_ba+=0;
        }
    }
    if(cnt_ab==cnt_ba){
        cout<<s<<endl;
    }
    else{
        s[0] = s[s.size()-1];
        cout<<s<<endl;
    }
}

// -------------------- Main Function --------------------
int main() {
    fastIO();
    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}