
#include "Arduino.h"

#define sDEBUG
#include "sDebug.h"

int test = 5;
int cnt = 0;
void setup()
{

    sDEBUG_BEGIN(115200);
}

void loop()
{
    cnt++;

    PRINT(cnt);
    PRINT(test);
}