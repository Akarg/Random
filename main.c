#include <stdio.h>

// Wypisz przywitanie w kilku jezykach
void hej(char* who);

int main()
{
   hej("adrian");
}

// Funkcje pomocnicze

void hej(char* who) 
{
        printf("hello %s\n", who);
        printf("witaj %s\n", who);
}
