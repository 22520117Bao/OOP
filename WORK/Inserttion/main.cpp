    #include <iostream>
    #include <vector>
    #include<bits/stdc++.h>
    using namespace std;
    void Insertion (int a[], int n)
    {
        int  pos,i;
        int x;
        for (i = 1; i<n;i++)
        {
            x = a[i];
            pos = i -1;
            while((pos >= 0) && (a[pos]>x))
            {
                a[pos + 1] =a[pos];
                pos--;
            }
            a[pos+1] = x;
        }
    }
    int main()
    {
        double s, e , t;
        s = clock();
        int n;
        cin>> n;
        int *a = new int [n];
        ifstream exam;
        exam.open("a.txt");
        for (int i =0; i< n; i++)
            exam >> a[i];
	  exam.close();
        Insertion(a,n);
        for (int i = 0; i<n; i++)
            cout<<a[i]<< " ";
        e = clock();
        t = (e - s)/CLOCKS_PER_SEC;
        cout<<"time: "<< t;

        return 0;
    }
