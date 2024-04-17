#include <iostream>
using namespace std;

struct Payroll
{
    int hourlyPayRate;
    int hoursWorked;
    int totalPay;
};

//Payroll getInfo();

int main()
{
    Payroll employees[3];
    

    for(int i = 1; i < 4; i++)
    {
        cout << "Enter pay rate for employee " << i << ": ";
        cin >> employees[i].hourlyPayRate;

        cout << "Enter hours worked for employee " << i << ": ";
        cin >> employees[i].hoursWorked;
        
        employees[i].totalPay = employees[i].hourlyPayRate * employees[i].hoursWorked;
    }

    cout << "Total pay for each employee:" << endl;
    for(int j = 1; j < 4; j++)
    {
        cout << "Employee " << j  << ": " << employees[j].totalPay << endl;
    }

    return 0;
}
