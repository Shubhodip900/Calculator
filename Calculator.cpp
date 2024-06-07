#include <iostream>

int main() {
    double num1, num2;
    char operation;
    bool keepGoing = true;

    while (keepGoing) {
        // Display menu and prompt for user input
        std::cout << "Simple Calculator" << std::endl;
        std::cout << "Enter two numbers: ";
        std::cin >> num1 >> num2;

        std::cout << "Enter the operation you want to perform (+, -, *, /): ";
        std::cin >> operation;

        // Perform the chosen operation
        switch (operation) {
            case '+':
                std::cout << "Result: " << num1 + num2 << std::endl;
                break;
            case '-':
                std::cout << "Result: " << num1 - num2 << std::endl;
                break;
            case '*':
                std::cout << "Result: " << num1 * num2 << std::endl;
                break;
            case '/':
                if (num2 != 0) {
                    std::cout << "Result: " << num1 / num2 << std::endl;
                } else {
                    std::cout << "Error: Division by zero is not allowed." << std::endl;
                }
                break;
            default:
                std::cout << "Error: Invalid operation." << std::endl;
                break;
        }

        // Ask if the user wants to perform another calculation
        char choice;
        std::cout << "Do you want to perform another calculation? (y/n): ";
        std::cin >> choice;
        if (choice != 'y' && choice != 'Y') {
            keepGoing = false;
        }
    }

    std::cout << "Thank you for using the calculator. Goodbye!" << std::endl;

    return 0;
}
