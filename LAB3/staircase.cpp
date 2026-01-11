#include <simplecpp>

int main() {
    int n;
    cout << "Enter number of steps (n): ";
    cin >> n;
    initCanvas("3D Staircase", 800, 600);
    double width = 600;
    double stepHeight = 60;

    double x = (800 - width) / 2;
    double y = 550;

    for (int i = 0; i < n; i++) {
        double slant = stepHeight;

        double x_left = x;
        double x_right = x + width;
        double y_bottom = y;
        double y_top = y - stepHeight;

        double nextWidth = width * 0.8;
        double nextStepHeight = stepHeight * 0.8;
        double shiftX = (width - nextWidth) / 2;
        double next_x_left = x + shiftX;
        double next_x_right = next_x_left + nextWidth;
        double y_next_bottom = y_top - slant;

        Rectangle frontFace(x + width/2, y - stepHeight/2, width, stepHeight);
        frontFace.setColor(COLOR("white"));
        frontFace.setFill(true);
        frontFace.imprint();

        Line bottom(x_left, y_bottom, x_right, y_bottom);
        Line right(x_right, y_bottom, x_right, y_top);
        Line top(x_right, y_top, x_left, y_top);
        Line left(x_left, y_top, x_left, y_bottom);
        bottom.imprint(); right.imprint(); top.imprint(); left.imprint();

        Line leftDiag(x_left, y_top, next_x_left, y_next_bottom);
        leftDiag.imprint();

        Line rightDiag(x_right, y_top, next_x_right, y_next_bottom);
        rightDiag.imprint();

        if (i == n - 1) {
            Line backTop(next_x_left, y_next_bottom, next_x_right, y_next_bottom);
            backTop.imprint();
        }

        int numStripes = 4;
        double stripeGap = stepHeight / numStripes;
        for (int k = 1; k < numStripes; k++) {
            double lineY = y_bottom - (k * stripeGap);
            Line stripe(x_left, lineY, x_right, lineY);
            stripe.imprint();
        }

        y = y_next_bottom;
        x = next_x_left;
        width = nextWidth;
        stepHeight = nextStepHeight;
    }

    getClick();
}
