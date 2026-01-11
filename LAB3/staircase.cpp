#include <simplecpp>

int main() {
    int n;
    cout << "Enter number of steps (n): ";
    cin >> n;
    initCanvas("3D Staircase", 800, 600);
    double width = 300;
    double height = 50 * n;
    double stepHeight = 60;

    double slant = 30;
    double x = (800 - width) / 2;
    double y = 550;
    for (int i = 0; i < n; i++) {

        double x_br = x + width;
        double y_top = y - stepHeight;
        double x_tl_back = x + slant;
        double y_back = y_top - slant;
        double x_tr_back = x_br + slant;

        double frontPolyPts[][2] = {{x, y}, {x_br, y}, {x_br, y_top}, {x, y_top}};
        Polygon frontFace(x, y, x_br, y, x_br, y_top, x, y_top);
        frontFace.setColor(COLOR("white"));
        frontFace.setFill(true);
        frontFace.imprint();

        Polygon topFace(x, y_top, x_br, y_top, x_tr_back, y_back, x_tl_back, y_back);
        topFace.setColor(COLOR("white"));
        topFace.setFill(true);
        topFace.imprint();

        Line l1(x, y, x_br, y);
        Line l2(x_br, y, x_br, y_top);
        Line l3(x_br, y_top, x, y_top);
        Line l4(x, y_top, x, y);
        l1.imprint(); l2.imprint(); l3.imprint(); l4.imprint();


        Line t1(x, y_top, x_tl_back, y_back);
        Line t2(x_tl_back, y_back, x_tr_back, y_back);
        Line t3(x_tr_back, y_back, x_br, y_top);
        t1.imprint(); t2.imprint(); t3.imprint();

        int numStripes = n - i;
        double stripeGap = stepHeight / numStripes;

        for (int k = 1; k < numStripes; k++) {
            double lineY = y - (k * stripeGap);
            Line stripe(x, lineY, x_br, lineY);
            stripe.imprint();
        }

        double nextWidth = width * 0.8;
        double nextHeight = stepHeight * 0.8;

        double shiftX = (width - nextWidth) / 2;
        x = x + shiftX;

        y = y - stepHeight;

        width = nextWidth;
        stepHeight = nextHeight;
    }

    getClick();
}
