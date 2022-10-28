//
// Created by djb on 10/28/22.
//
#include <iostream>
using namespace std;

int quotient(int num1 , int num2){
    int value = num1 / num2;
    int remainder = num1 % num2;

    cout<<"The quotient between " << num1 << " and " << num2 << " is " << value <<endl;
    cout<<"The remainder between " << num1 << " and " << num2 << " is " << remainder <<endl;
}

int main(){
    cout<<"This will include 2 functions !!!!!" <<endl;
    cout<<""<<endl;
    quotient(1 , 2);

}