#include <stdio.h>
#include <string.h>
// data_type func_name(parameter_type parametername){
//     return value_of_type_data_type;
// }

void newPrint(char * char1)
{
    printf("The value is %s\n\n\n\n", char1);
}
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    printf("%d" , sum(100,299));
    return 0;
}