//CSCI 2421 Data Structure Fall 2021
//Assignment #1_Recursion
//Mersimoy Gurmu, Student ID:1100418499
//******************************************//
#include<iostream>
using namespace std;

int findSum(int a[], int size);//Parameter

int main()
{
    int n;
    cout << "Please enter the size of the array: ";
    cin >> n;

    int* array = new int[n];
    cout << "Please enter the values of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout << "The sum of the values in the array is " << findSum(array, n) << endl;

    return 0;
}
int findSum(int a[], int size) {//The function

    if (size <= 0) {// base case
        return 0;
    }
    else {
        return (a[size] + findSum(a, --size));// The recursion return the sum of an array
    }
}