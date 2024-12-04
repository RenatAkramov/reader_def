#include "differentiator.h"



int main()
{


    CONVERSIONS* conversion = (CONVERSIONS*) calloc(1, sizeof(CONVERSIONS));
    conversion->p = 0;
    FILE* file_in = fopen("primer.txt", "r");
    char* txt;
    fscanf(file_in, "%s",txt);   
    conversion->s = txt;
    printf("%s\n", conversion->s);
    fclose(file_in);

    //CONVERSIONS* conversion = make_conversion();
    NODE* root = create_tree(conversion);
    DrawTree(root);
}


CONVERSIONS* make_conversion()
{
    CONVERSIONS* conversion = (CONVERSIONS*) calloc(1, sizeof(CONVERSIONS));
    conversion->p = 0;
    FILE* file_in = fopen("primer.txt", "r");
    char* txt;
    fscanf(file_in, "%s",txt);   
    conversion->s = txt;
    printf("%s\n", conversion->s);
    fclose(file_in);
    return conversion;
}



