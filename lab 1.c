#include <stdio.h>
#include <limits.h>

int main(void)
{
    int anInteger;
    unsigned aUnsignedInteger;
    short int aShortInteger;
    unsigned short int aUnsignedShortInteger;
    long int aLongInteger;
    unsigned long int aUnsignedLongInteger;
    long long int aLongLongInteger;
    unsigned long long aUnsignedLongLongInteger;
    printf("Size of Integer: %llu bytes\n", sizeof(anInteger));
    printf("Size of unsigned Integer:%llu bytes\n", sizeof(aUnsignedInteger));
    printf("Size of short Integer: llu bytes\n", sizeof(aShortInteger));
    printf("Size of unsigned Short Integer: %llu bytes\n", sizeof(aUnsignedShortInteger));
    printf("Size of Long integer: %llu bytes\n", sizeof(aLongInteger));
    printf("Size of Unsigned Long Integer:%llu bytes\n",sizeof(aUnsignedLongInteger));
    printf("Size of Long Long Integer: %llu bytes\n", sizeof(aLongInteger));
    printf("Size of Unsigned Long Long Integer: %llu bytes\n",sizeof(aUnsignedLongLongInteger));

        return 0;

}

