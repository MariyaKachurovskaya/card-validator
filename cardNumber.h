//
// Created by mtroeglazova on 25.10.2022.
//
#include <iostream>
#include <string>
#ifndef CARD_VALIDATOR_CARDNUMBER_H
#define CARD_VALIDATOR_CARDNUMBER_H


class cardNumber {
    std::string card_number;
public:
    cardNumber(std::string const & input);
    int luhn(std::string const & input);
    bool checkLuhn(std::string input);
};


#endif //CARD_VALIDATOR_CARDNUMBER_H
