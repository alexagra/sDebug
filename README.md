# sDebug
>Basic Debug library for  easier serial prints in arduino framework code












>EXAMPLE:



#define sDEBUG

#include "sDebug.h"


void setup()
{

    sDEBUG_BEGIN(x)
}


void loop()
{

    int test = 5;  
    
    PRINT(test);
}

>OUTPUT:

(millis):(function):(line) --> (var):(value)


12262   :  loop()  :  33   --> test :   5


