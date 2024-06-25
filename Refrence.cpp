#include <iostream>
using namespace std;
int main()
{
    int a = 27;
    int &r= a;
    r=72;
    
    int b =63;
    r=b;
    cout<<r<<a<<endl;
    return 0;
    
}