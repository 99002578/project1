
#include <calculator_operations.h>

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}

long factorial(int operand1)
{
    int c;
    long r = 1;
for (c = 1; c <= operand1; c++)
    r = r * c;
return r;
 }
int hcf(int operand1, int operand2)
{
    
    int max = (operand1 > operand2) ? operand1 : operand2;

    while (1) {
        if (max % operand1 == 0 && max % operand2 == 0) {
            printf("The LCM of %d and %d is %d.", operand1, operand2, max);
            break;
        }
        ++max;
    }
    return 0;
}
