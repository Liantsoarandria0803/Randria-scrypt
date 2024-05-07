#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * codage( char * mess,int n){
    int i;
    for(i=0;i<n;i++){
            if (mess[i]>=97 && mess[i]<=122){
                     mess[i]=mess[i]-97;
        mess[i]=(mess[i]*3+18)%26;
        mess[i]=mess[i]+40;
        }
         else if  (mess[i]<=90 && mess[i]>=65){
                     mess[i]=mess[i]-65;
        mess[i]=(mess[i]*3+18)%26;
        mess[i]=mess[i]+14;
        }
        else if  (mess[i]<=57 && mess[i]>=48){
                     mess[i]=mess[i]-48;
        mess[i]=(mess[i]*3+4)%10;
        mess[i]=mess[i]+4;
        }
        else if  (mess[i]<=47 && mess[i]>=32){
                     mess[i]=mess[i]-32;
        mess[i]=(mess[i]*4+4)%15;
        mess[i]=mess[i]+123;
        }
        else if  (mess[i]<=64 && mess[i]>=58){
                     mess[i]=mess[i]-58;
        mess[i]=(mess[i]*5+1)%6;
        mess[i]=mess[i]+139;
        }
        else{
            printf("ANALYSING...\n\n");
        }
        }
    return mess;
}