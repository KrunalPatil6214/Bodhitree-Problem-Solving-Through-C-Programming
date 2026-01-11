#include <simplecpp>

main_program {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if ((i + j) % 2 == 0) {
                cout << 0;
            } else {
                cout << 1;
            }
            if (j < n - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
}
