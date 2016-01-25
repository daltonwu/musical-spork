#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fp = fopen("subig20.txt", "r");
	char *board = NULL;
	size_t len = 0;
	if(fp == NULL) {
		fprintf(stderr, "File not found: subig20.txt\n");
		exit(1);
	}
	
	getline(&board, &len, fp);
	printf("%s\n", board);
}
