#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char sentence[10];
    int i;

    // Open file in append mode
    file=fopen("output.txt","a");

    if(file==NULL)
    {
        printf("File is not found.");
    }
    else
    {
        printf("Enter a sentence:\n");
        gets(sentence);

        // Write sentence character by character using putc
        for(i=0;sentence[i];i++)
        {
            putc(sentence[i],file);
        }
    }
    // Add newline at end
    putc('\n',file);
    fclose(file);

    printf("Data appended successfully.");

    return 0;
}
