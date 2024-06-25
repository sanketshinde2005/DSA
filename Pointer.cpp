#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    /*int a = 27;
    int *p;
    p=&a;
    
    cout<<a<<endl;
    printf("Using pointer %d\n %d\n",p,&a);
    cout<<p<<endl;*/
    
    /*int A[5]={2,4,6,8,10};
    int *p;
    p=A;*/
    
    int *p;
    //Array below is created in heap
    //syntax used is of C language
    p=(int *)malloc(7*sizeof(int));
    /*p=new int[7]
    This is the syntax for the same in C++ language*/
    
    p[0]=10; p[1]=11; p[2]=12; p[3]=13; p[4]=14; p[5]=15; p[6]=16;
    
    for(int i=0;i<7;i++)
    cout<<p[i]<<endl;
    // This is the command for deletion of Heap created Array in C++
    delete [] p;
    /*free(p);
    The same working command in C language*/
    return 0;
}