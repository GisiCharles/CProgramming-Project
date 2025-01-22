#include <stdio.h>
#include <stdlib.h>

int main()
{
    double grades[] ={45,60,49,10,56,78,90,100,21,56};
    int i;

    for ( i=0; i< sizeof(grades)/sizeof(grades[0]); i++)
    {
        printf("Grade:%d.2lf\n",grades[i]);
    }

    return 0;
}
