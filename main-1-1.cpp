#include <iostream>
extern int *readNumbers();
extern void printNumbers(int *numbers,int length);

int main(){
    int *address=readNumbers();
    printNumbers(address,10);
}