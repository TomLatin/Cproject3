#include <string.h>
#include <stdio.h>
#include "txtfind.h"

int  print_similar_words(char firstWord[],char comperWord[])
{
    
}

int print_lines(char firstWord[],char comperWord[])
{
    int lenF=strlen(firstWord);
    int lenC=strlen(comperWord);
    if(lenC<lenC)
    {
        return 0;
    }
    else if(lenF==lenC)
    {
        int i=0;
        int len=strlen(firstWord);
        for ( i = 0; i < len; i++)
        {
           if (firstWord[i]!=comperWord[i])
           {
              return 0;
           }
        }
        
        return 1;
    }
    else
    {
        int i=0;
        int count=0;
        int ans=0;
        for ( i = 0; i < lenC; i++)
        {
            if (comperWord[i]==firstWord[0])
            {
                count++;
                int j=1;
                i++;
                for (j=1; j < lenF; j++)
                {
                  if (comperWord[i]!=firstWord[j])
                  {
                    ans= 0;
                  }
                  
                }

                ans= 1;
                
            }
        }
        
     
        
    }
    
}

