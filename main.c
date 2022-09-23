// tiempo de dedicacion: 2 horas
// trate de crear un menu donde el usuario pudiera escoger el tipo de alien que deseaba, pero al momento de imprimir me mostraba todo los aliens, deje comentariado como lo habia planteado en codigo 

//declaracion librerias
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
// funcion impresion con parpadeo
static char *squid[]={
"   ██   ",
"  ████  ",
" ██████ ",
"██ ██ ██",
"████████",
"  █  █  ",
" █ ██ █ ",
"█ █  █ █",
};
static char *squidalien[]={
"   ██   ",
"  ████  ",
" ██████ ",
"██ ██ ██",
"████████",
" █ ██ █ ",
"█      █",
" █    █ ",
};
static char *crab[]={
"    ████    ",
" ██████████ ",
"████████████",
"███  ██  ███",
"████████████",
"   ██  ██   ",
"  ██ ██ ██  ",
"██        ██",
};
static char *crab2[]={
"    ████    ",
" ██████████ ",
"████████████",
"███  ██  ███",
"████████████",
"  ███  ███  ",
" ██  ██  ██ ",
"  ██    ██  ",
};
static char *octopus[]={
"  █     █  ",
"   █   █   ",
"  ███████  ",
" ██ ███ ██ ",
"███████████",
"█ ███████ █",
"█ █     █ █",
"   ██  ██  ",
};
static char *octopus2[]={
"  █     █  ",
"█  █   █  █",
"█ ███████ █",
"███ ███ ███",
"███████████",
"  ███████  ",
"   █   █   ",
"  █     █  ",
};

void Red()    { printf("\033[1;31m");}
void gotoxy( int x, int y )
{
printf( "%c[%d;%df", 0x1B, y, x );

} 
void Green()  { printf("\033[1;32m"); }
int main()
{ 
  int x , y;
  int del; // El período de retraso
  int opci;
  int contar=0;
  char estado = 'v' ;
  /* printf( "\n   1. Alien Squid");
   printf( "\n   2. Alien Crab");
   printf( "\n   3. Alien Octopus." );
   printf( "\n   4. Salir." );
   printf("Ingresa la opcion del alien que desea ver: ");
   scanf("%i",&opci); */
   printf("Ingresa el tiempo de espera (en segundos): ");
   scanf("%i",&del); 
   printf("Ingresa la posicion en x del alien: ");
   scanf("%i",&x); 
   printf("Ingresa la posicion en y del alien: ");
   scanf("%i",&y); 
   /* switch ( opci )
    {
    case 1:*/
    do {
      if(contar = 5)
            {
              for(int i=0; squid[i]!='\0';i++)
              {
                 //impresion
                  Red();
                  printf("%s" "\n",squid[i]);
                  gotoxy( x, y);
               }
              sleep(del);// tiempo de demora
              system("clear");
              sleep(del);
            }
        
            if(contar = 10)
            {
               for(int j=0; squidalien[j]!='\0';j++)
               {
                 //impresion
                  Green();
                  printf("%s" "\n",squidalien[j]);
                  gotoxy( x, y);
                }
                sleep(del);// tiempo de demora
                system("clear");
                sleep(del);
            }  
            contar++;
          }while (estado ='v');
/*break;
   case 2:
    do {
      if(contar == 5)
            {
              for(int j=0; crab[j]!='\0';j++)
              {
                 //impresion
                  Red();
                  printf("%s" "\n",squid[j]);
                  gotoxy( x, y);
               }
              sleep(del);// tiempo de demora
              system("clear");
            if(contar == 10)
            {
               for(int m=0; crab2[m]!='\0';m++)
               {
                 //impresion
                  Green();
                  printf("%s" "\n",squid2[m]);
                  gotoxy( x, y);
                }
                contar=0;
                sleep(del);// tiempo de demora
                system("clear");
            }  
          }
          contar++;
        }while (estado =='v');
    break;
    case 3:
    do {
      if(contar == 5)
            {
              for(int s=0; octopus[s]!='\0';s++)
              {
                 //impresion
                  Red();
                  printf("%s" "\n",squid[s]);
                  gotoxy( x, y);
               }
              sleep(del);// tiempo de demora
              system("clear");
            if(contar == 10)
            {
               for(int r=0; octopus2[r]!='\0';r++)
               {
                 //impresion
                  Green();
                  printf("%s" "\n",squid2[r]);
                  gotoxy( x, y);
                }
                contar=0;
                sleep(del);// tiempo de demora
                system("clear");
            }  
          }
          contar++;
        }while (estado =='v');
    break;
*/
        return 0;
} 
