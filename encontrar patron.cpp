

#include<iostream>
#include <conio.h>
#include<string.h>


#define maxPatron 45
#define maxTexto 500

using namespace std;

void Patron_FB(char[], char[], int, int);

int main(void)
{
    char Texto[maxTexto];
    char Patron[maxPatron];
    int p, T;
    cout << "INGRESE TEXTO NO MAYOR A 500 CARACTERES:";
    cin >> (Texto);
    p = strlen(Texto);
    do {
        cout << "\n\nPOR FAVOR INGRESE PATRON QUE DESEA BUSCAR:";
        cin >> Patron;
        T = strlen(Patron);

    } while (T > p);


    Patron_FB(Texto, Patron, p, T);




}


void Patron_FB(char texto[], char patron[], int n, int m)
{
    int i, j, k, cont = 0;
    char temp[100];
    for (i = 0; i <= n; i++)
    {
        for (j = i, k = 0; j < m; j++, k++)
            temp[k] = texto[i + k];
        temp[k] = '\0';
        if (strcmp(patron, temp) == 0)
        {
            cout << "\n POSICION  : " << i << "\n";
            cont++;
        }
        m++;
    }
    cout << "\n\nREPETICIONES :" << cont << endl;

}