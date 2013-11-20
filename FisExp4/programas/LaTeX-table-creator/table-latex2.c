#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int get_colum_numbers(const char *file){
	int n=0;
	char c;
	int aux;
	FILE *in;
	int flag = 0;

	in = fopen(file, "r");

	while((c = fgetc(in)) != '\n')
		{
			fseek(in, -1, SEEK_CUR);
			fscanf(in, "%d", &aux);
			n++;
			while( (c = fgetc(in)) == ' ' || (c) == '\t'){
				flag++;
				if(c == '\n') break;
				}
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
	char **strings;
	int *precisao;

	printf("Essa versão do código requer:\n");
	printf("\t - 1º argumento: arquivo de entrada\n");
	printf("\t - 2º argumento: arquivo de saida\n");
	printf("\t - 3º argumento: n colunas\n");
	printf("\t - 4-?º argumento: precisão a ser impressa em cada coluna\n\n");
	
	if(!in || !out){
		printf("O arquivo '%s' não foi encontrado!\n", argv[1]);
		exit(1);
		}

	if(argc <= 3)
		{
		printf("A função deve recebr no mínimo 3 argumentos!\n");
		printf("recebidos: %d\n", argc - 1);
		return(0);
		}
	colunas = atoi(argv[3]);

	strings =(char **)malloc(colunas*sizeof(char *));
	for(i = 0; i < colunas; i++)
		strings[i] = (char *)malloc(50*sizeof(char));

	precisao =(int *)malloc(colunas*sizeof(int));
	//precisão[i] guarda  o número de algarimos decimais impressos na i-ésima coluna

	for(i = 0; i < colunas; i++)
		{
		if(i+4 >= argc)
			{
			printf("Número de argumentos não bate!\n");
			printf("número de argumentos recebidos: %d\n", argc - 1);
			printf("número de argumentos esperados: %d\n", colunas + 3);
			return(0);
			}
		precisao[i] = atoi(argv[4 + i]);
		}
		
	for(i = 0; i < colunas; i++)
		sprintf(strings[i], " %%.%df", precisao[i]);

	data = (float *)malloc(colunas * sizeof(float));

	
	while((c = fgetc(in)) != EOF )
		{
			fseek(in, -1, SEEK_CUR);
			fprintf(out, "\t\t");
			for(i = 0; i < colunas; i++)
				fscanf(in, "%f", &data[i]);
			for(i = 0; i < colunas - 1; i++)
				{
				fprintf(out, strings[i], data[i]);
				fprintf(out, " & ");
				}
			fprintf(out, strings[i], data[i]);
			fprintf(out, " \\\\ \\hline \n");
		}
	fclose(in);
	fclose(out);
	
		
	return(0);
	}
