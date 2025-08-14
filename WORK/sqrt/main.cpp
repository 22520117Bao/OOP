#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k,x;
    cin>>n;

    vector<int> A(n);
    for (int i = 0;i<n;i++) {
        cin>>A[i];
    }
    while(x !=0){
    cin>>k>>x;
    int d=lower_bound(A.begin(),A.end(),x)- A.begin()-1;
    int c=d+1;
    vector<int> B;
    while (k--){
        if (d<0) {
            B.push_back(A[c]);
            c++;
        } else if (c>=n) {
            B.push_back(A[d]);
            d--;
        } else {
            int dl=abs(x-A[d]);
            int dr=abs(x-A[c]);
            if (dl<=dr) {
                B.push_back(A[d]);
                d--;
            } else {
                B.push_back(A[c]);
                c++;
            }
        }
    }
    int s = B.size();
    sort(B.begin(), B.end());
    cout << B[0] << " " <<B[s - 1] << endl;
    }
    x = 0;
    return 0;
}
