#include <stdio.h>
#include <string.h>

typedef int Integer;
typedef char Character;
typedef struct Manufacturer {
	char name[50];
	char country[50];
} Manufacturer;

typedef struct {
	Manufacturer maker;
	float price;
} Bag;

int main() {

	// �������� ���� �� ������
	Integer a = 10;
	Integer b = 20;
	Integer sum = a + b;
	Bag myBag;
	
	printf("Sum: %d\n", sum);
	
	Character initial = 'A';
	printf("Initial: %c\n", initial);
	
	// �� �Ҵ�
	strcpy(myBag.maker.name, "Hermes");
	strcpy(myBag.maker.country, "France");
	myBag.price = 4500.99;

	// ����ü ��� ���
	printf("Maker: %s\n", myBag.maker.name);
	printf("Country: %s\n", myBag.maker.country);
	printf("Price: %.2f\n", myBag.price);

	return 0;
}