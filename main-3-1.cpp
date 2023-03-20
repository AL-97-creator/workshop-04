#include <iostream>
extern bool equalsArray(int *numbers1,int *numbers2,int length);
extern int *readNumbers();
extern int *reverseArray(int *numbers1,int length);

int main(){
    int *numbers1=readNumbers();
    int *numbers2=readNumbers());
    bool answer=equalsArray(numbers1,numbers2,10);
    std::cout << answer << std::endl;
    delete[] numbers1,numbers2;
}