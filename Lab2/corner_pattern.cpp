#include <simplecpp>

main_program {
    initCanvas("Polygonal Pattern", 1000, 1000);
    int n;
    cin >> n;
    Turtle t;
    t.penUp();
    t.moveTo(400, 550);
    t.penDown();

    double angle = 360.0 / n;
    repeat(n) {
        t.right(angle);

        repeat(n) {
            t.penDown();
            t.forward(50);
            t.left(angle);
        }
        t.penUp();
        t.left(angle);
        repeat(5) {
            t.penDown();
            t.forward(5);
            t.penUp();
            t.forward(5);
        }
        t.left(angle);
    }

    getClick();
}
