#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input;
    
    std::cout << "Enter the expretion ";
    std::getline(std::cin, input);
    
    std::istringstream func(input);
    int num1, num2;
    char op;

    func >> num1 >> op >> num2;
    int result = 0;

    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                std::cout << "warning: division by zero" << std::endl;
            }
            break;
    }

    std::cout<<result<<std::endl;
    
    return 0;
}