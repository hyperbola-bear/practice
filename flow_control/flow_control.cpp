#include <iostream>

int main() {
    //switch-case

    // char letter_grade {};
    // std::cout << "Enter the grade you expect to score on your upcoming exam: ";
    // std::cin >> letter_grade;
    // switch(letter_grade) {
    //     case 'A':
    //     case 'a' : std::cout << "You need to score 70% or higher to receive an A" << std::endl;
    //         break;
    //     case 'B':
    //     case 'b' : std::cout << "You need to score 60% or higher to receive a B" << std::endl;
    //         break;
    //     case 'C':
    //     case 'c' : std::cout << "You need to score 50% or higher to receive a C" << std::endl;
    //         break;
    //     default: std::cout << "You should not be aiming this low"   << std::endl;
    // }
    // // enumerated types

    // enum Direction {up, down, left, right};
    // Direction heading {left};
    // switch(heading) {
    //     case up:
    //         std::cout << "You are heading up" << std::endl;
    //         break;
    //     case down:
    //         std::cout << "You are heading down" << std::endl;
    //         break;
    //     case left:
    //         std::cout << "You are heading left" << std::endl;
    //         break;
    //     case right:
    //         std::cout << "You are heading right" << std::endl;
    //         break;
    // }

//loops

    for (int i = 0; i < 5; i ++) {
        std::cout << "Hello " << i+1 << " times" << std::endl;
    }

    int array [] {1, 2, 3, 4, 5};

    for (auto num : array) { //loop through the array auto lets the compiler figure out the type of the variable
        std::cout << num << std::endl;
    }

    //continue and break
    //continue skips the rest of the loop and starts the next iteration
    //break exits the loop

    for (int i = 0; i < 5; i++) {
        if (i == 2) {
            continue;
        }
        std::cout << "Hello " << i+1 << " times" << std::endl;
        if (i == 3) {
            break;
        }
    }
}
