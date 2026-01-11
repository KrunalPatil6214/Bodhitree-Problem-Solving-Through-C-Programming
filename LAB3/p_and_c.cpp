#include <simplecpp>

long long factorial(int num) {
    long long res = 1;
    for (int i = 2; i <= num; i++) {
        res *= i;
    }
    return res;
}

main_program {
    int n, r;
    cin >> n >> r;

    long long nFact = factorial(n);
    long long rFact = factorial(r);
    long long nMinusRFact = factorial(n - r);
    long long p = nFact / nMinusRFact;
    long long c = nFact / (rFact * nMinusRFact);
    cout << p << " " << c << endl;
}