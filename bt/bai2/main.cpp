#include <iostream>
using namespace std;
int main()
{
    int dem  =0 ;
    int n;
    cin>> n;
    int *arr= new int [n];
    for (int i =0;i<n;i++ )
        cin>> arr[i];
    int m;
    cin>> m;
    int *b= new int [m];
    for (int j=0;j<m;j++)
        cin>> b[j];
    for (int j =0 ;j<m;j++){
        for (int i =0 ;i<n;i++)  {
            dem =0;
            if (dem ==0){
            int x = b[j];
            int k =i;
            int h= n;
            while (i<n){
               int a= (i+ n )/2;
                if (arr[a]==x){
                    cout<<a<<"\n\n";
                    dem ++;
                    break;
                }
                if (arr[a]>x)
                    i = a+1;
                if (arr[a]<x)
                    n= a-1;
                            }
                while (i >= n){
                    cout<<"-1"<<"\n\n";
                    dem ++;
                    break;}
            i = k;
            n =h;}
            else
                break;
        }}
    return 0;
}
