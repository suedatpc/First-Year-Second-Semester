#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int num_employees = 5;
    int hours[num_employees];
    double payRate;
    double grossPay;

    cout << "Enter the hours worked by ";
    cout << num_employees << " employees who all earn the same hourly rate." << endl;

    for(int i = 0; i < num_employees; i++)
    {
        cout << "Employee #" << (i + 1) << ": ";
        cin >> hours[i];
    }

    cout << "Enter hourly pay rate for all the employees: ";
    cin >> payRate;

    cout << "Here is the gross pay for each employee:" << endl;
    for(int j = 0; j < num_employees; j++)
    {
        grossPay = hours[j] * payRate;
        cout << "Employee #" << (j + 1) << ": ";
        cout << grossPay << " TL" << endl;
    }

    return 0;
}
