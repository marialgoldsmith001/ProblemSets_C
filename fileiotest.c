#include <stdio.h>

int main(void)
{
    char* line;
    FILE* file = fopen("large", "r");
    
    if(file == NULL)
        printf("NULL\n");
    else
    {
        fclose(file);
    }
}
