#include <iostream>
#include <cstdlib> //for rand and strand
#include <ctime> //for the time function
using namespace std;

int *getRandomNums(int); //prototype

int main()
{
    int *nums;  //to point to the numbers 
    nums= getRandomNums(5); // get an array of 5 random numbers 

    for(int count=0; count<5; count++) //display the numbers
    {
        cout<<nums[count] << endl;
    }

    delete [] nums; //free the memory
    nums = nullptr;
    return 0;

}


int *getRandomNums(int nums)
{
    int *arr = nullptr; //array to hold the numbers

    if(nums <= 0)
    {
        return NULL;
    }


    arr = new int[nums]; //dynamically allocate the arr

    srand(time(0)); //seed the random num generator by passing the return value of time(0) to srand

    for(int count=0; count < nums; count++)//populate the arr w random nums
    {
        arr[count] = rand();
    }

    return arr;
}