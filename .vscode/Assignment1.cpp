#include <iostream>
#include <curses.h>
 
using namespace std;
 
void splashScreen ()
 
{
   // Splash Screen
   system("cls");
   cout << "\n";
   cout << "\tHello!!\n";
   cout << "\tMy name is:    Ian Schrader\n";
   cout << "\tMy age is:     17\n";
   cout << "GOODBYE!!\n";
   }
 
int main ()
 
{
splashScreen();
 
}
