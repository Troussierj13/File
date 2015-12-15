#include <iostream>
#include "struct.hpp"

File creerFileVide()
{
	File f;
	f.tete = 0;
	f.queue = 0;
	for (unsigned int i = 0; i < TAILLE_MAX; ++i)
	{
		f.tab[i] = 0;
	}
	return f;
}

bool estVide(File f)
{
	return (f.tete == f.queue);
}

bool estPlein(File f)
{
	return (((f.queue+1) % TAILLE_MAX) == f.tete);
}

void enfiler(File &f, int e)
{
	if (!estPlein(f))
	{
		f.tab[f.queue] = e;
		f.queue = (f.queue+1) % TAILLE_MAX;
	}
	
}

void defiler(File &f)
{
	if (!estVide(f))
		f.tab[f.tete] = 0;
		f.tete = (f.tete+1) % TAILLE_MAX;
	
}

int getHead(File f)
{
	return f.tab[(f.tete+1) % TAILLE_MAX];
}

void afficherFile(File f)
{
	std::cout << "{";
	for (int i = 0; i < TAILLE_MAX-1; ++i)
		std::cout << f.tab[i] << ",";
	std::cout << f.tab[TAILLE_MAX] << "}";
}