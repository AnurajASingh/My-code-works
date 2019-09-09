#include<stdio.h>
#include<math.h>
void octal_to_deci();
void deci_to_octal();
int main()
{ 	int choice;
	printf("1. Octal to Decimal\n2. Deciaml to Octal\n:-");
	scanf("%d", &choice);
	if(choice==1)
		octal_to_deci();
	else if(choice == 2)
		deci_to_octal();
	return 1;
}

void octal_to_deci()
{	int octal, deci, dig, pw=0;
	printf("Enter the octal number :-");
	scanf("%d", &octal);
	while(octal!=0)
	{	dig=octal%10;
		deci=dig*pow(8,pw)+deci;
		pw++;
		octal=octal/10;
	}
	printf("Decimal = %d", deci);
	
}
 
void deci_to_octal()
{	int deci, dig, octal=0, pw=0;
	printf("Enter the Decimal number:-");
	scanf("%d", &deci);
	while(deci!=0)
	{	dig=deci%2;
		octal=dig*pow(10,pw)+octal;
		pw++;
		deci=deci/2;
	}
	printf("octal = %d", octal);

}


