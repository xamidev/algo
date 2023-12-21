#ifndef fifo_h
#define fifo_h

#define SIZE ((int)(5))

#include <stddef.h>

void affiche(int t[], size_t size, int wr, int rd, int n);
int compteElements(int t[], int size, int wr, int rd);
int ajoute(int t[], size_t size, int wr, int rd, int val);
int retire(int t[], size_t size, int wr, int rd, int ret[1]);


#endif
