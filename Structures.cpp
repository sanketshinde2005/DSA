#include <iostream>
#include<stdio.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    char x;
};

int main()
{
  struct Rectangle r1={15,20};
  r1.length=18;
  r1.breadth=15;
  //printf("%lu", sizeof(r1));
  cout<<r1.length<<endl;
  cout<<r1.breadth<<endl;
  cout<<"Area of the Rectangle is "<<r1.length*r1.breadth<<endl;

    return 0;
}