#include<iostream>
using namespace std; 

void printHollowPyramid(int n){
    for(int i=0;i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int k=0; k<i+1; k++){
            if(i==0 || k==0 || k==i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void printInvertedHollowPyramid(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int k=0; k<n-i; k++){
            if(i==n-1 || k==0 || k==n-i-1){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    printHollowPyramid(n);
    printInvertedHollowPyramid(n);
    return 0;
}