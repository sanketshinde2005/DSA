#include <iostream>
#include<stdio.h>
using namespace std;
int area(int length , int breadth)
{
    return length*breadth;
}
int perimerter(int length , int breadth)
{
    int p;
    p = 2*(length+breadth);
    return p;
}
int main()
{
    int length=0,breadth=0;
    printf("Enter Length and Breadth");
    cin>>length>>breadth;
    
    int a = area(length,breadth);
    int peri = perimerter(length,breadth);
    
    printf("Area=%d\nPerimeter=%d\n",a,peri);
    return 0;
}