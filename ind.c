#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	int n, c = 0, result = 0;
	char A[40];
	printf("Put your text\n");
	fgets(A, 40, stdin);
	n = strlen(A);
	for (int i = 0; i < n; i++)
		if ((A[i] == ',') || (A[i] == ';') || (A[i] == '.')) {
			result += 1;
		}
	if (result > 0) {
		printf("%d", result);
	}
	else {
		printf("%d", 0);
	}
	
}
