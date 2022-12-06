#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void) {
    FILE * ptr;
    char c;
    long data[1000];
    int small[4];
    char str[100];
    unsigned long sum=0;
    // Opening file in reading mode
    ptr = fopen("/Users/saqr/Downloads/C/elephant.txt", "r");
    
    int i=0,counter=0;
    int flag=0;
    
    while((c = fgetc(ptr))!=EOF)  //c=getchar()
    {
        if(c>='0'&& c<='9'){
            printf("%d\t",i);printf("%d\n",small[i]=(int)c-'0');
            ++i;flag=0;
            if(i==4){
                counter+=1;i=0;
                sprintf(str, "%d%d%d%d", small[0], small[1],small[2],small[3]);
                long result=strtol(str, NULL, 10);printf("%ld\n",result);
                data[(counter-1)]=result;
                    }
        }
        else{
            //if(flag==0){counter+=1;i=0;//char ans="";
                //for(int j=0;j<4;++j){ans+=(char)small[j];printf("%d",small[j]);}
             //   sprintf(str, "%d%d%d%d", small[0], small[1],small[2],small[3]);
             //   long result=strtol(str, NULL, 10);printf("%ld\n",result);
             //   data[(counter-1)]=result; //data[(i/4)]=atoi(small[4]);
             //   flag=1;
            //}
            
        }
    }
    fclose(ptr);
    
    for(int j=0;j<1000;j++){
    printf("The weight of Elephant seal No %d is %ld\n",1+j,data[j]);
        sum=sum+data[j];
    //printf("The accumulated sum :%ld\n",sum);
    }
    printf("The average weight for the population of elephant seals is %ld \n",sum/1000);
    return ;
}
