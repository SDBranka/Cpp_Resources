#include <iostream.h>
#include <fstream.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int main()
{
   clrscr();

   fstream File("CP-07.txt", ios::in | ios::nocreate);

   if (!File)
   {
      cout << "Unable to open the input file." << endl;
      cout << "Press any key to exit." << endl;

      getch();
      exit(EXIT_FAILURE);
   }

   char Data[100] = {NULL};

   do
   {
      strset(Data, NULL);

      File.getline(Data, 80, '\n');

      if (strcmpi(Data, "0") == 0)
         break;

      int flag = 0;
      int name_length = strlen(Data);

      int code_array[100] = {0};

      for (int count_1 = 0; count_1 < name_length; count_1++)
      {
         if (!isalpha(Data[count_1]))
         {
            flag = 1;

            break;
         }

         else
         {
            Data[count_1] = toupper(Data[count_1]);

            code_array[count_1] = (int(Data[count_1]) - 64);
         }
      }

      if (!flag)
      {
         int lucky_number = 0;

         for (int count_2 = 0; count_2 < name_length; count_2++)
            lucky_number += code_array[count_2];

         char Lucky_number[100] = {NULL};

         while (lucky_number > 9)
         {
            strset(Lucky_number, NULL);
            itoa(lucky_number, Lucky_number, 10);

            lucky_number = 0;

            int number_length = strlen(Lucky_number);

            char Digit[5] = {NULL};

            for (int count_3 = 0; count_3 < number_length; count_3++)
            {
               Digit[0] = Lucky_number[count_3];

               lucky_number += atoi(Digit);
            }
         }

         cout << lucky_number << endl;
      }

      else
         cout << "invalid" << endl;
   } while (1);

   File.close();

   getch();
   return 0;
}
