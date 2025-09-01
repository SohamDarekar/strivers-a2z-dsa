#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write a program that takes an input of age
    // and print if you are an adult or not

/*     int age;
    cin >> age;

    if(age >= 18){
        cout << "You're an adult" << "\n";
    }
    else{
        cout << "You're not an adult" << "\n";
    } */

    int age;
    cin >> age;

    if(age < 18){
        cout << "Not eligible for the job";
    }
    else if(age <= 57){
        cout << "Eligible for job";
        if(age >= 55){
            cout << ", but retirement soon";
        }
    }
    else{
        cout << "Retirement time";
    }


    return 0;
}