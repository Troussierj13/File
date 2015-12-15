#include "funct.hpp"
#include <cstdlib>

int main()
{
	File myFile = creerFileVide();
	int choise = 5;
	int ent;
	while(choise != 0)
	{
		system("cls");
		std::cout << std::endl;
		std::cout 	<< "###########################" << std::endl
					<< "#   1 : Enfiler           #" << std::endl
					<< "#   2 : Defiler           #" << std::endl
					<< "#   3 : Afficher en tete  #" << std::endl
					<< "#   0 : Quitter           #" << std::endl
					<< "###########################" << std::endl;
		afficherFile(myFile);
		std::cout	<< std::endl
					<< "###########################" << std::endl;
		std::cin >> choise;
		switch(choise)
		{
			case 1:
				std::cout << "Entier: ";
				std::cin >> ent;
				enfiler(myFile, ent);
				break;
			case 2:
				defiler(myFile);
				break;
			case 3:
				std::cout << getHead(myFile);
				break;
		}
	}
	return 0;
}