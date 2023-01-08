#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int max=0;
    int k=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='0'&&s[i]<='9'){
            if(s[i+1]>='0'&&s[i+1]<='9'){
                k=k*10+s[i]-'0';
            }else {
                k=k*10+s[i]-'0';
                if(k>max) max=k;
                
            }
        }
        
    }
    cout<<max<<fixed<<setprecision(1)<<endl;
    return 0;
}