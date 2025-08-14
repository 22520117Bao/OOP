#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include<bits/stdc++.h>
#include <fstream>
using namespace std;
int main()
{
    double s,e,t;
    s = clock();
    srand(unsigned(time(0)));
    ofstream myfile("exam.txt");
    vector<int> A(1000000);
    for (int i =0; i< 300000 ;i++)
        A[i] = 0;
    for (int i =0; i<500000; i++)
        myfile<< A[i]<<" ";
    for (int i =300000; i>=300000 && i<1000000; i++)
        A[i] =1;
    for (int i =300000; i>=300000 && i<1000000; i++)
        myfile<< A[i]<<" ";
    int m = rand();
    while(m--)
    {
        int x = rand();
        auto vt = upper_bound(A.begin(), A.end(),x);
        if (vt == A.begin())
            myfile<<-1;
        else if (vt != A.end()){
            if(*(vt -1)== x)
                myfile<< vt -1 - A.begin();
            else
                cout<<-1;
        }
        else if (vt == A.end()){
            if(A[A.size() - 1] == x)
                myfile<< A.size()-1;
            else
                myfile<<-1;
        }
        cout<<endl;
    }
    e = clock();
    t = (double)(e - s)/CLOCKS_PER_SEC;
    cout<<"time: "<<t;
    return 0;
}
