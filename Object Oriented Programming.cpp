#include <iostream>
#include<stdio.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;


void intialize(int l , int b)
{
    length=l;
    breadth=b;
}

int area()
{
    return length*breadth;
}

int perimerter()
{
    int p;
    p = 2*(length+breadth);
    return p;
}
};

int main()
{
    Rectangle r={0,0};
    
    int l,b;
    printf("Enter Length and Breadth");
    cin>>l>>b;
    r.intialize(l , b);
    
    int a = r.area();
    int peri = r.perimerter();
    
    printf("Area=%d\nPerimeter=%d\n",a,peri);
    return 0;
}