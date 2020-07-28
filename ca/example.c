#include<stdio.h>
main()
{
    static int a[5];
    int j;
    puts("ENTER A STRING: ");
    gets(a);
    puts("REVERSE STRING IS: ");
    for(j=4;j>=0;j--)
        printf("%i",a[j]);
}
