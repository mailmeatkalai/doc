#include <stdio.h>

struct  ABC{
    int a;
	char e;
    float b;

};
int main()
{
    struct ABC *ptr = NULL;
    ptr++;
    printf("Size of structure is: %d",ptr);
    return 0;
}