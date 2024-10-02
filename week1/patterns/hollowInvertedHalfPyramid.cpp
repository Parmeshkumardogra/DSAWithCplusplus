#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(i == 0 || i == n-2 || i == n-1 || j == 0 || j == n-i-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;


    /*
    number of rows = 5
    n=5
    r0  5 star
    r1  1 star 2 space 1 star 
    r2  1 star 1 space 1 star 
    r3  2 star 
    r4  1 star 

    col-> 0 1 2 3 4
    r0 -> * * * * *
    r1 -> *     *
    r2 -> *   *
    r3 -> * * 
    r4 -> * 

    */
}