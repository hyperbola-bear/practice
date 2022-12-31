#include <iostream>

//calculate the area of a rectangle

int main() {
    // int length {0}, width {0};
    // std::cout << "i want to know how big your room is\n" << "how long is your room? " << std::endl;
    // std::cin >> length;
    // std::cout << "how wide is your room? " << std::endl;
    // std::cin >> width;
    // std::cout << "your room is " << length * width << " square feet" << std::endl;

    // char Cname1 {'H'}, Cname2 {'W'};
    // std::cout << "my chinese name is " << Cname1 << Cname2 << std::endl;
    // std::cout << sizeof(Cname1) << std::endl;
    // std::cout << CHAR_MAX << std::endl;

   std::cout << "hello welcome to bedroom cleaning" << std::endl;
   std::cout << "\nhow many bedrooms do you want cleaned" << std::endl;
   int num_of_rooms {0};
   std::cin >> num_of_rooms;
   std::cout << "the cost of each room is $100\n" << "so the total would be $" << num_of_rooms * 100 << std::endl;

    return 0;
}