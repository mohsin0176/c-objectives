#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main () {
    
   char c = 'c';

   switch(c) 
   {
      case 'a' :
         cout << "a" << endl; 
         break;
      case 'b' :
      case 'c' :
         cout << "c" << endl;
         break;
      case 'd' :
         cout << "d" << endl;
         break;
      case 'e' :
         cout << "e" << endl;
         break;
      default :
         cout << "Invalid " << endl;
   }
  
 
   return 0;
}