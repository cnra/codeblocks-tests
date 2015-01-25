#include <stdio.h>
#include <stdlib.h>

int SampleAddInt(int i1, int i2);
extern int SampleAddIntExtern(int i1, int i2);

int main()
{
    int sonuc = 0;

    sonuc = SampleAddInt(3,5);
    printf("SampleAddInt: %d!\n", sonuc);

    sonuc = SampleAddIntExtern(3,5);
    printf("ExternAddInt: %d!\n", sonuc);

//    sonuc = SampleAddIntStatic(3,5);
//    printf("StaticAddInt: %d!\n", sonuc);


    return 0;
}
