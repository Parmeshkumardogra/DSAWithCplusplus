#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={0,1,0,1};
    vector<int> flippedArray(4);
    for(int i = 0; i< arr.size(); i++){
        if(arr[i]==0){
            flippedArray[i]=1;
        }else{
            flippedArray[i]=0;
        }
    }

    vector<int> complimentArr(5,0);
    int carry =1;
    for(int i=arr.size()-1;i>=0; i--){
        int sum = flippedArray[i] + carry;
        int value = sum %2;
        carry = sum /2;
        complimentArr[i+1]=value;
    }
    if(carry == 1){
        complimentArr[0]=1;
    }
    for(int i =0; i<complimentArr.size(); i++){
        cout<<"complement array "<<complimentArr[i]<<endl;
    }
    return 0;
}