#include <iostream>
#include <stdlib.h>
#include<clocale>
#include<conio.h>
using namespace std;
/**struct item*/
struct item
{
	int data;
	item *next;

};
/**add function*/
void add(item *&top, int pos, int x)
{
	int j = 1;
	int i; item *pnew, *p = top;
	pnew = new item; pnew->data = x;
	if (pos <= 1 || top == NULL)
	{
		pnew->next = top; top = pnew;
	}
	else
	{
		for (i = 1; i<pos - 1; i++)
			if (p->next != NULL)
			{
				p = p->next;
				j++;
			}
		if (pos <= j + 1)
		{
			pnew->next = p->next; p->next = pnew;
		}
	}
}
/**output list function*/
void print(item *top)
{
	item *p = top;
	while (p != NULL)
	{
		cout << p->data << ' ';
		p = p->next;
	}
	cout << endl;
}
/**delete function*/
void del(item *&top, int pos2)
{
	item *a = top, *b;
	int i = 0;
	while (a != NULL)
	{
		a = a->next;
		i++;
	}
	if (pos2>i || pos2<1)
	{
		cout << "такого элемента нет" << endl;
	}

	else
	{
		if (pos2 == 1)
		{
			a = top->next;
			top = a;
		}
		if (pos2>1)
		{
			i = 1;
			a = top;
			while (i != pos2 - 1)
			{
				i++; a = a->next;
			}
			b = a->next;
			a->next = b->next;
			delete b;
		}
	}
}
/**main function*/
int main()
{
	setlocale(LC_ALL, "Russian");
	int pos, pos1, pos2, otv, da;
	item *first, *last;
	int x, r, k, m, y, j;
	item *top = NULL;

	int queue=0;

	char action;
	std::cout << "Введите число действий";
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++){
		std::cin >> action;
		if (action == 'a'){
			cout << "значение ";
			cin >> x;
			add(top, 1, x);
			queue++;

			
		}
		if (action == 'd'){
			del(top, queue);
		}


	}




	print(top);

	_getch();
}