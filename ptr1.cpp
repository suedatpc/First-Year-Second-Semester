#include <iostream>
using namespace std;

int main()
{
    int x=25 , y=50, z=75;
    int *ptr = nullptr;

    cout<<"Here are the values of x,y,z: \n";
    cout<<x<<" "<<y<<" "<<z<<endl;

    //use pointer to manipulate x,y,z

    ptr =&x;
    *ptr += 100;

    ptr = &y;
    *ptr += 100;

    ptr = &z;
    *ptr += 100;

    cout<<"Once again, here are the values of x,y,z: \n";
    cout<< x <<" " << y << " " << z << endl;





    return 0;
}