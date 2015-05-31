#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include<conio.h>






void main(){
	int mas[3];

	for (int i = 0; i < 3; i++){
		mas[i] = 0;
	}
	int head = -1;
	int tail = -1;
	int n;
	int x = 0;
	std::cout << "skoka?";
	std::cin >> n;
	char action;
	for (int i = 0; i < n; i++){
		std::cout << "action?";
		std::cin >> action;
		if (action == 'a'){
			if (tail == -1){ head = 0; }
			if ((tail != 2) && (mas[tail + 1] == 0)){
				std::cout << "znach";
				std::cin>>mas[tail + 1];
				tail++;

			}
			if ((tail == 2) && (mas[0] == 0)){
				std::cout << "znach";
				std::cin>>mas[0];
				 tail = 0;
			}
			for (int i = 0; i < 3; i++)std::cout << mas[i];

		}

		if (action == 'd'){
			if (head == 2){ mas[head] = 0; head = 0;}
			if (head != 2){ mas[head] = 0; head++; }
			for (int i = 0; i < 3; i++)std::cout << mas[i];
		
		}

	}

	for (int i = 0; i < 3; i++)std::cout << mas[i];
	_getch();

}





