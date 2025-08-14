
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
void merge(int a[],int n ,int b[] ,int m, int c[]) {
    for (int i =0; i< n;i++ )
        c[i] = a[i];
    for (int j = n; j < n+m;j++)
        c[j] = b[j];
        int mid = (m + n)/2
        int i, j, k;
    int n1 = mid - 0 + 1;
    int n2 =  (m + n) - mid;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++){
    	L[i] = c[0 + i];
	}
    for (j = 0; j < n2; j++){
    	R[j] = c[m + 1+ j];
	}
    i = 0;
    j = 0;
    k = 0;
    while (i < n1 && j < n2){
        if (L[i] <= R[j]){
            c[k] = L[i];
            i++;
        } else {
            c[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1){
        c[k] = L[i];
        i++;
        k++;
    }
    while (j < n2){
        c[k] = R[j];
        j++;
        k++;
    }
}



int main (){
    cin.tie(0);
    std::ios::sync_with_stdio(false);
    int n, m;
    int t; cin >> t;
    while (cin >> n >> m || t > 0){
        t--;
        int *a = new int [n], *b = new int[m], *c = new int[n+m];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];

        merge(a, n, b, m, c);
        int nc = n + m;;
        for(int i = 0; i < nc; i++){
            cout << c[i] << " ";
        }
        delete c;
        delete a;
        delete b;
        cout << endl;
    }
}
