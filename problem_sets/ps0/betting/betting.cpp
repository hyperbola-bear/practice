#include <iostream>
#include <iomanip>

int main () {
    double A_bet_percentage {};
    std::cin >> A_bet_percentage;
    std::cout << std::setprecision(10) << std::fixed;
    std::cout << static_cast<long double>(100 / A_bet_percentage) << std::endl;
    std::cout << static_cast<long double>(100/ (100-A_bet_percentage)) << std::endl;
}