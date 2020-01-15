/* the start.c prints some pointers */

#include<stdio.h>

int main(int argc, char** argv) {
    char* str = "Hello from start";
    int x = 10;
    int y = 20;
    int* px = &x;
    int* py = &y;
    printf("x = %d, px = %p\n", x, px);
    printf("y = %d, py = %p\n", y, py);

    return 0;
}
