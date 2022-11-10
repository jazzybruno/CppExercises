//
// Created by djb on 11/4/22.
//

#include <iostream>
using namespace std;

void maxFinder(int numbers[10] ,int length){
   int max = numbers[0];

    for (int i = 0; i < length; ++i) {
        if(max < numbers[i]){
            max = numbers[i];
        }else{
            continue;
        }
    }
//    cout<<max;
    cout<<"The maximum number is: ";
    cout<<max;
}

int maxFinding(){
    int number[10] = { 12,17,6 , 4 , 9 , 3, 28 , 52 , 11 , 41};
    maxFinder(number , 10);
}