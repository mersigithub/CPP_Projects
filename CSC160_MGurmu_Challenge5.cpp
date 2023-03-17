// CSC160 C++ Computer Programming programming Challenge 5
// Mersimoy Gurmu
// The programming reverse the string that enter by user

// Header File
#include <iostream>
#include <string>
using namespace std;

void ReverseString(char ptrString[], int size); // Prototype
int main()
{
    cout << "----------------------------------------------------" << endl;
    cout << "*****************REVERSING STRING*******************" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << endl;
    char words[50];
    cout << "Enter Your String: ";  // Ask user to enter string
    cin.get(words, 50);
    cout << endl;
    ReverseString(words, 50);
    cout << "Your Reversed String is:" << words << endl;
    cout << endl;
}
void ReverseString(char ptrString[], int size) // Function reverse string
{
    char* frontPtr = ptrString, * rearPtr = ptrString + strlen(ptrString) - 1;
    while (frontPtr < rearPtr)
    {
        char Chr = *frontPtr;
        *frontPtr++ = *rearPtr;
        *rearPtr-- = Chr;
    }
}
