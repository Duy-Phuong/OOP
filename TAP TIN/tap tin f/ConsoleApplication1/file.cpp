#include <stdio.h>
#include <stdlib.h>

int main() {


	FILE * pFile1;
	char buffera[] = { 'x', 'y', 'z' };
	pFile1 = fopen("myfile.bin", "wb");
	fwrite(buffera, sizeof(char), sizeof(buffera), pFile1);
	fclose(pFile1);



	FILE * pFile;
	int lSize;
	char * buffer;
	size_t result;

	pFile = fopen("myfile.bin", "rb");
	if (pFile == NULL) 
	{ 
		fputs("File error", stderr);
		exit(1);
	}

	// obtain file size:
	fseek(pFile, 0, SEEK_END);
	lSize = ftell(pFile);
	rewind(pFile);
	printf("kich thuoc: %d\n", lSize);
	// allocate memory to contain the whole file:
	buffer = (char*)malloc(sizeof(char)*lSize);
	if (buffer == NULL) { fputs("Memory error", stderr); exit(2); }

	// copy the file into the buffer:
	result = fread(buffer, 1, lSize, pFile);
	for (int i = 0; i < lSize; i++)
	{
		printf(" %c\n", buffer[i]);
	}
	if (result != lSize) { fputs("Reading error", stderr); exit(3); }

	/* the whole file is now loaded in the memory buffer. */

	// terminate
	fclose(pFile);
	free(buffer);
	return 0;
}