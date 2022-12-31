#include <iostream>
#include <cstring>

int main() {
    char string[101] {};
    int sum {0};
    int s_len {0};
    int counter {0};
    std::cin.getline(string, 101);
    s_len = strlen(string);
    std::cout << s_len << std::endl;
    for (auto character : string) {
        if (counter < s_len) {
            std::cout << character << ": " << static_cast<int>(character) << std::endl;
            sum += static_cast<int>(character);
            std::cout << "Sum: " << sum << std::endl;
            counter ++;

            continue;
        }
        break;
    }
    long double avg {static_cast<long double>(sum) / s_len};
    std::cout << "Average: " << avg << std::endl;
    std::cout << "Average char: " << static_cast<char>(avg) << std::endl;
    std::cout << static_cast<char>(avg) << std::endl;

    return 0;
}