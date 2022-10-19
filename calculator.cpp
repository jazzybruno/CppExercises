//
// Created by djb on 10/19/22.
//

#include <iostream>
using namespace std;

int operatorChoosen(){
    for (int i = 0; i < 5; ++i) {
        string operationName = i == 0 ? "Add" : i == 1 ? "Substract" : i == 2 ? "Multiply" : i == 3 ? "Divide" : "Modulus";
        cout<< i + 1 << " " << operationName << endl;
    };
    cout<<"Enter the number of the operator you want: ";
    int operatorNumber;
    cin>>operatorNumber;

    for (int i = 0; i < 10; --i) {
        if(operatorNumber > 5){
            cout<<"Renter the number of the operator you want: ";
            cin>>operatorNumber;
        }else{
            break;
        }
    }

    return operatorNumber;
}

float computation(int num1 , int num2 ,  int operation){
    if(operation == 1){
        return num1 + num2;
    }else if(operation == 2){
        return num1 - num2;
    }else if(operation == 3){
        return  num1 * num2;
    }else if(operation == 4){
        return num1 / num2;
    }else{
        return num1 % num2;
    }
}

int calculator(){
    for (int i = 0; i < 10; --i) {
        int number1 , number2 , operatorChosed;
        float result;
        operatorChosed = operatorChoosen();

        cout<<"Enter the first number: ";
        cin>>number1;

        cout<<"Enter the second number: ";
        cin>>number2;

        result = computation(number1 , number2 , operatorChosed);
        cout<<result<<endl;


        cout<<"Dou you want to continue ( type yes or no): ";
        string cancel;
        cin>>cancel;

        if(cancel == "no"){
            break;
        }
    }
}