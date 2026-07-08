#include <stdio.h>
#include <string.h>

void copiaCad(char *param);

int main(int argc, char *argv[]){
	if(argc != 2){
		fprintf(stderr, "USO: %s cadena\n", argv[0]);
		return -1;
	}
	copiaCad(argv[1]);
	return 0;
}

void copiaCad(char *param){
	char cad[5];
	strcpy(cad, param);
}