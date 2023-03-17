// CSC160 Programming Challenge Two 
// Community College of Aurora course cost proposal
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    // Declare variables
    int option;
    double Hours_Cost = 178.25;
    double Cost_Of_Year = 0;
    double year = 1;
    double Number_Of_Credits;
    double level_One_Cost;
    double level_Two_Cost;
    double level_Three_Cost;
    string Course_Level;
    ifstream infile;
    string file;
    char character;

    // Read a txt file
    infile.open("tuitionAmounts.txt");
    infile >> file >> file>> file >> character >> character >> level_One_Cost >> character >> file;
    infile >> file >> file >> file >> character >> character >> level_Two_Cost >> character >> file;
    infile >> file >> file >> file >> character >> character >> level_Three_Cost >> character >> file;
    infile.close();
    // The program allow to enter course level
    cout << "CCA Tuition Program" << endl;
    cout << "-------------------" << endl;
    cout << endl;
    cout << "1.000 Level Courses" << endl;
    cout << "2.100 Level Courses" << endl;
    cout << "3.200 Level Courses" << endl;
    cout << "4.Exit Program" << endl;
    cout << "Select the course level or Exit: ";
    cin >> option;

    if (option == 4)
        exit(0);

    cout << endl;
    cout << "Enter the number of credit hours for this semester: "; // Allows users to enter number of credits
    cin >> Number_Of_Credits;
    cout << endl;
    // the programm print course level number when user enter option number
    cout << "Community College of Aurora Tuition" << endl;
    cout << "Report" << endl;
    cout << "             Level ";
    if (option == 1)
        cout << "000" << endl;
    else if (option == 2)
        cout << "100" << endl;
    else
        cout << "200" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Year" << "               " << "Tuition" << endl;
    cout << "-----" << "              " << "-------" << endl;
    // Calculation
    if (option == 1)
        Cost_Of_Year = 2 * (Number_Of_Credits * level_One_Cost);
    else if (option == 2)
        Cost_Of_Year = 2 * (Number_Of_Credits * level_Two_Cost);
    else
        Cost_Of_Year = 2 * (Number_Of_Credits * level_Three_Cost);

    cout << "Year " << year << "             " << "$" << fixed << setprecision(2) << Cost_Of_Year << endl;

    for (int year = 2; year <= 6; year++)
    {
        Cost_Of_Year = Cost_Of_Year * 1.02;

        cout << "Year " << year << "             " << "$" << fixed << setprecision(2) << Cost_Of_Year << endl;
    }

    cout << " " << endl;
    return 0;
}
