#include <stdio.h>
#include <string.h>

int glo = 76;
// data_type func_name(parameter_type parametername){
//     return value_of_type_data_type;
// }

void newPrint(char * char1)
{
    printf("The value is %s\n\n\n\n", char1);
}

int sum(int a, int b)
{
    return a+b;
}

float average(float a, float b)
{
    return (a+b)/2;
}
int main()
{
    int glo = 87;
    printf("Glo is %d",glo);
    return 0;
}