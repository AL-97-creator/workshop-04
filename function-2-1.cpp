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

void hexDigits(int *numbers,int length){
    if (length>0){
        for (int i=0;i<length;i++){
            switch (numbers[i]){
                case 10:
                    std::cout << i << " " << "10 " << "A"<< std::endl;
                    break;
                case 11:
                    std::cout << i << " " << "11 "<< "B" <<std::endl;
                    break;
                case 12:
                    std::cout << i << " " << "12 "<< "C"<< std::endl;
                    break;
                case 13:
                    std::cout << i << " " << "13 "<< "D"<< std::endl;
                    break;
                case 14:
                    std::cout << i << " " << "14 "<< "E"<< std::endl;
                    break;
                case 15:
                    std::cout << i << " " << "15 " <<"F"<< std::endl;
                    break;
                default:
                    std::cout << i << " " << numbers[i] << " " << numbers[i]<< std::endl;
                    break;
            }
        }
    }
}
