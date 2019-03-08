#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include<unistd.h>
#include<sys/types.h>

int main() 
{ 
  char str[82];
  int fNum[82];

  while(scanf("%s",str)==1)
  { 
      int i; 
      for(fNum[0]=-1,i=1;i<strlen(str);i++)
      { 
          int index=fNum[i-1]+1 ; 
          while(str[index]!=str[i])
          { 
              index--;
              if(index==-1)break;
              index=fNum[index]+1;
          } 

          fNum[i]=index; 
      } 
      for(i=0;i<strlen(str);i++)printf("%3c",str[i]); 
      printf("\n"); 
      for(i=0;i<strlen(str);i++)printf("%3d",fNum[i]);
      printf("\n"); 
  } 
  return 0; 
}
