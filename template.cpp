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
//loop(ループ変数、初期値、最終ループ値)
#define loop(i,m,n) for(int i=m;i<=n;i++)
//rep(ループ変数、ループ数)
#define rep(i,n) for(int i=0;i<n;i++)
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

int main(){
    return 0;
}