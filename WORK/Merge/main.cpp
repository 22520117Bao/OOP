#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void Merge(int array[], int  left, int  mid,
           int  right)
{
    int x = mid - left + 1;
    int y = right - mid;
    int *a = new int[x];
    int *b = new int[y];
    for (int i = 0; i < x; i++)
        a[i] = array[left + i];
    for (auto j = 0; j < y; j++)
        b[j] = array[mid + 1 + j];
    int o = 0;
    int p  = 0;
    int k= left;
    while (o < x&& p < y) {
        if (a[o]<= b[p]) {
            array[k]= a[o];
            o++;
        }
        else {
            array[k]= b[p];
            p++;
        }
            k++;
    }
    while (o < x) {
        array[k]= a[o];
        o++;
        k++;
    }
    while (p < y) {
            array[k]= b[p];
        p++;
        k++;
    }
    delete[] a;
    delete[] b;
}

void mergeSort(int array[], int  beg, int  en)
{
    if (beg>= en)
        return;

    int mid = beg+ (en - beg) / 2;
    mergeSort(array, beg, mid);
    mergeSort(array, mid + 1, en);
    Merge(array, beg, mid, en);
}
int main()
{
    double s,e,t;
    s = clock();
    int n;
    cin>> n;
    int *a = new int [n];
    ifstream exam;
    exam.open("a.txt");
    for (int i =0; i< n; i++)
         exam >> a[i];
    exam.close;
    mergeSort(a,0, n -1);
    e = clock();
    t = (e - s)/CLOCKS_PER_SEC;
    cout<<"Time: "<< t;
    return 0;
}


