#include<iostream>
#include<algorithm>
#include<vector>
#include<deque>
#include<string>
#include<map>
#include <iomanip>
using namespace std;
#define loop(i,m,n) for(int i=m;i<=n;i++)
#define rep(i,n) for (int i=0;i<n;i++)
#define ll long long
long long power(long long A, long long B) {
    long long result = 1;
    for (long long i = 0; i < B; i++) {
        result *= A;
    }
    return result;
}


int main(){
	int n,l;
	cin>>n>>l;
	vector<string> s(n);
	rep(i,n){
		cin>>s[i];
	}

	for(int i=n-1;0<i;i--){
		rep(j,i){
			//文字列二つの比較で入れ替え
			rep(k,l){
				if(s[i][k]>s[j][k]){
					break;
				}else if(s[i][k]<s[j][k]){
					swap(s[i],s[j]);
					break;
				}
			}
		}
	}

	rep(i,n){
		cout<<s[i];
	}
	
    return 0;
}