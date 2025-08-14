
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#define fast_io     std::ios_base::sync_with_stdio(false)
int partition ( int pivot, int a[], int n)
{
    int x;
    int l = -1;
    int cdem = -1;
    int tdem =-1;
    for (int i = 0; i < n ;i++){
        if (a[i] == pivot)
            x = i;}
    int b[x];
    int d[x];
    int c[x];
    for (int i =x + 1; i< n; i++)
        c[i] = a[i];
    for (int i =0; i <= x; i++){
            if (a[i] < pivot || a[i] == pivot ){
                cdem ++;
                b[cdem] = a[i];
                    }
            else
            {
                tdem++;
                d[tdem] = a[i];
            }
    }
    int p = cdem + 1;
    for (int i =0; i < cdem + 1; i++)
        if (b[i] == pivot && b[i+1]==pivot)
            p--;
    for (int i = 0 ; i < cdem + 1; i++)
        a[i] = b[i];
    for (int i = cdem + 1 ; i <= tdem + 1; i++)
    {
        l++;
        a[i] = d[l];
    }
    for (int i = x + 1 ; i < n; i++)
        a[i] = c[i];
    return p;


}

int main()
{
    int n, pivot;
    cin >> n >> pivot;
    int * a = new int [n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int p = partition(pivot, a, n);

    for( int i = 0; i < n; i++){
        cout << a[i] << " " ;
    }
    cout << endl << p;
    return 0;
}
