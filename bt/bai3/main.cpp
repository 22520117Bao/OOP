#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> A(n);
    for (auto &i:A) cin>>i;
    int m; cin>>m;
    vector<int> B(m);
    for (auto &j:B) cin>>j;
    for (int k =0;k<m;k++)
    {
        auto vitri = upper_bound(A.begin(),A.end(), B[k]);
        if (vitri == A.end())
        {
            if (A[A.size()-1] == B[k])
                cout<<A.size()-1<<endl;
            else
                cout<<-1<<endl;
        }
        else{
                if (vitri != A.begin()  && *(vitri - 1) != B[k])
                cout<<-1<<endl;
        cout<< vitri - A.begin() -1<< endl;
        }

    }

}
