#include <simplecpp>

main_program {
    int L, W;
    cin >> L >> W;

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < W; j++) {
            if (i == 0 || i == L - 1 || j == 0 || j == W - 1) {
                cout << 1;
            } else {
                cout << 0;
            }
        }
        cout << endl;
    }
}
