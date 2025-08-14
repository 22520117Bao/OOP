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
    for (int i =0; i<m;i++)
    {
        int a = B[i];
        auto vt = lower_bound (A.begin(), A.end(), a);
        if (vt == A.end())
            cout<<-1<<endl;
        else
            if (vt != A.end())
        {
            if (*(vt) == a)
                cout<< vt- A.begin() << endl;
            else
                cout<<-1<< endl;
        }
    }
}
