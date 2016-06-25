#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int width, cycle = 1, total = 1, space = 1, space1;
	char figure;

	cout << "а:\t       \n\t ***** \n\t| **** \n\t|  *** \n\t|   ** \n\t|____* \n"
		"b:\t _____ \n\t *    |\n\t **   |\n\t ***  |\n\t **** |\n\t ***** \n"
		"c:\t       \n\t ***** \n\t| *** |\n\t|  *  |\n\t|     |\n\t|_____|\n"
		"d:\t _____ \n\t|     |\n\t|     |\n\t|  *  |\n\t| *** |\n\t ***** \n"
		"e:\t       \n\t ***** \n\t| *** |\n\t|  *  |\n\t| *** |\n\t ***** \n"
		"f:\t  ___  \n\t *   * \n\t ** ** \n\t ***** \n\t ** ** \n\t *   * \n"
		"g:\t  ____ \n\t *    |\n\t **   |\n\t ***  |\n\t **   |\n\t *    |\n"
		"h:\t _____ \n\t|    * \n\t|   ** \n\t|  *** \n\t|   ** \n\t|    * \n"
		"i:\t       \n\t ***** \n\t **** |\n\t ***  |\n\t **   |\n\t *____|\n"
		"j:\t _____ \n\t|    * \n\t|   ** \n\t|  *** \n\t| **** \n\t ***** \n"
		"выбери фигуру ";
	cin >> figure;
	if (figure < 'a' ||
		figure > 'j')
	{
		cout << "ошибка при выборе фигуры!!";
		return 1;
	}
	cout << "введите ширину фигуры нечетное число от 3 до 25 = ";
	cin >> width;
	if (width < 3 ||
		width > 25)
	{
		cout << "вы вышли за рамки пределов!!";
		return 1;
	}
	else if ((width % 2) == 0)
	{
		cout << "для красивого вывода картинок используйте нечетные числа\n";
		return 1;
	}

	switch (figure)
	{
	case 'a':
	{
		while (cycle <= width)
		{
			while (total <= width)
			{
				if (total >= space)
				{
					cout << '*';
				}
				else
				{
					cout << ' ';
				}
				total++;
			}
			cout << endl;
			total = 1;
			space++;

			cycle++;
		}
	}
		break;
	case 'b':
	{
		while (cycle <= width)
		{
			while (total <= width)
			{
				if (total <= space)
				{
					cout << '*';
				}
				else
				{
					cout << ' ';
				}
				total++;
			}
			cout << endl;
			total = 1;
			space++;

			cycle++;
		}
	}
		break;
	case 'c':
	{
		space1 = width;
		while (cycle <= width)
		{
			while (total <= width)
			{
				if (total >= space &&
					total <= space1)
				{
					cout << '*';
				}
				else
				{
					cout << ' ';
				}
				total++;
			}
			cout << endl;
			total = 1;
			space++;
			space1--;

			cycle++;
		}
	}
		break;
	case 'd':
	{
		space1 = width;
		while (cycle <= width)
		{
			while (total <= width)
			{
				if (total <= space &&
					total >= space1)
				{
					cout << '*';
				}
				else
				{
					cout << ' ';
				}
				total++;
			}
			cout << endl;
			total = 1;
			space++;
			space1--;

			cycle++;
		}
	}
		break;
	case 'e':
	{
		space1 = width;
		while (cycle <= width)
		{
			while (total <= width)
			{
				if (total >= space &&
					total <= space1 ||
					total <= space &&
					total >= space1)
				{
					cout << '*';
				}
				else
				{
					cout << ' ';
				}
				total++;
			}
			cout << endl;
			total = 1;
			space++;
			space1--;

			cycle++;
		}
	}
	break;
	case 'f':
	{
		space1 = width;
		while (cycle <= width)
		{
			while (total <= width)
			{
				if (total > space &&
					total < space1 ||
					total < space &&
					total > space1)
				{
					cout << ' ';
				}
				else
				{
					cout << '*';
				}
				total++;
			}
			cout << endl;
			total = 1;
			space++;
			space1--;

			cycle++;
		}
	}
		break;
	case 'g':
	{
		space1 = width;
		while (cycle <= width)
		{
			while (total <= width)
			{
				if (total > space ||
					total > space1)
				{
					cout << ' ';
				}
				else
				{
					cout << '*';
				}
				total++;
			}
			cout << endl;
			total = 1;
			space++;
			space1--;

			cycle++;
		}
	}
		break;
	case 'h':
	{
		space1 = width;
		while (cycle <= width)
		{
			while (total <= width)
			{
				if (total < space ||
					total < space1)
				{
					cout << ' ';
				}
				else
				{
					cout << '*';
				}
				total++;
			}
			cout << endl;
			total = 1;
			space++;
			space1--;

			cycle++;
		}
	}
		break;
	case 'i':
	{
		space1 = width;
		while (cycle <= width)
		{
			while (total <= width)
			{
				if (total <= space1)
				{
					cout << '*';
				}
				else
				{
					cout << ' ';
				}
				total++;
			}
			cout << endl;
			total = 1;
			space1--;

			cycle++;
		}
	}
		break;
	case 'j':
	{
		space1 = width;
		while (cycle <= width)
		{
			while (total <= width)
			{
				if (total < space1)
				{
					cout << ' ';
				}
				else
				{
					cout << '*';
				}
				total++;
			}
			cout << endl;
			total = 1;
			space1--;

			cycle++;
		}
	}
		break;

	default: cout << "что-то пошло не так!!!";
		return 1;
		break;
	}
	return 0;
}






//Вывести на экран фигуры заполненные звездочками.Диалог с пользователем реализовать при помощи меню.
