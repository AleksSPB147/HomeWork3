﻿#include <stdio.h>
#include <iostream>
#include <iomanip>
void task1();
void task1_1();
void task2();
void task2_1();
void task3();
void task4();
void task5();
void task6();
void task7();
void task7_1();
void task8();

int main()
{
	
	using namespace std;
	setlocale(LC_ALL, "RU");
	//task1();
	//task1_1();
	//task2();
	//task2_1();
	//task3();
	//task4();
	//task5();
	task6();            // Красоту не успел навести
	//task7();
	//task7_1();
	//task8();
	
	}
// *******************************************************************************************
/*
Напишите программу, которая запрашивает оценку (2,3,4,5)
и выводит ее в текстовом виде (Неудовлетворительно, Удовлетворительно, Хорошо, Отлично).
Если введена некорректная оценка- вывести сообщение “Error”.

*/
//*******************************************************************************************
void task1()
{
	int eval;
	printf("Введите оценку: ");
	scanf_s("%d",& eval);
	if (eval == 2)
	{
		printf("Неудолетворительно");
	}
	 else if (eval == 3)
	{
		printf("Удолетворительно");
	}
	 else if (eval == 4)
	{
		printf("Хорошо");
	}
	 else if (eval == 5) 
	{
		printf("Отлично");
	}
	 else
	{
		printf("Error");
	}

		
}

void task1_1()
{
	int eval1_1;
	printf("Введите оценку \n");
	scanf_s("%d", &eval1_1);
	switch (eval1_1)
	{
	case 2:
		printf("Неудолетворительно");
		break;
	case 3:
		printf("Удолетворительно");
		break;
	case 4:
		printf("Хорошо");
		break;
	case 5:
		printf("Отлично");
		break;
	default:
		printf("Error");
		break;
	}
}

//************************************************************************************************
/*
Напишите программу, которая запрашивает вид операции которую
необходимо выполнить(+, -, *, / ) и 2 целых числа.
Программа должна вывести результат выбранной операции.
Если второе число равно 0 и выбрана операция деления -
программа должна вывести сообщение “Деление на 0”.Если знак операции введен некорректно - программа должна вывести “Error”.
*/
//***********************************************************************************************
void task2()
{

	int a, b;
	char sign;

	printf("Введите первое число: ");
	std::cin >> a;
	printf("Введите второе число: ");
	std::cin >> b;
	printf("Введите необходимую операцию : ");
	std::cin >> sign;
	if (sign == '+' || sign == '-' || sign == '/' || sign == '*')
	{
		if (sign == '+')
		{
		  std::cout << a + b;
		}
			if (sign == '-')
			{
			  std::cout << a - b;
			}
				if (sign == '*')
				{
				  std::cout << a * b;
				}
					if (sign == '/' && b == 0)
					{
					  printf("Деление на 0");
					}
						else
						{
						  //std::cout << (float) a / b;
						}
	}
	else
	{
		printf("Error");
	}
}
	
void task2_1()
{
	int a, b;
	char sign;
	printf("Введите первое число: ");
	std::cin >> a;
	printf("Введите второе число: ");
	std::cin >> b;
	printf("Введите необходимую операцию : ");
	std::cin >> sign;

	switch (sign)
	{
	case '+': std::cout << a + b; break;
	case '-': std::cout << a - b; break;
	case '*': std::cout << a * b; break;
	case '/': 
		if(b == 0)
		{
			printf("Деление на 0"); break;
		}
		else 
		{
			std::cout <<(float) a / b; break;
		}


	default:
		printf("Error");
		break;
	}


}

//********************************************************************************
/*
Напишите программу, которая запрашивает у пользователя натуральные
числа, пока не будет введен ноль, после этого выводит количество чисел кратных 5.


*/
//*********************************************************************************

void task3()
{
	int num = 0;
	int count= 0;

	do
	{
		printf("Введите число \n");
		scanf_s("%d", &num);
		if (num != 0 && num %5 == 0)                      // Проверяем что число не 0 и кратное 5
		{
			count++;
		}
	}

	while
		(num != 0);
	printf("%d", count);

	
}

//*********************************************************************************************
/*

Напишите программу, которая выводит
на экран в столбик ряд Фибоначчи до 10 - го члена ряда.
Числа Фибоначчи — это элементы числовой последовательности, в которой
первые два числа равны 1 и 1, а каждое последующее число равно сумме двух предыдущих чисел.
*/
//********************************************************************************************


