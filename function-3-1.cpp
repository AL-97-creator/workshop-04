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



bool equalsArray(int *numbers1,int *numbers2,int length){
    int check=0;
    if (length >0){
        for (int i=0;i<length;i++){
            if (numbers1[i]==numbers2[i]){
                check=check+1;
            }
        }
    }
    if (check == length){
        return true;
    } else {
        return false;
    }
}