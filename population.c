//Population of town is 1100. Population increses 10% per year. WAP to determinne the population at end of each 10 year.
#include <stdio.h>  
int main()  
{  
    int population = 1100;  
    int years = 10;  
    float growthRate = 0.10;   
      
    printf("Year\tPopulation\n");  
      
      
    for(int year = 1; year <= years; year++) {  
        population += population * growthRate;  
        printf("%d\t%d\n", year, population);  
    }  
      
    return 0;  
}