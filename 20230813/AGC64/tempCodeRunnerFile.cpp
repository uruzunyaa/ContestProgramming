#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    vector<int> a;
    cin>>n;
    for(int i=n;i>0;i=i-2){
        if(i==n){
            cout<<i;
        }else{
            cout<<" "<<i;
        }
        
        for(int j=0;j<i-1;j++){
            cout<<" "<<i-1<<" "<<i;
        }
    }
    return 0;
    
}