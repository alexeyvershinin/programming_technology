#include <iostream>
#include <stdexcept>

double divide(int num) {
    if (num == 0) {
        throw std::invalid_argument("Division by zero");
    }
    return 1024.0 / num;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    try {
        double result = divide(num);
        std::cout << "Result: " << result << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}
