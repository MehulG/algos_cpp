#include<iostream>
using namespace std;
int main(){

    int num1,num2;
    cout<<"Enter the numbers for finding gcd"<<endl;
    cin>>num1>>num2;
    while(num2 != 0){
        int rem = num1%num2;
        int temp = num1;
        num1 = num2;
        num2 = rem;
    }
    cout<<endl<<"The gcd of the numbers is: "<<num1;

    return 0;
}
