#include<stdio.h>
int main()
{
int i,j,number;
  printf("Enter the Number :");
  scanf("%d",&number);
  int fi[number];
  fi[0]=0;
  fi[1]=1;
  for(i=2;i<number;i++)
  {
      fi[i]=fi[i-2]+fi[i-1];
  }
  for(i=0;i<number;i++)
  {
      printf("%4d",fi[i]);
  }
}