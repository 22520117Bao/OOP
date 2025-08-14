#include <iostream>

using namespace std;
void hoanvi(int &a , int &b)
{
     int temp = a;
     a = b;
     b= temp;
}
int main()
{
    int a ;
    int b;
    cin>> a >> b;
    hoanvi( a, b);
    cout<< "A: "<< a;
    cout<< "B: "<< b;
    return 0;
}
