#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//constant for pi.
const double PI= 3.14159;


//structure declaration 
struct Circle
{
    double radius;
    double diameter;
    double area;
};

Circle getInfo(); //function prototype

int main()
{
    Circle c; //define a structure variable 
    c = getInfo();

    c.area = PI * pow(c.radius, 2.0);

    c.radius = c.diameter / 2;

    cout << fixed << showpoint << setprecision(2);
    cout << "The radius and area of the circle are: \n";
    cout <<"Radius: " << c.radius << endl;
    cout << "Area: " << c.area << endl;

    return 0;
}


Circle getInfo()
{
    Circle tempCircle; //temporary structure variable

    //store circle data in the temporary variable
    cout << "Enter the diameter of a circle: ";
    cin >> tempCircle.diameter;
    tempCircle.radius = tempCircle.diameter / 2.0 ;

    //return the temporary variable
    return tempCircle; //in main func this variable is used

}