#include <stdio.h>




int main(void) {

	char ime[11 + 1], prezime[17 + 1], predmet[20 + 1];
	int bodovi, n;

	FILE *tokPod;

	printf("Ucitajte ime studenta:\n");
	gets(ime);

	printf("Ucitajte prezime studenta:\n");
	gets(prezime);

	printf("Ucitajte naziv predmeta:\n");
	gets(predmet);

	printf("Ucitajte broj bodova:\n");
	scanf("%d", &bodovi);

	tokPod = fopen("zadatak.txt", "w+");

	n = fprintf(tokPod, "%s | %s | %s | %d", ime, prezime, predmet, bodovi);

	fclose(tokPod);
	

	system("pause");

	return 0;
}