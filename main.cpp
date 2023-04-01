#include <iostream>

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

int main(int argc, char *argv[]) {
    countVowels(argv[1]);
    return 0;
}