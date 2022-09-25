/********************************************************************************
* calculator.c: Demonstration av switch-satsen via en miniräknaren.
*               Notera att switch-satsen hade kunnat ersättas med if-, 
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
*               Notera att switch-satsen är något med verbos, men väldigt
*               läsbar, särskilt jämfört med nästlade if-satser (se else if-
*               satsen för division ovan). Därmed används ofta switch-satser
*               för så kallade tillståndsmaskiner, där mycket nästlade if-,
*               else if- och else-satser förekommer. Annars används primärt
*               if-, else if- och else-satser.
********************************************************************************/
#include <stdio.h>

/********************************************************************************
* calculate: Beräknar summan, diffensen, produkten eller kvoten av två flyttal
*            x och y utefter angiven operand.
*
*            - x: Det första flyttalet.
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
*       3.4 och 6.8. Även division med 0 samt försök av beräkning med en 
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