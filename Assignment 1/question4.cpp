#include <iostream>
#include<string.h>
using namespace std;
int main()
{
   const int size = 80;
   char sentence[size];
   cout << "Please enter a sentence.\n";
   cin.getline(sentence, size);
   //Convert first character to upper case
   sentence[0] = toupper(sentence[0]);
   // Change every character after a space to Upper case
   for (int i = 1; i < size; i++)
   {
        if ( sentence[i - 1] == ' ' )
            sentence[i] = toupper( sentence[i] );
   }
   cout << sentence <<endl;

   return 0;
}