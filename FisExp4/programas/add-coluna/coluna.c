#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

	FILE *in, *out;
	in  = fopen(argv[1], "r");
	out = fopen(argv[2], "w");
	int   colunas, i;
	float *data;
	char c;

	if(!in || !out) {
		printf("O arquivo '%s' não foi encontrado!\n", argv[1]);
		exit(1);
		}
	
	fscanf(in, "%d", &colunas);

	data = (float *)malloc(colunas * sizeof(float));

	while((c = fgetc(in)) != EOF )
		{
			fseek(in, -1, SEEK_CUR);
			for(i = 0; i < colunas; i++)
				fscanf(in, "%f", &data[i]);
			for(i = 0; i < colunas - 1; i++)
				fprintf(out, " %3.2f \t", data[i]);
			fprintf(out, " %5.2f \t 0.5\n", data[i]);
			

		}

	fclose(in);
	fclose(out);
	
		
	return(0);
	}
