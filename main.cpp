#include <iostream>
#include <string>

void delete_symbols(std::string * str, char del_char){

}

int main() {
    std::string card_string;
    std::cout << "Please, enter a card number:\n";
    std::cin >> card_string;

    delete_symbols(&card_string, ' ');

    std::cout << "\n";
    std::cout << card_string;
    return 0;
}
