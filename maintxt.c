#include "txtfind.h"
#include <stdio.h>
#include <string.h>
int main()
{
    char t1[]="aba";
    char t2[]="aba";
    
    int ans = subString(t1,t2);
    if (ans==1)
    {
        printf("ture");
    }
    else
    {
        printf("false");
    }

    // char temp[LINE];
    // int index=0;
    // int i=0;
    // char firstWord[WORD];
    // char comperWord[WORD];
    // char aORb;
    // fgets(temp,LINE,stdin);
    // int flag=0;

    // while ((index<LINE) && (flag==0))
    // {
    //     if(temp[index]!=('\n') || temp[index]!=('\t') || temp[index]!=(' '))
    //     {
    //         firstWord[index]=temp[index];
    //         index++;
    //     }
    //     else
    //     {
         
    //      firstWord[index]='\0';
    //      index++;
    //      aORb=temp[index];
    //      flag=1;

    //     }
    // }

    // index=0;

    // if (aORb=='a')
    // {
    //     while (fgets(temp,LINE,stdin))
    //     {
    //       flag=0;
    //       for ( i = 0; i < LINE && (flag==0); i++)
    //       {
    //         if(temp[i]!=('\n') || temp[i]!=('\t') || temp[i]!=(' '))
    //         {
    //             comperWord[index]=temp[i];
    //             index++;
    //         }
    //         else
    //         {
    //             comperWord[index]='\0';
               
    //             flag=subString(comperWord,firstWord);

    //             if(flag==1)
    //             {
    //                 printf("%s",temp);
    //             }
    //             index=0;
    //         }
    //       }
    //     }
    // }

    // else //aORb=='b'
    // {
    //     //  while (fgets(temp,LINE,stdin))
    //     // {
    //     //   flag=0;
    //     //   for ( i = 0; i < LINE ; i++)
    //     //   {
    //     //     if(temp[i]!=('\n') || temp[i]!=('\t') || temp[i]!=(' '))
    //     //     {
    //     //         comperWord[index]=temp[index];
    //     //         index++;
    //     //     }
    //     //     else
    //     //     {
    //     //         comperWord[index]='\0';
    //     //         if((strlen(firstWord)==strlen(comperWord)) || (strlen(firstWord)+1==strlen(comperWord)))
    //     //         {
    //     //             flag=subString(firstWord,comperWord);
    //     //             if(flag==1)
    //     //             {
    //     //                 printf("%s",temp);
    //     //             }
    //     //             index=0;
    //     //         }
    //     //         else
    //     //         {
    //     //             index=0;
    //     //         }
    //     //     }
    //     //   }
    //     // }


    // }
    

    
}
 




