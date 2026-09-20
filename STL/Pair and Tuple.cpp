#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Pair
    pair<string, int> student = {"dablu", 10};

    // First & second value
    cout << student.first << " " << student.second << '\n';

    // Change value
    student.first = "bablu";


    // Pair unpacking
    auto [name, roll] = student;

    cout << name << " " << roll << '\n';


    // Tuple
    tuple<string, int, string> t = {"karim", 10, "0191"};

    // Access tuple value
    cout << get<0>(t) << " "
         << get<1>(t) << " "
         << get<2>(t) << '\n';

    // Tuple unpacking
    auto [studentName, studentRoll, phoneNumber] = t;

    cout << studentName << " "
         << studentRoll << " "
         << phoneNumber << '\n';


    // Nested pair
    pair<string, pair<int, string>> p =
        {"dablu", {7, "01618"}};

    cout << p.first << " "
         << p.second.first << " "
         << p.second.second << '\n';


    return 0;
}