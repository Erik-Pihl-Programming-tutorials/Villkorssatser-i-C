/********************************************************************************
* calculator.c: Demonstration av switch-satsen via en minir�knaren.
*               Notera att switch-satsen hade kunnat ers�ttas med if-, 
*               else if- samt else-satser enligt nedan:
* 
*               if (c == '+')
*               {
*                  printf("%lg + %lg = %lg\n", x, y, x + y);
*               }
*               else if (c == '-')
*               {
*                  printf("%lg - %lg = %lg\n", x, y, x - y);
*               }
*               if (c == '*')
*               {
*                  printf("%lg * %lg = %lg\n", x, y, x * y);
*               }
*               else if (c == '/')
*               {
*                  if (y == 0)
*                  {
*                     printf("Cannot divide by 0!\n\n");
*                  }
*                  else
*                  {
*                     printf("%lg / %lg = %lg\n", x, y, x / y);
*                  }
*               }
*               else
*               {
*                  printf("Invalid operand!\n");
*               }
* 
*               Notera att switch-satsen �r n�got med verbos, men v�ldigt
*               l�sbar, s�rskilt j�mf�rt med n�stlade if-satser (se else if-
*               satsen f�r division ovan). D�rmed anv�nds ofta switch-satser
*               f�r s� kallade tillst�ndsmaskiner, d�r mycket n�stlade if-,
*               else if- och else-satser f�rekommer. Annars anv�nds prim�rt
*               if-, else if- och else-satser.
********************************************************************************/
#include <stdio.h>

/********************************************************************************
* calculate: Ber�knar summan, diffensen, produkten eller kvoten av tv� flyttal
*            x och y utefter angiven operand.
*
*            - x: Det f�rsta flyttalet.
*            - y: Det andra flyttalet.
*            - c: Matematisk operand (+, -, * eller /).
********************************************************************************/
void calculate(const double x,
               const double y,
               const char c)
{
   switch (c)
   {
      case '+':
      {
         printf("%lg + %lg = %lg\n", x, y, x + y);
         break;
      }
      case '-':
      {
         printf("%lg - %lg = %lg\n", x, y, x - y);
         break;
      }
      case '*':
      {
         printf("%lg * %lg = %lg\n", x, y, x * y);
         break;
      }
      case '/':
      {
         if (y == 0)
         {
            printf("Cannot divide by 0!\n\n");
         }
         else
         {
            printf("%lg / %lg = %lg\n", x, y, x / y);
         }

         break;
      }
      default:
      {
         printf("Invalid operand!\n\n");
         break;
      }
   }

   return;
}

/********************************************************************************
* main: Testar addition, subtraktion, multiplikation samt division av flyttal
*       3.4 och 6.8. �ven division med 0 samt f�rs�k av ber�kning med en 
*       felaktig operand ('0') testas.
********************************************************************************/
int main(void)
{

   calculate(3.4, 6.8, '+');
   calculate(3.4, 6.8, '-');
   calculate(3.4, 6.8, '*');
   calculate(3.4, 6.8, '/');

   calculate(3.4, 6.8, '0');
   calculate(3.4, 0, '/');
   return 0;
}