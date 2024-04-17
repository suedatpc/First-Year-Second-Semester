#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int nums[SIZE];
    int count;

    cout<<"Enter "<<SIZE<< " numbers: \n";

    for(count = 0; count<SIZE; count++)
    {
        cin>> *(nums+count);
    }

    cout<<"The numbers in backward are: "<<endl;

    for(count=SIZE-1; count>=0; count--)
    {
        cout<< *(nums+count)<<" ";
    }



    return 0;
}