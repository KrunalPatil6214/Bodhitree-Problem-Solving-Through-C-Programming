#include <simplecpp>

main_program {
    float A[2][2], B[2][2], C[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) { 
            C[i][j] = 0;
            for (int k = 0; k < 2; k++) { 
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << C[i][j];
            if (j < 1) cout << " ";
        }
        cout << endl; 
    }
}