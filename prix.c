#include <stdio.h>
#include <time.h>

int main()
{
  int essai;
  int nb;
  int nb1;
  int nb2;
  int choix;
  int fin;

  srand(time(null));

  nb = rand()%100;

  scanf("%d", &nb1);
  scanf("%d", &nb2);

  if (nb < nb1)
  {
    printf("Superieur");
  }
  else if (nb > nb2)
  {
    printf("Inferieur");
  }

  fin = 0;
  essai = 8;
  do
  {
    printf("Votre nombre:");
    scanf("%d", &choix);

      if (choix > nb)
      {
        printf("Superieur");
        essai--;
      }
      if (choix < nb)
      {
        printf("Inferieur");
        essai--;
      }
      if (choix == nb)
      {
        printf("Trouve");
        fin = 1;
      }
  }while(essai > 0 || fin == 0);
}
