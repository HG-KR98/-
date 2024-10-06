#include <stdio.h>

// �Լ� ���� (���� �κ�)
int add(int a, int b) {
	return a + b;
}

void printString(char *str) {
	printf("�Էµ� ���ڿ�: %s\n", str);
}

void printString2(char str[]) {
	printf("�Էµ� ���ڿ�: %s\n", str);
}

void processValues(int *num, char *ch) {
	printf("�Էµ� ����: %d\n", *num);
	printf("�Էµ� ����: %c\n", *ch);
}

double avgArray(int *arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return (double)sum / size;
}


int	main() {
	int result = add(3, 4) // �Լ� ȣ�� �κ�
	printf("3 + 4 = %d\n", result);
	
	char myString[] = "this is string";
	printString(myString);

	char myString2[] = "this is string2";
	printString2(myString2);

	int number = 42;
	char character = 'A';
	processValues(&number, &character);
	
	int myArray[] = { 100, 22, 34, 55, 70 };
	int size = sizeof(myArray) / sizeof(myArray[0]);
	printf("�迭�� ��հ��� %.2f�Դϴ�.\n", avgArray(myArray, size));

	return 0;
}