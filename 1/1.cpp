#include <iostream>
#include <set>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <map>
using namespace std;

int main() {
    fstream F("1.1.in");

    vector<int> A, B;
    int a, b;
    while (F >> a >> b) {
        A.push_back(a);
        B.push_back(b);
    }

    // sort(A.begin(), A.end());
    // sort(B.begin(), B.end());

    // long long ans = 0;
    // for (int i = 0; i < A.size(); ++i) {
    //     ans += abs(A[i] - B[i]);
    // }

    // cout << ans << '\n';

    std::map<int, int> M; 
    for (int i = 0; i < B.size(); ++i) {
        ++M[B[i]];
    }
    long long ans = 0;
    for (int i = 0; i < A.size(); ++i) {
        ans += A[i] * M[A[i]];
    }
    cout << ans << '\n';

}