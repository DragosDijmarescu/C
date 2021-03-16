#include <stdio.h>


//function declaration
int func();

int main() {

   //function call
   int i = func();
   printf("%d",i);

}

//function definition
int func()
{
   return 3%2;
}
