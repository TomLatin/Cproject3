#include <string.h>
#include <stdio.h>
#include "txtfind.h"

int subString(char* comperWord,char* firstWord)
{
    size_t lenC =strlen(comperWord);
      printf("lenC: %ld \n",lenC);
    size_t lenF=strlen(firstWord);
    printf("lenF: %ld \n",lenF);
    int i=0,w=0;
    if (lenC<lenF)
    {
        printf("lenC<lenF");
        return 0;
    }

    for ( i = 0; i < lenC; i++)
    {
        printf("i: %d \n",i);
        if (comperWord[i]==firstWord[w])
        {
            w++;
            printf("w: %d \n",w);
            int j=i+1;
            printf("j: %d \n",j);
            int flag=1;
            for (j=i+1; j<=lenF && flag==1; j++)
            {
                if (comperWord[j]!=firstWord[w])
                {
                   flag=0;
                   printf("flag: %d \n",flag);
                }
                else
                {
                    printf("w: %d \n",w);
                    w++;
                }
            }

            if (w==lenF-1 && flag==1)
            {
                return 1;
            }

            else
            {
                w=0;
            } 
        }
    }
    return 0;
}

int similar(char* comperWord,char* firstWord)
{

}