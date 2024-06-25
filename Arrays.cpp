#include <iostream>
using namespace std;
int main()
{
    int A[10]={25,85,45,36,96,74,26};
    //For Loop
    /*int i;
    for(i=0;i<10;i++)
    cout<<A[i]<<endl;*/
    
    //For-Each Loop
    for(int x:A)
    {
        cout<<x<<endl;
    }
    
    
    /*A[0] = 27;
    A[1] = 72;
    A[2] = 36;
    A[3] = 63;*/
    
    cout<<sizeof(A)<<endl;
    cout<<A[6]<<endl;
    printf("%d\n",A[7]);
    return 0;
}
