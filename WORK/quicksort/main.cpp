
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#define fast_io     std::ios_base::sync_with_stdio(false)
int partition ( int pivot, int a[], int n)
{
    int x;
    int j = 0;
    int cdem = 0;
    int tdem =0;
    for (int i = 0; i < n ;i++)
        if (a[i] == pivot)
            x = i;
    int * b = new int [x];
    int * c = new int [n - x];
    for (int i =x + 1; i< n; i++)
        c[i] = a[i];
    for (int i =0; i < x; i++){
            if (a[i] < pivot || a[i] == pivot ){
                cdem ++;
                b[0] = a[i];
                j++;
                    }
            else
            {
                tdem++;
                b[x -1-i] = a[i];
            }
    }
    cout<< " b[0]:   "<< b[0];
    int p = cdem;
    for (int i =0; i < cdem; i++)
        if (b[i] == pivot && b[i+1]==pivot)
            p--;
    for (int i = 0 ; i < cdem; i++)
        a[i] = b[i];
    for (int i = cdem ; i < tdem; i++)
        a[i] = b[i];
    for (int i = x +1 ; i < n; i++)
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
