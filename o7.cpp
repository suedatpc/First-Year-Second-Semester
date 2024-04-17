#include<iostream>
using namespace std;

class FindTheDate{
private:
    int Day;
    string Months[12] = {"January", "February", "March", "April", "May", "June",  "July", "August", "September", "October", "November", "December"};
    int DayInMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

public:
//constructor
    FindTheDate(int day){
        Day = day;
    }

    void setDate(){
        if(Day < 0 || Day > 365)
        {
            cout << "Invalid input. Please enter a number between 0-365. ";
            return;
        }
        
        int i = 0;
        while(Day > DayInMonths[i])
        {
            Day -= DayInMonths[i];
            i++;
        }
         cout <<  Months[i] << " " << Day << "." << endl;
    }

};

int main()
{
    int d;
    cout << "Enter a number between 0 and 365: ";
    cin >> d;

    FindTheDate day(d);
    
    cout <<"Day " << d << " means ";
    day.setDate();

    return 0;
}