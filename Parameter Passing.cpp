/*Call by value
#include <iostream>
using namespace std;

    int add(int a , int b)
{
    a++;
    cout<<a<<endl;
    return 0;
}

int main()
{
   int num1 = 10 , num2 = 17 , sum;
    sum=add(num1 , num2);
    cout<<num1<<endl;
    return 0;
}*/

/*Call by address
#include <iostream>
using namespace std;
void swap (int *x , int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int num1=27 , num2=72;
    swap(&num1,&num2);
    
    cout<<"First number is "<<num1<<endl;
    cout<<"Second number is "<<num2<<endl;
}*/

//Call by refrence
#include <iostream>
using namespace std;
void swap (int &x , int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int num1=27 , num2=72;
    swap(num1,num2);
    
    cout<<"First number is "<<num1<<endl;
    cout<<"Second number is "<<num2<<endl;
}
