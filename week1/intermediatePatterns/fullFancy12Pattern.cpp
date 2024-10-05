#include<iostream>
using namespace std;

void fullFancy12UpperPattern(int n){
        for(int i=0; i<n; i++){
        int count=0;
        for(int j=0; j<i+1;j++){
            cout<<i+1;
            count++;
            if(count<i+1){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
void fullFancy12LowerPattern(int n){
        for(int i=0; i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<n-i;
            if(j!=n-i-1){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    fullFancy12UpperPattern(n);
    n=n-1;
    fullFancy12LowerPattern(n);
    return 0;
}
