#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(v) sort(v.begin(),v.end())
#define desort(v) sort(v.begin(),v.end(),greater<int>())
#define MOD 1000000007
#define double long double
#define F first
#define S second
#define pb push_back
#define print(a) for(auto i:a)cout << i << " "; cout << endl;
#define input(a) for(auto &x:a)cin >> x;
#define all(x) x.begin(),x.end()
#define FOR(i,a,n) for(int i=a;i< n;i++)
#define FORN(i,a,n) for(int i=0;i<=n;i++)
#define mp make_pair
#define pb push_back
vector<bool> isprime;
void sieve(int n)
{
    isprime.resize(n+2,true);
    for (int p=2; p*p<=n+1; p++)
        if (isprime[p] == true)
            for (int i=p*2; i<=n+1; i += p)
                isprime[i] = false;
}
int lcm(int a, int b) {
    return (a * b) / __gcd(a, b);
}
int binpow(int a,int b){int ans=1;while(b>0){if(b&1)ans=ans*a;a*=a;b>>=1;}return ans;}
bool checkprime(ll a)
{
    if(a<2) return false;
    else if(a==2) return true;
    else if(a%2==0) return false;
    else{
        for(int i=3;i*i<=a;i+=2){
            if(a%i==0) return false;
        }
    }
    return true;
}
void go(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
void solve(){	
	
}
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
	int _=1;
	cin >> _;
	while(_--){
		solve();
	}
}
