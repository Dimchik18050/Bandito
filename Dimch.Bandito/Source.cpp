#include <stdio.h>
#include <Windows.h>

int main()
{
	const int startingMoney = 500;
	const int turnCost = 50;
	const int doubleBonus = 60;
	const int tripleBonus = 100;
	
	int money = startingMoney;
	char panel0 = 'X';
	char panel1 = 'X';
	char panel2 = 'X';
	
	do
	{
		system("cls");

		printf("\n\n");
		printf("\t ######### \n");
		printf("\t# BANDITO #\n");
		printf("\t###########\n");
		printf("\t#         #\n");
		printf("\t# %c  %c  %c #\n", panel0, panel1, panel2);
		printf("\t#         #\n");
		printf("\t###########\n");
		printf("\n");


	} 
	while ( money >= turnCost );

	return 0;
}