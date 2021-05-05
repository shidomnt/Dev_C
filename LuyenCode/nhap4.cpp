#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[1000] = "HackerRank ";
    int a;
    double b;
    char string[100];
    scanf("%d",&a);
    scanf("%lf",&b);
    fflush(stdin);
    scanf("%[^\n]",string);
    strcat(s,string);
    printf("%d\n",a+i);
    printf("%.1lf\n",b+d);
    puts(s);
    
    // Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}