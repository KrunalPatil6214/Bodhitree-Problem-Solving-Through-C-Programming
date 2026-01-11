#include <simplecpp>

main_program {
    int N;
    cin >> N;
    double seriesSum = 0.0;
    for (int i = 0; i < N; i++) {
        double denominator = 2 * i + 1;
        if (i % 2 == 0) {
            seriesSum += 1.0 / denominator;
        } else {
            seriesSum -= 1.0 / denominator;
        }
    }
    double pi_approx = 4.0 * seriesSum;
    cout << pi_approx << endl;
}