/*
	█ ▄▄  ▄███▄   █▄▄▄▄ █    ██   
	█   █ █▀   ▀  █  ▄▀ █    █ █  
	█▀▀▀  ██▄▄    █▀▀▌  █    █▄▄█ 
	█     █▄   ▄▀ █  █  ███▄ █  █ 
	 █    ▀███▀     █       ▀   █ 
	  ▀            ▀           █  
	                          ▀   
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
const char base[]= "base";

const char *command = "python3 perla-build.py";

int main(int argc, char *argv[]) {
main:
	if( argc == 2 ) {
      		
		printf("The argument supplied is %s\n", argv[1]);
		
		int inst = (strcmp(base,argv[1]));  // What
		
		switch(inst) {
			case 0:
				system(command);
				break;
			default:
				printf("Package not found!\n");
				break;
		}
	} else {
	   printf("Invalid usage.\n");
	   printf("Usage:\n");
	   printf("	perla-install <package>\n");
	}
	return 0;
}


