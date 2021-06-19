/* Enter your solutions in this file */
#include <stdio.h>
int max(int a[],int l){
  int max_num=0;
  for(int i=0;i<l;i++){
    if(a[i]>max_num){
      max_num=a[i];
    }
  }
    return max_num;
  }
int min(int a[],int l){
  int min_num=a[0];
  for(int i=0;i<l;i++){
    if(a[i]<min_num){
      min_num=a[i];
    }
  }
  return min_num;
}
  
