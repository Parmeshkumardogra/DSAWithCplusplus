#include<iostream>
using namespace std;
int main(){
    //numericHalfPyramid
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<j+1;
        }
        cout<<endl;
    }
    return 0;
}