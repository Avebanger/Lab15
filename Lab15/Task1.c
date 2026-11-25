#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main() {
	setlocale(LC_ALL,"RUS");
	char name[49], greeting[100], last_symbol[2];
	//вводим имя
	printf("Пожалуйста, введите ваше имя: ");
	scanf("%49s",name);
	//УДВАИВАНИЕ ПОСЛЕДНЕЙ БУКВЫ ИМЕНИ
	//last_symbol[0] = name[strlen(name) - 1];
	//last_symbol[1] = '\0';
	//strcat(name,last_symbol);
	//ПРОБЕЛ ПОСЛЕ КАЖДОГО СИМВОЛА В ИМЕНИ
	//for (int i = 0;i < (strlen(name) * 2);i++)
	//{

	//}

	strcpy(greeting,"Привет, ");
	//перевод Name в заглавные
	for (int i = 0;name[i] != '\0';i++)
	{
		name[i] = toupper(name[i]);
	}

	//слепливание имя к приветствию
	strcat(greeting, name);
	//дополнение воскл знаками приветствия
	for (int i = 40;strlen(greeting)<40; i--)
	{
		greeting[i] = '!';
	}
	greeting[40] = '\0';

	printf("\n");
	puts(greeting);
	printf("\n");
	printf("Длина greeting: %zu", strlen(greeting));
	return 0;
}