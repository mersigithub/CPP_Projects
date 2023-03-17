#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//Declare a variables
	int SSN, Employee_Number, Dependent_Cost;
	double Hours_Worked_Week;
	double Regular_Pay_Rate;
	double Hours_Over_Time;
	double Over_Time_Rates;
	double FICA_Rates;
	double Federal_Tax_Rates;
	double State_Tax_Rates;

	// Constand Variable
	double Gross_Pay;
	double Federal_Tax_Withheld;
	double State_Tax_Withheld;
	double FICA_Tax_Withheld;
	double CCA_Foundation;
	double Dependents;
	double Net_Pay;


	// Header of file

	cout << "CCA Payroll Application" << endl;
	cout << "-----------------------" << endl;
	cout << "                       " << endl;

	cout << "Enter employee SSN (digits only, no spaces or dashes): ";
	cin >> Employee_Number;

	cout << "Please enter the hours worked this week: ";
	cin >> Hours_Worked_Week;

	cout << "Enter number of dependents: ";
	cin >> Dependents;

	cout << "                    " << endl;

	// Initialize a variables
	Regular_Pay_Rate = 16.78;
	FICA_Rates = 6;
	Federal_Tax_Rates = 14;
	State_Tax_Rates = 5;
	CCA_Foundation = 10;
	Dependent_Cost = 35;
	Over_Time_Rates = 1.5;

	cout << "Employee Number: " << Employee_Number << endl;
	cout << "Hours Worked: " << Hours_Worked_Week << endl;
	cout << "Number of Dependent: " << Dependents << endl;
	cout << "Regular Pay Rates: " << "$" << Regular_Pay_Rate << endl;

	cout << fixed << setprecision(2);// output rounded into two decimal places.
	if (Hours_Worked_Week > 40)// Overtime worked.
	{
		Hours_Worked_Week = Hours_Worked_Week - 40;
		Gross_Pay = (40 * Regular_Pay_Rate) + (Hours_Worked_Week * Regular_Pay_Rate * Over_Time_Rates);
	}
	else
	{
		Gross_Pay = Hours_Worked_Week * Regular_Pay_Rate;
	}

	FICA_Tax_Withheld = Gross_Pay * FICA_Rates / 100; // If 6% is FICA Tax.
	Federal_Tax_Withheld = Gross_Pay * Federal_Tax_Rates / 100; // If 14%  is Federal Tax Rate.
	State_Tax_Withheld = Gross_Pay * State_Tax_Rates / 100; // If 5% is State Tax.

	if (Dependents >= 3)
	{
		Net_Pay = (Gross_Pay - Dependent_Cost - FICA_Tax_Withheld - Federal_Tax_Withheld - State_Tax_Withheld - CCA_Foundation);
	}
	else
	{
		Net_Pay = (Gross_Pay - FICA_Tax_Withheld - Federal_Tax_Withheld - State_Tax_Withheld - CCA_Foundation);
	}
	cout << "Gross Pay: " << "$" << Gross_Pay << endl;
	cout << "FICA Tax Withheld: " << "$" << FICA_Tax_Withheld << endl;
	cout << "Federal Income Tax Withheld: " << "$" << Federal_Tax_Withheld << endl;
	cout << "State Tax Withheld: " << "$" << State_Tax_Withheld << endl;
	cout << "CCA Foundation Donation withheld: " << "$" << CCA_Foundation << endl;
	cout << "Net_Pay: " << "$" << Net_Pay << endl;

	return 0;
}

