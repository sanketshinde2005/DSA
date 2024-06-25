#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    /*Rectangle r={45,54};
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;
    Rectangle *p = &r;*/
    
    Rectangle *p;
    p=(struct Rectangle *)malloc(sizeof(struct Rectangle));//This line is for C language
    p=new Rectangle;//This line is for C++ language
    p->length=20;
    p->breadth=10;
    
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
    
    return 0;
}