/* Enter your solutions in this file */
#include <stdio.h>
//max
int max(int a[],int l){
  int max_num=0;
  for(int i=0;i<l;i++){
    if(a[i]>max_num){
      max_num=a[i];
    }
  }
    return max_num;
  }
//min
int min(int a[],int l){
  int min_num=a[0];
  for(int i=0;i<l;i++){
    if(a[i]<min_num){
      min_num=a[i];
    }
  }
  return min_num;
}

//AVERAGE
float average(int a[],int l){
  int sum=0;
  for(int i=0;i<l;i++){
    sum+=a[i];
  }
  float avg=(float)sum/l;
  return avg;
}

int mode(int a[],int b){
int c=max(a,b);
//printf("vallue of c %d\n",c);
int count[c+1];
for(int m=0;m<=c;m++){
count[m]=m;
//printf("hi %d\n",count[m]);
}
for(int i=0;i<=c;i++){
//printf("value of count[%d]=%d\n",i,count[i]);
}
for(int i=0;i<=c;i++){
int l=0;
for(int j=0;j<b;j++){
if(count[i]==a[j]){
l++;
}
}
count[i]=l;
//printf("hi %d\n",l);
}
int k=max(count,c+1);
for(int z=0;z<=c;z++){
if(count[z]==k){
return z;}
}
}