void task4()
{
	int a = 1, b = 1;
	for (int i = 1; i <= 10; i++)
	{
		printf("%d \n", b);
		a = a +b;
		b = a - b;
	}
}

//*******************************************************************************
/*
Напишите программу, которая запрашивает два целых числа
a и b (при этом a ≤ b) и выводит в столбик все числа от a до b включительно.
*/
//*******************************************************************************
void task5()
{
	int a, b;
	printf("Введите первое число: ");
	std::cin >> a;
	printf("Введите второе число: ");
	std::cin >> b;
	if (a <= b)
	{
		for (int i = a; i <= b; i++)
		{
			printf("%d \n", i);
		}
	}

}





//***********************************************************************
/*
Напишите программу, которая выводит таблицу умножения для чисел от 1 до 9


*/
//***********************************************************************


void task6()
{
	

	for (int i = 1; i <= 9; i++)
	{
		
		for (int j = 1; j <= 9; j++)
			

			printf(" %d ", i * j);
		
		printf("\n   ");
	}



}

/*
Напишите программу, которая запрашивает натуральное число,
а затем выводит все его делители
*/

void task7()
{

	int num , i = 1;
	printf("Введите число: ");
	std :: cin >> num;
	while (i <= num)
	{
		if (num % i == 0)                            // Проверяем на деление без остатка
		{
			printf("%d \n", i);
			
        }
		i++;
	}
}


void task7_1()

{

	int num;
	printf("Введите число: ");
	scanf_s("%d", &num);
	int i;
	for (int i = 1; i <= num; i++)
	{
		if (num%i == 0)                             // Проверяем на деление без остатка
		{
			printf("%d\n", i);
			
		}
		
    }
}
//************************************************************	
/*
Напишите программу, которая запрашивает натуральное число N, 
после чего запрашивает N целых чисел и выводит минимальное из них

*/
void task8()
{
	int num,min = 0, q ;
	printf("Введите число: ");
	scanf_s("%d", &num);
	printf("Введите %d целых чисел: \n", num);
	scanf_s("%d", &q);
	
	min = q;

	for (int i = 0; i < num -1 ; i++)
		
	{
		
		scanf_s("%d", &q);
		if (q < min)
			min = q;
	}
	printf(" min  =  %d ", min);

	
}


	

























/*

1.  Напишите программу, которая запрашивает оценку (2,3,4,5)
и выводит ее в текстовом виде (Неудовлетворительно, Удовлетворительно, Хорошо, Отлично).
Если введена некорректная оценка- вывести сообщение “Error”.



2. Напишите программу, которая запрашивает вид операции которую 
необходимо выполнить (+,-,*,/) и 2 целых числа. Программа должна вывести результат выбранной операции.
Если второе число равно 0 и выбрана операция деления- программа должна вывести сообщение “Деление на 0”. Если знак операции введен некорректно- программа должна вывести “Error”.



3. Напишите программу, которая запрашивает у пользователя натуральные
числа, пока не будет введен ноль, после этого выводит количество чисел кратных 5.



4. Напишите программу, которая выводит
на экран в столбик ряд Фибоначчи до 10-го члена ряда.
Числа Фибоначчи — это элементы числовой последовательности, в которой 
первые два числа равны 1 и 1, а каждое последующее число равно сумме двух предыдущих чисел.



5. Напишите программу, которая запрашивает два целых числа
a и b (при этом a ≤ b) и выводит в столбик все числа от a до b включительно.



6. Напишите программу, которая выводит таблицу умножения для чисел от 1 до 9



7. Напишите программу, которая запрашивает натуральное число, а затем выводит все его делители



8. Напишите программу, которая запрашивает натуральное число N, после чего запрашивает N целых чисел и выводит минимальное из них










if (sign == '+' || sign == '-'|| sign == '/' || sign == '*')
	{
		if (sign == '+')
		{

			std::cout << a + b;
		}
		 if (sign == '-')
		 {
			printf("%d", a - b);
		 }
		   if (sign == '*')
		   {
			   std::cout << a * b ;

		   }
			 if (sign == '/' && b == 0)
			 {
				printf("Деление на 0 \n");
			 }
				else
				{
				 std::cout << a / b;

				}

	}
	 else
	 {
		printf("Error");
	 }
}

















*/







