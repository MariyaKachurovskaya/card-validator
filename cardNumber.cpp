//
// Created by mtroeglazova on 25.10.2022.
//

#include "cardNumber.h"


cardNumber::cardNumber(const std::string & input) {
    card_number = input;
}

int cardNumber::luhn(std::string const & input)
{
    int check_num = 0;
    bool odd = false;
    for (auto it = input.rbegin(); it != input.rend(); ++it)
    {
        auto num = *it - '0';

        if ((odd = !odd))
        {
            num *= 2;

            if (num > 9)
                num -= 9;
        }

        check_num += num;
    }

    return (check_num * 9) % 10;
}

bool cardNumber::checkLuhn(std::string input) {
    int sum = 0;

    for (int i = input.length() - 1; i >= 0; i--) {
        int number = input[i] - '0';

        if (i % 2 == 0) {
            number *= 2;

            if(number > 9) {
                number -= 9;
            }
        }

        sum += number;
    }

    return sum % 10 == 0;
}
