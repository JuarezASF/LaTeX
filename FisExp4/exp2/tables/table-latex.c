#include <stdio.h>
#include <stdlib.h>

int get_colum_numbers(const char *file){
	int n=0;
	char c;
	float aux;
	FILE *in;
	int flag = 0;

	in = fopen(file, "r");

	while((c = fgetc(in)) != '\n')
		{
			fseek(in, -1, SEEK_CUR);
			fscanf(in, "%f", &aux);
			n++;
			while( (c = fgetc(in)) == ' ' || (c) == '\t'){flag++;}
			if(!flag)fseek(in, -1, SEEK_CUR);
			flag = 0;
		}
		printf("Encontramos %d colunas no arquivo %s\n", n, file);
	fclose(in);
	return(n);
	}


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
	
	colunas = 	get_colum_numbers(argv[1]);




	data = (float *)malloc(colunas * sizeof(float));

	while((c = fgetc(in)) != EOF )
		{
			fseek(in, -1, SEEK_CUR);
			fprintf(out, "\t\t");
			for(i = 0; i < colunas; i++)
				fscanf(in, "%f", &data[i]);
			for(i = 0; i < colunas - 1; i++)
				fprintf(out, " %.2f &", data[i]);
			fprintf(out, " %.2f \\\\ \\hline \n", data[i]);
			

		}
	fclose(in);
	fclose(out);
	
		
	return(0);
	}
