#include<iostream>
using namespace std;

void printFullPyramid(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int k=0; k<i+1; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void printInvertedFullPyramid(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int k=0; k<n-i; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    printFullPyramid(n);
    printInvertedFullPyramid(n);
    return 0;
}