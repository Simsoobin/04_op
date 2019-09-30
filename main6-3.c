#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x0 = 16;
	int y0 = 7;
	int add,sub, mul, div, rem;    // addition, subtraction, multiplication, division, remember
	
	add = x0 + y0;
	sub = x0 - y0;
	mul = x0 * y0;
	div = x0 / y0;
	rem = x0 % y0;
	
	printf("input two integers : %d %d\n", x0, y0);
	printf("+ result is %d\n", add);	
    printf("- result is %d\n", sub);
    printf("* result is %d\n", mul);
    printf("/ result is %d\n", div);
    printf("%% result is %d\n", rem);
	
	return 0;
}
