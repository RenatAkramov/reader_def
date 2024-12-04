#include "differentiator.h"



int main()
{
    CONVERSIONS* conversion = make_conversion();
    NODE* root = create_tree(conversion);
    DrawTree(root);
}


CONVERSIONS* make_conversion()
{
    CONVERSIONS* conversion = (CONVERSIONS*) calloc(1, sizeof(CONVERSIONS));
    conversion->p = 0;
    FILE* file_in = fopen("primer.txt", "r");
    fscanf(file_in, "%s",conversion->s);   
    printf("%s\n", conversion->s);
    fclose(file_in);
    return conversion;
}



