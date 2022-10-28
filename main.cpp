#include <iostream>
using namespace std;

int insertIntoArray(int numbers[] , int item , int position , int length){
    int j = length - 1;
    while(j >= position){
        numbers[j + 1] = numbers[j];
        j = j - 1;
    }
    numbers[position] = item;
}

int counter(int number[]){
    int count = 0;
    int length = sizeof(number) / sizeof(int);
    cout<<"The length is: " <<length;
//    for (int i = 0; i < length ; ++i) {
//        count = count + 1;
//    }

    return count;

}

int arrays(){
    int number[8] = {1 , 2, 3,4,5,6,7,8};
    int length = sizeof(number) / sizeof(int);
    int item = 20;
    int position = 8;
    insertIntoArray(number , item , position , length);
    cout<<length <<endl;


    int length3 = counter(number);
    cout<<length3 <<endl;

    for (int i = 0; i <=8; ++i) {
        cout<<number[i] <<endl;
    }
}
