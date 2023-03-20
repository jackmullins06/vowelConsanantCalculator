#include <iostream>


std::string promptForInput() {
    std::string input;

    while (true) {
        std::cout << "Please enter a string: ";
        std::getline(std::cin, input);

        // Check if input is empty or contains non-alphabetic characters
        bool invalidInput = input.empty();

        for(int i = 0; i < input.size(); i++) {
            if(!isalpha(input[i])) {
                invalidInput = true;
                break;
            }
        }

        if (!invalidInput) {
            break;
        }

        std::cout << "Invalid input. Please enter a string containing only alphabetic characters.\n";
    }

    return input;
}

void countVowels(std::string input) {
    int vowels = 0, consenants = 0;

    for(int i = 0; i < input.size(); i++) {
        if(input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u')  {
            vowels++;
        } else if(isalpha(input[i])) {
            consenants++;
        }
    }

    std::cout << "Number of vowels: " << vowels << std::endl;
    std::cout << "Number of consenants: " << consenants << std::endl;
}

int main() {
    std::string input = promptForInput();
    countVowels(input);

    return 0;}