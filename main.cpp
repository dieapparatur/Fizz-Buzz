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


    int input;

    std::cin >> input;


    if (input % 5 == 0) {
        std::cout << "Buzz" << std::endl;
    }

    return 0;
}
