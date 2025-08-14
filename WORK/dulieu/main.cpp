
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#define fast_io     std::ios_base::sync_with_stdio(false)

void swap(int A[] , int x1, int x2){
	int temp;
	temp = A[x1];
	A[x1] = A[x2];
	A[x2] = temp;
}

int quickSort (int pivot, int A[], int n){
	int i = 0;
	int j = 0;
	int high = n -1;
	while( i <= high){
		if(A[i] > pivot){
			i++;
		}
		else{
			swap(A,i,j);
			i++;
			j++;
		}
	}
	return j-1;
}

int partition (int pivot,int A[], int n){
    int l = 0;
    int h = n-1;
	if(l < h){
	int pos = quickSort( pivot,A, n);

	return partition(A, l, pos-1);
	return partition(A, pos+1, h);
	}
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
