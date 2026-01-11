#include <simplecpp>

main_program {

    initCanvas("Grid Drawing", 400, 400);
    int startX = 125;
    int startY = 125;
    int lineLength = 150;
    int boxSize = 50;
    Line v1(startX + boxSize, startY, startX + boxSize, startY + lineLength);
    Line v2(startX + 2 * boxSize, startY, startX + 2 * boxSize, startY + lineLength);
    Line h1(startX, startY + boxSize, startX + lineLength, startY + boxSize);
    Line h2(startX, startY + 2 * boxSize, startX + lineLength, startY + 2 * boxSize);
    getClick();

}
