//swapping using temporary variable 
// swapping without using temporary variable
#include<stdio.h>
int main() {
	int a,b,temp;
	printf("Enter value of a: ");
	scanf("%d",&a);
	printf("Enter value of b: ");
	scanf("%d",&b);
	a=temp;
	temp=b;
	b=a;
}
