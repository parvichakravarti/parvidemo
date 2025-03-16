#include<stdio.h>
int main()
{
	char name[50],order[50],feedback[50],choice;
	int cupsoforder,priceoforder=50;
	printf("welcome to coffeemart : \n");
	printf("what is your name : \n");
	gets(name);
	printf("hii %s what do you want to order? \nThis is what we are serving today\n",name);
	printf("tea\n");
	printf("coffee\n");
	printf("frenchfries\n");
	printf("potatochips\n");
	gets(order);
	printf("How many cups of %s would you like to have \n",order);
	scanf("%d",&cupsoforder);
	printf("%s, your order of %d cups of %s will be delivered soon\n",name,cupsoforder,order);
	printf("you have to pay %d for %d cups of %s\n",cupsoforder*priceoforder,cupsoforder,order);
	printf("sir did you like our service : use 'y'for yes and 'n' for no\n");
	choice=getchar();
	choice=getchar();
	printf("your choice is %c\n",choice);
	printf("Thank You");
	return 0;
}
