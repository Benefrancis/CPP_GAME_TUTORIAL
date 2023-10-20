#include <iostream>

int main() {

    std::cout << "Samebody gota Die!!\n";


    int a = 100;
    int* aPtr;

    aPtr = &a;

    std::cout << aPtr << std::endl;

    std::cout << &a << std::endl;


    int b = 50;

    aPtr = &b;

    std::cout << aPtr << std::endl;

    std::cout << &b << std::endl;


    int numbers[] = {0,1,2,3,4,5,6,7,8,9};


    std::cout << &b << std::endl;





    system("pause");

}