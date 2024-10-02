#include<iostream>
using namespace std;
int main(){
    //print holllow rectangle
    int length,width;
    cout<<"enter the length"<<endl;
    cin>>length;
    cout<<"enter the width"<<endl;
    cin>>width;
    for(int i=0; i<length; i++){
        for(int j=0;j<width; j++){
            if(i==0 || i==length-1 || j==0 || j==width-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}