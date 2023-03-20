#include <iostream>

int *readNumbers(){
    int array[10];
    for (int i=0;i<10;i++){
        std::cout<<"Insert element "<<i<<": ";
        std::cin>>array[i];
    }
    int *address= new int[10];
    for (int i=0;i<10;i++){
        address[i]=array[i];
    }
    return address;
}



void printNumbers(int *numbers,int length){
    for (int i=0;i<length;i++){
        std::cout << i <<" "<< numbers[i] << std::endl;
    }
}