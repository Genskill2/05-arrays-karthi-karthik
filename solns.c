/* Enter your solutions in this file */
#include <stdio.h>
int max(int a[],int l){
  int max_num=0;
  for(i=0;i<l;i++){
    if(a[i]>max_num){
      max_num=a[i];
    }
    return max_num;
  }
  
