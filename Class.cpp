#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
    
public:
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }
    Rectangle(int l , int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
    void setlength(int l)
    {
        l = length;
    }
    void setbreadth(int b)
    {
        b = breadth;
    }
    int getlength(int l)
    {
        return length;
    }
    int getbreadth(int b)
    {
        return breadth;
    }
    ~Rectangle()
    {
        cout<<"Destructor";
    }
};

int main()
{
    Rectangle r(27,36);
    cout<<"Area is equal to "<<r.area()<<endl;
    cout<<"Perimeter is equal to "<<r.perimeter()<<endl;
    return 0;
}