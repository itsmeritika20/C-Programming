#include <stdio.h>
#include <string.h>

// data_type func_name(parameter_type parametername){
//     return value_of_type_data_type;
// }

void newPrint(char * char1)
{
    printf("The value is %s\n\n\n\n", char1);
}
int main()
{
    newPrint("Hello world");
    return 0;
}