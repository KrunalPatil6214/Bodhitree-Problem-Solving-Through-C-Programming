#include <simplecpp>

main_program {
    int n;
    cin >> n;
    double product = 1.0;
    for (int k = 1; k <= n; k++) {
        
        double numerator = 2.0 * ((k + 1) / 2);
        double denominator = 2.0 * (k / 2) + 1;
        
        product = product * (numerator / denominator);
    }
    double pi_approx = 2.0 * product;
    cout << pi_approx << endl;
}