#include <stdion.h>
void convCaseString(char* str) {
	const int diff = 'a' - 'A';

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] += diff;
		}
		else if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= diff;
		}
	}
}

int main(void) {
	char input[100];

	printf("Input> ");
	fgets(input, sizeof(input), stdin);


	int i = 0;
	while (input[i] != '\0') {
		if (input[i] == '\n') {
			input[i] = '\0';
			break;
		}
		i++;
	}

	convCaseString(input);

	printf("Output> %s\n", input);

	return 0;
}