#include<iostream>
using namespace std;

class Square{
private:
    int Size;
public:
//constructor
    Square(int size){
        Size = size;
    }

    void setArea(int size){
        Size = size;
    }
    int getArea(){
        return (Size * Size); 
    }
    int getPerimeter(){
        return ( 4 * Size);
    } 
};

int main()
{
    int size;
    int size2 = 9;

    cout << "Please enter the size of the side of the square: ";
    cin >> size;

    Square box1 = Square(size);
    Square box2 = Square(size2);
    cout << "The area of the square: " << box1.getArea() << endl;
    cout << "The perimeter of the square: " << box1.getPerimeter() << endl;
    cout << "The area of box2 is: " << box2.getArea() << endl;
    cout << "The perimeter of box2 is: " << box2.getPerimeter() << endl;
    
    return 0;
}