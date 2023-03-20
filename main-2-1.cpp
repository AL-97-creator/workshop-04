#include <iostream>
extern int *readNumbers();
extern void hexDigits(int *numbers,int length);

int main(){
    int *address=readNumbers();
    hexDigits(address,10);
    delete[] address;
}