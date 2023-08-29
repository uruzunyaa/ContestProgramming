#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x,y,z[n],cost[n];
    int sumZ=0;
    for(int i=0;i<n;i++){
        cin>>x>>y>>z[i];
        if(x<y){
            cost[i]=(y+1-x)/2;
        }else{
            cost[i]=0;
        }
        sumZ+=z[i];

    }
    sumZ++;
    long long memo[n+1][sumZ];

    //配列初期化
    for(int i=0;i<=n;i++){
        memo[i][0]=0;
        for(int j=1;j<sumZ;j++){
            memo[i][j]=-1;
        }
    }
    
    //動的計画法
    for(int i=0;i<n;i++){
        for(int j=0;j<sumZ;j++){
            memo[i+1][j]=memo[i][j];
        }
        for(int j=0;j<=sumZ/2;j++){
            if(memo[i][j]!=-1){
                memo[i+1][j]=memo[i][j];
                if((memo[i][j+z[i]]>(memo[i][j]+cost[i]))||memo[i][j+z[i]]==-1) memo[i+1][j+z[i]]=memo[i][j]+cost[i];
            }
        }
        //各最適解の候補を書いておく
    }
    long long min =-1;
    for(int i=sumZ/2;i<sumZ;i++){
        if((memo[n][i]!=-1)&&(memo[n][i]<min||min==-1)) min=memo[n][i];
    }
    cout<<min;
    return 0;
}