#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
/* Call by value
struct Rectangle
{
    int length;
    int breadth;
};

void fun(struct Rectangle r)
{
    r.length=27;
    cout<<"Length "<<r.length<<endl;
    cout<<"Breadth "<<r.breadth<<endl;
}

int main()
{
    struct Rectangle r={15,45};
    fun(r);
    
    printf("Length %d \nBreadth %d \n",r.length,r.breadth);
    return 0;
}*/

/*Call by address
struct Rectangle
{
    int length;
    int breadth;
};

void fun(struct Rectangle *p)
{
    p->length=27;
    cout<<"Length "<<p->length<<endl;
    cout<<"Breadth "<<p->breadth<<endl;
}

int main()
{
    struct Rectangle r={15,45};
    fun(&r);
    
    printf("Length %d \nBreadth %d \n",r.length,r.breadth);
    return 0;
}*/

struct Rectangle
{
    int length;
    int breadth;
};
struct Rectangle *fun()
{
    struct Rectangle *p;
    p=new Rectangle;
    p->length=36;
    p->breadth=63;
    return p;
}
int main()
{
    struct Rectangle *ptr=fun();
    cout<<"Length "<<ptr->length<<endl;
    cout<<"Breadth "<<ptr->breadth<<endl;
    return 0;
}