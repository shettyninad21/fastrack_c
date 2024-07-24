// 1. FOR 1 CHARACTER

/*#include <stdio.h>
//#include <conio.h>
int main ()
{
    char upr, lwr; // declare variables
    int ascii;

    // convert in lower case
    printf (" Enter the Upper Case Character: ");
    scanf (" %c", &upr);
    ascii = upr + 32;
    printf (" %c character in Lower case is: %c", upr, ascii);


       // convert in upper case
    printf (" \n Enter the Lower Case Character: ");
    scanf (" %c", &lwr);
    ascii = lwr - 32;
    printf (" %c character in the Upper case is: %c", lwr, ascii);


          return 0;
}*/


// 2. TO CONVERT UPPER TO LOWER IN "STRING" USING "RECURSION FUNCTION


#include <stdio.h>
#include <conio.h>
#include <string.h>

int upr_lwr (char *str)
{
    static int i = 0;
    if (str[i])
    {

    /* If statement check the enter character's ASCII value is more than 65 and less than equal to 90. */
        if ( str[i] >= 65 && str[i] <= 90)
        str[i] = str[i] + 32; // add 32 to string character to change into lowercase
        i++;
        upr_lwr(str);
    }
}
int main ()
{
    char str[100]; // declare the size of character array

    printf (" Enter the upper case string: ");
    gets (str); // use gets() function to take string

    // call upr_lwr() function
    upr_lwr (str);

    printf (" \n The lowercase string is: %s", str);
}
