#include<stdio.h>
int main(){
int ram,shyam,ajay;
printf("\nEnter age of Ram:");
scanf("%d",&ram);
printf("\nEnter Age of Shyam:");
scanf("%d",&shyam);
printf("\nEnter age of Ajay:");
scanf("%d",&ajay);
if(ram==shyam || shyam==ajay || ram==ajay  )
{
    printf("\nTwo of them having same age");
}
else if (ram<shyam && ram<ajay)
{
    printf("\nRam is the youngest");

}
else if(shyam<ram && shyam<ajay)
{
    printf("\nShyam is the youngest");
}
else if(ajay<ram && ajay<shyam)
{
    printf("\nAjay is the youngest");
}
 
else{
    printf("\nAll three are having same age");
}
 return 0;
}



   