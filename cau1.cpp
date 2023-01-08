#include<iostream>
using namespace std;
int x[1000]={0};
int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        int j=i,k=2;
        while(j>1){
            if(j%k==0) {
                x[k]++;
                j/=k;
            }else k++;
        }
    }
    int c;
    for(int i=1000;i>=2;i--){
        if(x[i]>=1) {
            c=i;break;
        }
    }
    for(int i=2;i<1000;i++){
        if(i==c){
            cout<<i<<"^"<<x[i]<<endl; break;
        }
        if(x[i]>=1) cout<<i<<"^"<<x[i]<<" * ";
    }
    return 0;
}