#include <iostream>

void FizzBuzz(int input) {
    if (input % 3 == 0) {
        std::cout << "Fizz";
    }
    if (input % 5 == 0) {
        std::cout << "Buzz" << std::endl;
    }
}


int main() {

    std::cout << "Gib mir eine Nummer und ich lass es Fizzen oder Buzzen, vielleicht sogar beides<3" << std::endl;
    int input;

    std::cin >> input;


    if (input % 5 == 0) {
        std::cout << "Buzz" << std::endl;
    }

    return 0;
}
