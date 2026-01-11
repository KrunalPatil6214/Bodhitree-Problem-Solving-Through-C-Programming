#include <simplecpp>

main_program {
    float a1, b1, c1;
    float a2, b2, c2;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;
    float denominator = (a1 * b2 - a2 * b1);
    float x = (b1 * c2 - b2 * c1) / denominator;
    float y = (c1 * a2 - c2 * a1) / denominator;
    cout << x << " " << y << endl;
}