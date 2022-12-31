#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

    string s0;
    string s1{"Apple"};
    string s2{"Banana"};
    string s3{"Cherry"};
    string s4{"apple"};
    string s5{s1};       // copy constructor "Apple"
    string s6{s1, 0, 3}; // s6 = "App"
    string s7(10, 'X');  // s7 = "XXXXXXXXXX"

    cout << "s0: " << s0 << endl;                 // no garbage just empty
    cout << "s0 length: " << s0.length() << endl; // 0

    cout << "s1 is initialized to: " << s1 << endl; // "Apple"
    cout << "s2 is initialized to: " << s2 << endl; // "Banana"
    cout << "s3 is initialized to: " << s3 << endl; // "Cherry"
    cout << "s4 is initialized to: " << s4 << endl; // "apple"
    cout << "s5 is initialized to: " << s5 << endl; // "Apple"
    cout << "s6 is initialized to: " << s6 << endl; // "App"
    cout << "s7 is initialized to: " << s7 << endl; // "XXXXXXXXXX"

    // methods

    cout << boolalpha;
    cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl; // false
    cout << s1 << " == " << s4 << ": " << (s1 == s4) << endl; // false
    cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl; // true
    cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;   // true
    // comparing with a c-style literal
    cout << s1 << " == "
         << "Apple"
         << ": " << (s1 == "Apple") << endl; // true

    // assignment
    s1 = "Watermelon";
    cout << "s1 is now: " << s1 << endl; // "Watermelon"
    s2 = "Frank";
    s2[0] = 'C';
    cout << "s2 is now: " << s2 << endl; // "Crank"
    s2.at(0) = 'P';
    cout << "s2 is now: " << s2 << endl; // "Prank"

    // concat

    s4 = s1 + " and " + s3 + " juice";
    cout << s4 << endl; // "watermelonandCherryjuice"
    // illegal s4 = "juice + "and" + s3;
    // 2 c-style literals cannot + each other

    for (auto c : s4)
    {
        cout << c << " ";
    }
    cout << endl; // watermelonndCherryjuice

    // substring
    cout << s4.substr(0, 5) << endl; // "water"

    // erase
    s4.erase(0, 5);
    cout << s4 << endl; // "melonandCherryjuice"

    string full_name{};

    getline(cin, full_name);

    cout << "Your full name is: " << full_name << endl;

    // find

    s1 = "this is a secret sentence";

    string word{};

    cout << "Enter a word to find: " << endl;
    getline(cin, word);

    size_t pos = s1.find(word);
    if (pos != string::npos) // string::npos is a constant that represents the end of a string, as a return value it usually indicates no matches
    {
        cout << "The word " << word << " was found at position " << pos << endl;
    }
    else
    {
        cout << "The word " << word << " was not found" << endl;
    }
}