#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char name[20];
	char snew[20] = "Hello, ";
	int i;
	
	printf("Enter your name\n");
	scanf("%s", &name);
	printf("\n");
	i = strlen(name);
	while (i >= 0)
			{
			printf("%c", name[i]);
			i = i - 1;
	     	}

	strcat(snew, name);
	printf("\n%s\n", snew);
	getchar();
	return 0;

}
