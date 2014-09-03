/*
 * fib.c
 *
 *  Created on: Sep 3, 2014
 *      Author: superman
 */

#include <stdio.h>
#include "platform.h"

void xil_printf(const char*, ...);
void print(char *);

int fib(int n){
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return fib(n-1)+fib(n-2);
}

int main()
{
	init_platform();

//	int numOut = fib(5);
	int i;
	int n = 15;
	for(i =1; i <= n; i++){

		xil_printf("%d ", fib(i));
		//print("Hi");
	}

	xil_printf("\r\n");

    cleanup_platform();

    return 0;
}
