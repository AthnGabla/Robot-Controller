#include <stdio.h>

main(){
	printf("\nHello World!\n");

	preventClose();
}

preventClose(){
	printf("\nPress the ENTER key to continue.");

	getchar();
}