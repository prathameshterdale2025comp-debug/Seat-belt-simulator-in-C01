#include<stdio.h>
int main(){
int a;
printf("Welcome dear passenger\n");
printf("Enter 1 or 0 to plug in and plug out the seat belt\n");
scanf("%d",&a);
if(a==1){
printf("Allright start your ride");
}
else{
printf("Please plug in the seat belt");
}
return 0;
}
