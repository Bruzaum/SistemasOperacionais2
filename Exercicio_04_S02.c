#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	// somente o USER aluno pode acessar
	char* user_name_allowed = getenv("USER");
	if (!strcmp(user_name_allowed, "aluno")){
		if(getenv("http_server") != NULL && getenv("rtsp_server") != NULL){
			printf("http_server e rtsp_server existem no ambiente\n");
		}else{
			fprintf(stderr, "http_server e rtsp_server NÃO existem no ambiente\n");
		}
	}else{
		printf("O usuario %s nao pode executar o arquivo\n", user_name_allowed);
	}

	//o USER aluno nao pode acessar
	/*
	char* user_name_not_allowed = getenv("USER");
	if (strcmp(user_name_not_allowed, "aluno")){
		if(getenv("http_server") != NULL && getenv("rtsp_server") != NULL){
			printf("http_server e rtsp_server existem no ambiente\n");
		}else{
			fprintf(stderr, "http_server e rtsp_server NÃO existem no ambiente\n");
		}
	}else{
		printf("O usuario %s nao pode executar o arquivo\n", user_name_not_allowed);
	}
	*/

	return 0;
}