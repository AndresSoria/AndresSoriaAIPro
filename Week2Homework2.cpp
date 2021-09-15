// Week2Homework2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
#include <conio.h>
#include <cstring>
using namespace std;
int vowelChk(char);
int main() 
{
    char s[50], t[50];
    int c, d = 0;
    cout << "Enter a string to delete vowels\n";
    cin >> s;
    for (c = 0; s[c] != '\0'; c++) 
    {
        // check for If not a vowel
        if (vowelChk(s[c]) == 0) 
        {
            t[d] = s[c];
            d++;
        }
    }
    t[d] = '\0';
    strcpy_s(s, t);
    cout << "String after delete vowels:" << s;
    return 0;
}

int vowelChk(char ch) 
{
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
        return 1;
    else
        return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
