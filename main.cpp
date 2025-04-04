#include <iostream>

int main() {


    int input;

    std::cin >> input;

    if (input % 3) {
        std::cout << "Fizz" << std::endl;
    }
    if (input % 5) {
        std::cout << "Buzz" << std::endl;
    }

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
