
#ifndef libraryFor7
#define libraryFor7

int product(int count, ...)
{
    int result = 1;
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++)
    {
        int arg = va_arg(args, int);
        result *= arg;
    }
    va_end(args);
    return result;
}
#endif