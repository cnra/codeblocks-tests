#include <stdio.h>
#include <stdlib.h>
#include "main.h"


int main()
{
    int sonuc = 0;

    sonuc = SampleAddInt(3,5);
    printf("SampleAddInt: %d!\n", sonuc);

    sonuc = SampleAddIntExtern(3,5);
    printf("ExternAddInt: %d!\n", sonuc);

    sonuc = _Z11privateFunci(3);
    printf("privateFunc: %d!\n", sonuc);

    printf("Hello world!\n");
    SomeFunction("Test");
    return 0;
}
