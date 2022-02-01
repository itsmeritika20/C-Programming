#include <stdio.h>
#include <string.h>
// data_type func_name(parameter_type parametername){
//     return value_of_type_data_type;
// }

void newPrint(char * char1)
{
    printf("The value is %s\n\n\n\n", char1);
}
float average(float a, float b)
{
    return (a+b)/2;
}
float main()
{
    printf("The average of 100 and 299 is %f" , average(100,299));
    return 0;
}