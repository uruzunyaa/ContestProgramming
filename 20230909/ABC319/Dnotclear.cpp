#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
using namespace std;

//loop(ループ変数、初期値、最終ループ値)
#define loop(i,m,n) for(int i=m;i<=n;i++)

//rep(ループ変数、ループ数)
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n,m;
    cin>>n>>m;
    vector <long long> l(n);
    vector <long long> sum(n);
    cin>>l[0];
    sum[0]=l[0]+1;
    loop(i,1,n-1){
        cin>>l[i];
        sum[i]=sum[i-1]+l[i]+1;
    }

    long long ave = sum[n-1]/m;

    long long max=0;
    //iが行数
    rep(i,m){
        auto it = lower_bound(sum.begin(), sum.end(), ave*i);
        if(*it-(ave*i)>max){
            max=(*it-(ave*i))/(i+1);
        }
    }
    cout<<ave+max-1;
    return 0;
}