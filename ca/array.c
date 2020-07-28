void main()
{

    int i[10];
    char c[10];
    long l[10];
    printf("the type 'int' require %d bytes",sizeof(int));
    printf("the type 'char' requires %d bytes",sizeof(char));
    printf("the type long requires %d bytes",sizeof(long));
    ptintf("%d memoaryn locations are reserved for ten 'int' elements",sizeof(i));
    printf("%d memoary locations aare reserved for ten 'char' elements",sizeof(c));
    printf("%d memoary locations are reserved for ten 'long' elements",sizeof(l));
}
