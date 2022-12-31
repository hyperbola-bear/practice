#include <iostream>
#include <cstring>
#include <cctype>

int main () {
    char first_name[20] {};
    char last_name[20] {};
    char full_name[40] {};

    std::cout << "Enter your first name: ";
    std::cin >> first_name;
    std::cout << first_name << std::endl;
    std::cout << "Enter your last name: ";
    std::cin >> last_name;

    strcpy(full_name, first_name); // copy first name to full name
    strcat(full_name, " "); // add a space to the full name
    strcat(full_name, last_name); // add last name to full name
    std::cout << full_name << std::endl;
    std::cin.getline(full_name, 40); // get the full name from the user
}