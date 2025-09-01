#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int 
    int a = 10; // 'a' is assigned the value 10 which is an integer

    // long
    long b = 15; // long has a wider range than int

    long long z = 1500003000032;

    // float, double (used for decimal numbers)
    float x = 3.2;
    float y = 3;

    cout << "Value of y: " << y << "\n";
    cout << "Value of x: " << x << "\n";

    // string and getline

    string s; // only one word is printed
    // cin >> s;
    // cout << s;

    string str;
    getline(cin, str); // getline is used to print complete string with whitespaces, it will not print after line breaks
    cout << str << "\n";

    // char
    char ch; // single quotes are used to declare a character
    cin >> ch;
    cout << ch;

    return 0;
}