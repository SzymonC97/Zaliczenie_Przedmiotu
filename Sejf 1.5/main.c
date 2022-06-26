#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define rozmiar 4
int a;
int main()
{

    //tablica do nadania hasla
    int N_haslo [rozmiar];
    //tablica hasla
    int haslo [rozmiar];
    //licznik do petli nowe haslo
    int i;
    //licznik do petli haslo
    int j;
    int T=0,timer=10;


    //powitanie
    puts("                                             ************");
    printf("                                             *Sejf v1.5 *\n");
    puts("                                             ************");
    puts("");
    puts("----------------------");
    printf("Nadaj 4 znakowe haslo: \n");
    puts("----------------------");

    //pobranie hasla:
    for(i=0;i<rozmiar;i++)
    {
        scanf("%d",&N_haslo[i]);
    }
        system("cls");
     //LOGO
    puts("                                             ************");
    printf("                                             *Sejf v1.5 *\n");
    puts("                                             ************");
    puts("");
    //wypisanie nowego hasla
    puts("");

    puts("----------------------");
    printf("Nowe haslo to: ");

    for(i=0;i<rozmiar;i++)
   {
       printf("%d ",N_haslo[i]);
   }
    puts("\n----------------------");

   puts("");
    //wcisnij 1 zeby zamknac sejf

char close;

    puts("");
    puts("--------------------------");
    printf("wcisnij 1 aby zamknac sejf \n");
    scanf("%s",&close);
    switch(close)
    {
    case'1':
        puts("---------------");
        printf("Sejf zamkniety \n \n");
        puts("---------------");
        a=1;
        break;
    default:
        printf("wcisniety zly przycisk zrestartuj sejf \n");
        break;
    }
    sleep(2);

    system("cls");
     //LOGO
    puts("                                             ************");
    printf("                                             *Sejf v1.5 *\n");
    puts("                                             ************");
    puts("");

//warunek konczacy program w przypadku wcisniecia zlego klawisza
  if(!a)
    {
     return EXIT_FAILURE;
    }
    if(a=1)
{
    //prosba o wpisanie poprawnego hasla
    puts("------------------------------");
  printf("Aby otworzyc sejf wpisz haslo: \n");
}
    for(j=0;j<rozmiar;j++)
    {
        scanf("%d",&haslo[j]);
    }

    //sprawdzanie hasla:
    if(N_haslo[0]!=haslo[0] || N_haslo[1]!=haslo[1] || N_haslo[2]!=haslo[2] || N_haslo[3]!=haslo[3])
    {
        printf("Zle haslo \n");
    }
    else
    {
        puts("----------------------------");
        printf("Haslo poprawne: sejf otwarty");
        puts("\n----------------------------");
    }
    sleep(2);
    system("cls");

    for(T=0;T<timer;T++)
    {
         //LOGO
    puts("                                             ************");
    printf("                                             *Sejf v1.5 *\n");
    puts("                                             ************");
    puts("");


        printf("Autor: Cywinski Szymon \n");
        printf("Ekran wylaczy sie po: \n");
        printf("%d s",timer-T);
        sleep(1);
        system("cls");
    }


    return 0;
}


