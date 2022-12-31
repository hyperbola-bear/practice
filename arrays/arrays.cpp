#include <iostream>
#include <vector>

int main()
{
    // int test_scores [5] {100, 90, 80, 70, 60};

    // std::cout << test_scores[0] << std::endl;

    // const double days_in_year {365};

    // int arr [10] {0};
    // arr[0] = 100;
    // arr[9] = 1000;

    // std::cout << arr[0] << std::endl;
    // std::cout << arr[1] << std::endl;
    // std::cout << arr[2] << std::endl;
    // std::cout << arr[3] << std::endl;
    // std::cout << arr[4] << std::endl;
    // std::cout << arr[5] << std::endl;
    // std::cout << arr[6] << std::endl;
    // std::cout << arr[7] << std::endl;
    // std::cout << arr[8] << std::endl;
    // std::cout << arr[9] << std::endl;

    // vectors

    // std::vector <char> vowels {'a', 'e', 'i', 'o', 'u'}; // vector of chars of size 5
    // std::vector <int> (5); //vector of size 5 initialized to 0

    // std::cout << vowels[0] << std::endl;
    // std::cout << vowels.at(0) << std::endl;
    // std::cout << vowels.at(0) << std::endl;
    // vowels.at(0) = 'A';
    // vowels.push_back('y'); // adds y to the end of the vector
    // std::cout << vowels.at(5) << std::endl;
    // std::cout << "There are " << vowels.size() << " elements in the vector" << std::endl;

    // //2D vectors
    // std::vector <std::vector <int>> matrix {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}
    // };

    // std::cout << matrix[0][0] << std::endl;
    // std::cout << matrix.at(0).at(0) << std::endl;

    std::vector<int> vector1;
    std::vector<int> vector2;
    std::cout << (vector1.at(0) == NULL) << std::endl;
    // vector1.push_back(10);
    // vector1.push_back(20);
    // std::cout << "vector1 is " << vector1.size() << " elements long" << std::endl;
    // std::cout << "the 1st element is " << vector1.at(0) << std::endl;
    // std::cout << "the 2nd element is " << vector1.at(1) << std::endl;
    // vector2.push_back(100);
    // vector2.push_back(200);
    // std::cout << "vector2 is " << vector2.size() << " elements long" << std::endl;
    // std::cout << "the 1st element is " << vector2.at(0) << std::endl;
    // std::cout << "the 2nd element is " << vector2.at(1) << std::endl;

    // std::vector <std::vector <int>> vector_2d;
    // vector_2d.push_back(vector1);
    // vector_2d.push_back(vector2);

    // std::cout << vector_2d[0][0] << "\t";
    // std::cout << vector_2d[0][1] << std::endl;
    // std::cout << vector_2d[1][0] << "\t";
    // std::cout << vector_2d[1][1] << std::endl;

    // vector1.at(1) = 1000;

    // std::cout << vector_2d[0][0] << "\t";
    // std::cout << vector_2d[0][1] << std::endl;
    // std::cout << vector_2d[1][0] << "\t";
    // std::cout << vector_2d[1][1] << std::endl;

    // operands increment/decrement

    // int counter{10};
    // int result {0};

    // result = ++counter; // counter is incremented first, then result is assigned to counter
    // std::cout << result << std::endl;
    // std::cout << counter << std::endl;

    // counter = 10;
    // result = 0;

    // result = counter++; // counter is assigned to result first, then counter is incremented
    // std::cout << result << std::endl;
    // std::cout << counter << std::endl;

    // type casting
    //  int num {10};
    //  double dbl_num {};

    // dbl_num = num/8;
    // std::cout << dbl_num << std::endl;
    // dbl_num = static_cast<double>(num) / 8;
    // std::cout << dbl_num << std::endl;

    // int num1 {}, num2 {};
    // std::cout << "Enter two numbers: ";
    // std::cin >> num1 >> num2;
    // bool equal = (num1 == num2);
    // std::cout << "num1 = num2: " << equal << std::endl;
    // bool not_equal = (num1 != num2);
    // std::cout << "num1 != num2: " << not_equal << std::endl;

    // std::cout << std::boolalpha; //converts 1/0 to true/false for boolean values

    // std::cout << "num1 = num2: " << (num1 == num2) << std::endl;
    // std::cout << "num1 != num2: " << (num1 != num2) << std::endl;

    // double double1 {}, double2 {}; // 12.0 == 11.999999999999999? due to cpu approximation error

    // std::cout << "Enter two doubles: ";
    // std::cin >> double1 >> double2;
    // std::cout << "double1 = double2: " << (double1 == double2) << std::endl;

    // mixed mode comparisons
    // int num1{};
    // double double1 {};
    // std::cout << "Enter a number and a double of the same value: ";
    // std::cin >> num1 >> double1;
    // std::cout << std::boolalpha;
    // std::cout << "num1 = double1: " << (num1 == double1) << std::endl; //true because the int is promoted to a double during the comparison

    return 0;
}
