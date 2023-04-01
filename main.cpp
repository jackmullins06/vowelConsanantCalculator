#include <iostream>
#include <cctype>

std::string makeStringLowerCase(std::string str) {
    for(int i = 0; i < str.length(); ++i) {
        str[i] = tolower(str[i]);
    }

    return str;
}

void countVowels(std::string input) {
    int vowels = 0, consonants = 0;

    for(int i = 0; i < input.size(); i++) {
        if(input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u')  {
            vowels++;
        } else if(isalpha(input[i])) {
            consonants++;
        }
    }

    std::cout << "Number of vowels: " << vowels << std::endl;
    std::cout << "Number of consenants: " << consonants << std::endl;
}

int main(int argc, char *argv[]) {
    countVowels(makeStringLowerCase(argv[1]));
    return 0;
}