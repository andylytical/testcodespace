/* to use this, 
     - write a form that calls this program with 'action=' in the <form> tag
     - call getPostData() 
     - use getField(string) to access form information 

*/
#include <iostream>
#include "htmlform.h"

using namespace std;

int main()
{
  /// complete the http header
  cout << "Content-type: text/html\n\n";

  /// build a form object
  HTMLform monty;
  monty.getPostData(); /// reads the form and inits the object

  /// Show the debugging (optional)
  monty.debug();

  /// the output ('name' is in the html form that started this)
  cout << "Boo, " << monty.getField("name") << "!";

  /// access another field ('color' is in the html form)
  cout << "Your favorite color is " << monty.getField("color") << "!";
 
  return 0;
}
