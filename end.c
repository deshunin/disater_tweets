/* end.c file */

#include<stdio.h>
#include<stdlib.h>

int sum (int x, int y) {
	int static funcounter = 0;
	funcounter++;
	return(funcounter + x+ y);
}

int main(int argc, char** argv) {
	int x = 0, y = 0;
	x = sum(1,2);
	y = sum(3,4);
    printf("x = %d\ny = %d\n", x, y);
    return 0;
}
