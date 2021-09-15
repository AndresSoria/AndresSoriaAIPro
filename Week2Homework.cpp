// Week2Homework.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
//To print numbers divisible by two different numbers

void printDivisible(int number)
{
    for (int num = 0; num < number; num++)
    {
        if (num % 50 == 0 && num % 100)
            cout << num << " ";
    }
}

int main()
{
    int number = 1000;
    printDivisible(number);

    return 0;
}
