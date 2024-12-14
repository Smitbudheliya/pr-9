#include <stdio.h>

void main()
{
    FILE *evenfile, *oddfile;

    evenfile = fopen("even_number.txt", "w");
    oddfile = fopen("odd_number.txt", "w");


    for (int i = 50; i <= 70; i++){
        if (i % 2 == 0)
            fprintf(evenfile, "%d\n ", i);
        
        else
            fprintf(oddfile, "%d\n", i);
        
    }
     fclose(evenfile);
     fclose(oddfile);
}
