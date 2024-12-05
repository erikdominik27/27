#include <stdio.h>

int sumproper(int number);

int main()
{
    int number;
    printf("Please enter a number: ");
    scanf("%d", &number);
    printf("the sum of all proper divisors is: %d", sumproper(number));
}

int sumproper(int number)
{
    int sum = 0;
    for (int i = 1; i < number; i++){
        if ( number % i == 0){
            sum +=i;
        }
    }
    return sum;
}