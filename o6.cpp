#include<iostream>
using namespace std;

class Numbers{
private:
    int number;
    static string lessThan20[20];
    static string tens[10];
    static string hundred;
    static string thousand;
public:
//constructor
    Numbers(int num): number(num){} 

    void print(){
        if (number < 0 || number > 9999){
            cout << "Number out of range!" << endl;
            return;
        }
        if (number == 0){
            cout << "zero" << endl;
        }

        string result;
        //important
        int thousands = number / 1000;
        int hundreds = (number % 1000) / 100;
        int tens = (number % 100) / 10;
        int ones = number % 10;

        if (thousands > 0){
            result += lessThan20[thousands] + " " + thousand + " ";
        }
        if (hundreds > 0){
            result += lessThan20[hundreds] + " " + hundred + " ";
        }
        if (tens > 1){
            result += Numbers::tens[tens] + " ";
            if (ones > 1){
                result += Numbers::lessThan20[ones];
            }
        }
        else if (tens == 1){
            result += Numbers::lessThan20[10 + ones];
        }
        else if (ones > 0){
            result += Numbers::lessThan20[ones];
        }
        cout << result << endl;
    } 
};

string Numbers::lessThan20[20] = {
    "zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven",
    "twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"
};
string Numbers::tens[10] = {
    "","","twenty","thirty","fourty","fifty","sixty","seventy","ninety"
};

string Numbers::hundred = "hundred";
string Numbers::thousand = "thousand";

int main()
{
    int num;
    cout << "Enter a number between 0 and 9999: ";
    cin >> num;

    Numbers numberObj(num);
    cout << "English description: ";
    numberObj.print();

    return 0;
}