#include <iostream>
using namespace std;
int input(int a, int b)
{
    int sum;
    cout << "This function is to calculate sum" << endl;
    cout << "Enter first number " << endl;
    cin >> a;
    cout << "Enter second number " << endl;
    cin >> b;
    sum = a+b;
    return sum;
  
}

int main()
{
    int sum;
    int a, b;
    sum = input( a,  b);
    
    cout << "The result is "<<sum<<endl;
}