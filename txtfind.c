#include <string.h>
#include <stdio.h>
#include "txtfind.h"

int subString(char* comperWord,char* firstWord)
{
    int lenC =strlen(comperWord);
    int lenF=strlen(firstWord);

    int i=0,count=0;
    if (lenC<lenF)
    {
        return 0;
    }

    for ( i = 0; i < lenC; i++)
    {
        if (comperWord[i]==firstWord[0])
        {
            int j=0;
            for (j=0; j<lenF ; j++)
            {
                if (comperWord[i+j]==firstWord[j])
                {
                    count++;
                }
      
            }

            if (count==lenF)
            {
                return 1;
            }

        }
        count=0;
    }
    return 0;
}

int similar(char* comperWord,char* firstWord)
{

}
