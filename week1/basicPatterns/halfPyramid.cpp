#include<iostream>
using namespace std;
int main(){
    //halfPyramid
    /*how we done actually in that case 
    when coloumn is different for every row we can easily find out the pattern logic in that
    and after finding the pattern we implement the logic
    */
    int rows;
    cout<<"enter the rows"<<endl;
    cin>>rows;
    for(int i=0;i<rows;i++){
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}