#include <stdio.h>
#include <string.h>

char lang1[1000][30], lang2[1000][30], sentence[30];

int main()
{
    int n; 
    printf("enter n: "); 
    scanf("%d", &n);
    printf("language 1: language 2:\n");
    for (int i=0; i<n; i++)
    {
        scanf("%s", lang1[i]); 
        scanf("%s", lang2[i]);
    }
    printf("\nenter sentence: "); 
    char x = getchar();
    fgets(sentence, 30, stdin);
    int counter=0; 
    int flag=1, start=0, end=0;
    for (int z=0; z<n; z++)
    {
        counter=0;
        flag=1;
        for (int k=0; k<30; k++)
        {
            if (sentence[k] == '\n')
                sentence[k] = 0;
            if (sentence[k] != lang1[z][k])
                counter ++;
        }
        if (counter == 0)
        {
            if (strlen(lang1[z]) <= strlen(lang2[z]))
                flag=1;
            else
                flag=2;
            if (flag == 1)
                printf ("%s ", lang1[i]);
            else 
                printf ("%s ", lang2[i]);
        }
    }
    return 0;
}