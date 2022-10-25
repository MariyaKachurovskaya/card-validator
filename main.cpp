#include <iostream>
#include <string>

#include "cardNumber.h"

int main() {
    std::string card_string;
    std::cout << "Please, enter a card number:\n";
    std::cin >> card_string;

    cardNumber card_number(card_string);
    bool checkResult = card_number.checkLuhn(card_string);

    std::cout << "\n" << "Card number is " << (checkResult ? "correct" : "incorrect");
    return 0;
}
