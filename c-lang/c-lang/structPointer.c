#include <stdio.h>
#include <string.h>

// ����ü ����
struct Bag {
	char brand[50]; // �귣����� ������ ���ڿ� �迭
	int year; // ���� ������ ������ ������ ����
	float price; // ������ ������ �Ǽ��� ����
};

// ����ü �����͸� �μ��� �޾Ƽ� ����ϴ� �Լ��� ����
void printBag(struct Bag *bag) {
	printf("Brand: %s\n", bag -> brand);
	printf("Year: %d\n", bag -> year);
	printf("Price : %.2f\n", bag -> price);
}

int main() {
	struct Bag myBag; // ����ü ���� ����
	struct Bag* bagPtr = &myBag;
	// ����ü ������ ���� �� �ʱ�ȭ

	// �����͸� ���� �� �Ҵ�
	strcpy(bagPtr -> brand, "Gucci");
	bagPtr->year = 2021;
	bagPtr->price = 1500.50;

	printBag(bagPtr);
	// ����ü �����͸� ����Ͽ� �Լ� ȣ��

	return 0;
}