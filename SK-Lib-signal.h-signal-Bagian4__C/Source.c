
#include <stdio.h>
#include <signal.h>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

void handle_sigint(int sig) {
	printf("Caught signal %d\n", sig);
}

int main() {
	signal(SIGINT, handle_sigint);
	while (1);
	_getch();
	return 0;
}
