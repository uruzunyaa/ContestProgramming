#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
#include<deque>
#include<iomanip>
#include<tuple>
using namespace std;
#define loop(i,m,n) for(int i=m;i<=n;i++)
#define rep(i,n) for (int i=0;i<n;i++)
#define ll long long
#define inf 100000000000000000

long long power(long long A, long long B) {
    long long result = 1;
    for (long long i = 0; i < B; i++) {
        result *= A;
    }
    return result;
}

int main(){
	ll n,a,b,c;
	cin>>n>>a>>b>>c;
	ll d[n];
	ll dp[n][3];
	rep(i,n){
		cin>>d[i];
		dp[i]=inf;
	}
	
    return 0;
}