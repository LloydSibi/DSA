#include<stdio.h>
int main() {
int math,phy,che;
printf("\nMaths Marks:");
 scanf("%d",&math);
printf("\nMarks in Physics:");
 scanf("%d",&phy);
printf("\nMarks in Chemistry:");
 scanf("%d",&che);
  if (math>=65 && phy>=55 && che>=50 && math+phy+che>=190)
  {
    printf("\nCongratulations you are eligible for admission");
  }
  else if (math+phy>=140)
  {
      printf("\nCongratulation you are eligible for admission");
  }
   else
   {
    printf("\nSorry you are not eligible for admission");
   }  
   return 0;
}
  
  











    
