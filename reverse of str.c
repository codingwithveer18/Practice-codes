#include<stdio.h>

// function to find the length of string
int length(char* string) {

	int count = 0;

	// increment count until we reach the null charcter '\0'
	// null character marks the end of string
	while (string[count] != '\0') {
		++count;
	}
	return count;

}

// function to reverse string
void reverse(char* string) {

	char temp;
	int i, j, n;
	n = length(string);

	// swapping string[i] and string[j] until i<j
	for (i = 0, j = n - 1; i < j; ++i, --j) {
		temp = string[j];
		string[j] = string[i];
		string[i] = temp;
	}

}

int main()
{
	char string[100];
	printf("Enter a String: ");
	scanf("%s", string);

	printf("\nString Before Reverse: %s", string);
	reverse(string);
	printf("\n\nString After Reverse: %s", string);
}
