#include <iostream>
using namespace std;

void fun(int *A , int n)
{
    //cout<<sizeof(A)/sizeof(int)<<endl; 
    A[2]=27;
    int i;
    for(i=0;i<n;i++);
}

int main()
{
    int A[] = {2,4,6,8,10};
    int n = 5;
    fun(A , n);
    //cout<<sizeof(A)/sizeof(int)<<endl;
    for(int x:A)
    cout<< x <<" " ;
    return 0;
}


//Creating Array in HEAP
/*
#include <iostream>
using namespace std;

int * fun(int size)
{
    int *p;
    p=new int[size];
    int i;
    for(int i=0;i<size;i++)
    p[i]=i+1;
    return p;
}
    
int main()
{
    int *ptr,sz=9;
    ptr=fun(sz);
    
    for(int i=0;i<sz;i++)
    cout<<ptr[i]<<endl;
    
    return 0;
}*/