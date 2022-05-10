#include <stdio.h>
#include <unistd.h>

int main() {
	while(1){
		// O stdout tem buffer, por isso não é printado ao vivo
		printf(".");
		// Para corrigirmos esse problema, adicionamos um fflush
		fflush(stdout);
		usleep(10000);
	}
}