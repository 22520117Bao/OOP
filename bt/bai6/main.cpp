#include <iostream>
#include <ctime>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
    int dem=0 ;
    double s,e,t;
    s = clock();
    int n = 10000000;
    srand(unsigned(time(0)));
    ofstream myfile("exam.txt");
    vector<int> A(100000000);
    for (int i =0; i< 30000000 ;i++)
        A[i] = 0;
    for (int i =0; i<50000000; i++)
        myfile<< A[i]<<" ";
    for (int i =30000000; i>=30000000 && i<100000000; i++)
        A[i] =1;
    for (int i =30000000; i>=30000000 && i<100000000; i++)
        myfile<< A[i]<<" ";
    int m = rand();
    while (m--){
            int x = rand();

    for (int i = n-1;i>=0 ; i--)
        {
            if ( x== A[i])
            {
                myfile<<i<<endl;
                break;
            }
            else
                dem ++;


        }
        if (dem == 100000000)
            myfile<<-1<<endl;
    }
    e = clock();
    t = (double)(e - s)/CLOCKS_PER_SEC;
    cout<<"time: "<<t;
    return 0;
}

