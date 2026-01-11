#include <simplecpp>

main_program {
    initCanvas("Circle of Squares", 600, 600);
    int n;
    cin >> n;
    Turtle t;
    t.penUp();
    t.moveTo(300, 300);
    t.penDown();
    double rotationAngle = 360.0 / n;
    repeat(n) {
        repeat(4) {
            t.forward(100);
            t.left(90);
        }
        t.left(rotationAngle);
    }
    getClick();
}
