#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char line[81],ctr;
    int i,c,end=0,characters=0,words=0,lines=0;

    printf("KEY IN THE TEXT");
    printf("GIVE ONE SPACE AFTER EACH WORD WHEN COMPLETED, PRESS RETURN");

    while(end==0)
    {
        c=0;

        while((ctr=getchar()) !='\n')
            line[c++]=ctr;

        line[c]='\0';

        if(line[0]=='\0')
            break;
        else
        {
            words++;

            for(i=0;line[i]!='\0';i++)
                if(line[i]==' ' || line[i]=='\t')
                    words++;
        }
        lines=lines+1;
        characters=characters + strlen(line);
    }

    printf("\n");
    printf("Number of lines=%d",lines);
    printf("Number of words=%d",words);
    printf("Number of characters=%d",characters);
}
