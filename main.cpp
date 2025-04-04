#include <iostream>

int FizzBuzz(int input) {
    if (input % 3 == 0) {
        std::cout << "Fizz";
    }
    if (input % 5 == 0) {
        std::cout << "Buzz" << std::endl;
    }
    return input;
}


int main() {


    int input;

    std::cin >> input;


    if (input % 5 == 0) {
        std::cout << "Buzz" << std::endl;
    }
    /*if (input % 3 && input % 5) {
        std::cout << "FizzBuzz" << std::endl;
    }*/

    return 0;
}
