#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *decodage(char *mess , int n){
    int i;
    for(i=0;i<n;i++){
            if (mess[i]>=40 && mess[i]<=65){
                     mess[i]=mess[i]-40;
        mess[i]=(mess[i]*9+20)%26;
        mess[i]=mess[i]+97;
        }
         else if  (mess[i]<=39 && mess[i]>=14){
                     mess[i]=mess[i]-14;
        mess[i]=(mess[i]*9+20)%26;
        mess[i]=mess[i]+65;
        }
        else if  (mess[i]<=13 && mess[i]>=4){
                     mess[i]=mess[i]-4;
        mess[i]=(mess[i]*7+2)%10;
        mess[i]=mess[i]+48;
        }
        else if  (mess[i]<=138 && mess[i]>=123){
                     mess[i]=mess[i]-48;
        mess[i]=(mess[i]*4+14)%15;
        mess[i]=mess[i]+32;
        }
        else if  (mess[i]<=145 && mess[i]>=139){
                     mess[i]=mess[i]-139;
        mess[i]=(mess[i]*5+1)%6;
        mess[i]=mess[i]+123;
        }
        else{
            printf("ANALYSING\n\n");
        }
        }
    return mess;
    }