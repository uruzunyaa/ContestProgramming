#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
#include<deque>
#include<iomanip>
#include<tuple>
#include<cmath>
using namespace std;
#define loop(i,m,n) for(int i=m;i<=n;i++)
#define rep(i,n) for (int i=0;i<n;i++)
#define ll long long
#define inf 100000000000000000
//√の値が整数かを調べる
bool isSqrt(ll n) {
	if (n < 0) return false;
	ll sqrtN = static_cast<ll>(sqrt(n));
	return sqrtN * sqrtN == n;
}
//整数同士の累乗の計算をする。
ll power(ll A, ll B) {
	ll result = 1;
	for (ll i = 0; i < B; i++) {
		result *= A;
	}
	return result;
}
vector<ll> makePrime(ll n) {
    vector<ll> factors;
    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }
	for (ll i=3; i*i<=n;i+=2) {
        while (n%i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
	if (n > 2) {
        factors.push_back(n);
    }
    return factors;
}
#define mod 998244353
int main(){
	ll a,b;
	cin>>a>>b;
	vector <ll> p=makePrime(a);
	ll lastb=(b/2)%mod;
	ll tyousei=0;
	if(b%2==1)tyousei=1;

	vector<ll> c;
	//約数の数を数える
	c.push_back(1);
	loop(i,1,p.size()-1){
		if(p[i]==p[i-1])c[c.size()-1]++;
		else c.push_back(1);
	}
	ll ans=1;
	rep(i,c.size()){
		c[i]=c[i]*(b%mod)+1;
		ans*=c[i];
		ans%=mod;
	}
	if(tyousei==0){
		cout<<ans * lastb % mod<<endl;
	}else{
		cout<<((ans * lastb)+(ans/2)) % mod<<endl;
		
	}
	


    return 0;
}