#include<iostream>
using namespace std;

int main(){
    int a=10;
    int b =20;
    cout<<"priting before swap as a = "<<a<<" & b = "<<b<<endl;
    int temp=a;
    a=b;
    b=temp;
    cout<<"printing after swap as a = "<<a<<" & b = "<<b;
    return 0;
}