#include <stdio.h>
#include <string.h>
#ifndef LENGTH
#define LENGTH 20
#endif
struct Article
{
	int number; // Article number
	int quantity; // Quantity
	char description[LENGTH]; // Description array
};
void main()
{
	struct Article article;
	void Print(struct Article* article);
	article.number = 2;
	article.quantity = 5;
	strcpy_s(article.description, " here is c++ course");

	Print(&article);
}
void Print(struct Article* article)
{
	printf("Article number: %d\n", (*article).number);
	printf("Quantity: %d\n", (*article).quantity);
	printf("Desciption: %s\n", article->description);
	getchar();
}