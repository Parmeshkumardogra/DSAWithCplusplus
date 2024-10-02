#include<iostream>
using namespace std;
int main(){
    int a=4;
    int b=6;
    
    //bitwise & operand
    cout<<(a&b)<<endl;
    //bitwise | operand
    cout<<(a|b)<<endl;
    //bitwise ~ operand
    cout<<~a<<endl;
    cout<<~(-b)<<endl;
    //bitwise << left shift
    cout<<(a<<2)<<endl;
    //bitwise >> rigth shift
    cout<<(b>>2)<<endl;
    //bitwise ^xor operator
    cout<<(a^a)<<endl;
}