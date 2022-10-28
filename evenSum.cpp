//
// Created by djb on 10/19/22.
//

#include <iostream>
using namespace std;

int sumEven(){
    int sum = 0;

    for (int i = 0; i <=100; ++i) {
        if(i%2 == 0){
            sum += i;
        }else{
            continue;
        }
    }
   cout<<sum;
}

int productOdd(){
    int product = 1;
    for (int i = 1; i <= 20; ++i) {
        if(i%2== 1){
            product *= i;
        }else{
            continue;
        }

    }
    cout<<product;
}

int productPrime(){
    int product = 1;
    for (int i = 1; i <= 100; ++i) {
         int flag = 0;
        for (int j = 1; j <= i; ++j) {
            if(i % j == 0){
                flag++;
            }else{
                continue;
            }
        }
        if(flag <= 2){
            product *= i;
            continue;
        }else{
            continue;
        }
    }


    cout<<product;
}

int summerProduct(){
    sumEven();
     cout<< "" <<endl;
     productOdd();
    cout<< "" <<endl;
     productPrime();
}