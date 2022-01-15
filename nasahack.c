// Hack into nasa code
#include <stdio.h>

int Func(char var)
{
    return var;
}

char g_Var;

int cprint(const string[])
{
    return printf(string);
}

int g_Return(const char var)
{
    return var;
}

static char g_var;

int main() 
{
    char Var = 1;
    
    if( g_Var < Var )
    {
        cprint("e\n");
        printf("%i\n%i", g_Return(4), Func(4));
    }
    return Var;
}
