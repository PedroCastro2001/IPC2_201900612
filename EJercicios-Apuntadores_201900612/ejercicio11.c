#include <stdio.h>

int main()
{
    int v=18, w=21;
    const int *ptr=&v;
    w=3;
    return 0;
}
