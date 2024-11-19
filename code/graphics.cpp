#include <stdio.h>
#include <graphics.h>

void drawLine(int x1, int y1, int x2, int y2) {
    int deltaX = x2 - x1;
    int deltaY = y2 - y1;
    if (deltaX == 0) {
        int i;
        for (i = y1; i <= y2; i++) {
            putpixel(x1, i, WHITE);
              printf("(%d, %d)\n", x1, i);
        }
    } else if (deltaY == 0) {
        int i;
        for (i = x1; i <= x2; i++) {
            putpixel(i, y1, WHITE);
            printf("(%d, %d)\n", i, y1);
        }
    } else {
        float slope = (float)deltaY / deltaX;
        int i;
        for (i = x1; i <= x2; i++) {
            int y = y1 + slope * (i - x1);
            putpixel(i, y, WHITE);
              printf("(%d, %d)\n", i, y);
        }
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int a, b, c, d, e, f, g, h;
    printf("Enter coordinates for the first line (a b c d): ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
        line(a, b, c, d);
        printf("Enter coordinates for the second line (e f g h): ");
    scanf("%d%d%d%d", &e, &f, &g, &h);
        line(e, f, g, h);

    int x1, y1, x2, y2;
       printf("Enter the starting point (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the ending point (x2, y2): ");
    scanf("%d %d", &x2, &y2);
        drawLine(x1, y1, x2, y2);
    getch();
    closegraph();

    return 0;
}


