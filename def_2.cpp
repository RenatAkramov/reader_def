#include <stdio.h>
#include <stdlib.h>

int GetP();
int GetE();
int GetT();
int GetG();
int GetN();
int SyntaxERROR();

const char* s = "7*(5-1)/2$";
int p = 0;
int main()
{
    GetG();
}

int GetP()
{
    if (s[p] == '(')
    {
        p++;
        int val = GetE();
        if (s[p] != ')')
        {
            SyntaxERROR();
        }
        p++;
        return val;
    }
    else
    {
        return GetN();
    }
}

int GetE()
{
    int val = GetT();
    while (s[p] == '+' || s[p] == '-')
    {
        int op = s[p];
        p++;
        int val_2 = GetT();
        if (op == '+')
        {
            val += val_2;
        }
        else
        {
            val -= val_2;
        }
    }
    return val;
}

int GetN()
{
    int val = 0;
    if ('0' <= s[p] && s[p] <= '9')
    {
        val = s[p] - '0';
        p++;
        return val;
    }
    else return SyntaxERROR();
   
}

int GetT()
{
    int val = GetP();
    while (s[p] == '*' || s[p] == '/')
    {
        int op = s[p];
        p++;
        int val_2 = GetP();
        if (op == '*')
        {
            val *= val_2;
        }
        else
        {
            val = val / val_2;
        }
    }
    return val;
}

int GetG()
{
    printf("Start\n");
    int val = GetE();
    if (s[p] == '$')
    {
        printf("val: %d", val);
        p++;
        return 1;
    }
}

int  SyntaxERROR()
{
    printf("ERROR");
    exit(0);
}
