#include<stdio.h>
#include<conio.h>
int main(){

int i,j,n;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
 {
for(j=0;j<n;j++)
{
	if(i+j>=n-1)
{printf("*");
}
else{printf(" ");
}



}
printf("\n");
}

	
}