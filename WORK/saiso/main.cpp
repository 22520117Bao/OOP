#include <iostream>

using namespace std;
double GetRandom(double be,double lon){
    return be + (double)(rand()*(be-lon+1.0)/(1.0+RAND_MAX));
}
double luythua(double b, double a)
{
    double result = b;
    for (double i =1 ;i < a; i++)
        result = result * b;
    return result;
}
 double cubeRoot(long double a, long double precision, double n ) {
   double i;

   for(i = 1; luythua(i,n) <= a; ++i);   //tim phan nguyen

   for(--i; luythua(i,n) < a; i += precision);  //tim phan thap phan

   return i;
}

int main() {
   long double a;
   cin>> a;
   double n;
   cin>> n;
   long double precision ;
   cin>> precision;
   cout<< cubeRoot(a,precision,n);

   return 0;
}
