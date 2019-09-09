#include<stdio.h>
#include<math.h>
void octal_to_bina();
void bina_to_octal();
int main()
{ 	int choice;
	printf("1. Octal to Binary\n2. Binary to Octal\n:-");
	scanf("%d", &choice);
	if(choice==1)
		octal_to_bina();
	else if(choice == 2)
		bina_to_octal();
	return 1;
}
void octal_to_bina()
{	int octal, deci, dig, pw=0, bina=0;
	printf("Enter the octal number :-");
	scanf("%d", &octal);
	while(octal!=0)
	{	dig=octal%10;
		deci=dig*pow(8,pw)+deci;
		pw++;
		octal=octal/10;
	}
	pw=0;
	while(deci!=0)
	{	dig=deci%2;
		bina=dig*pow(10,pw)+bina;
		pw++;
		deci=deci/2;
	}
	printf("Binary = %d", bina);

}

void bina_to_octal()
{	int deci=0, dig, bina, pw=0, octal=0;
	printf("Enter the number:-");
	scanf("%d", &bina);
	while(bina!=0)
	{	dig=bina%10;
		deci=dig*pow(2,pw)+deci;
		pw++;
		bina=bina/10;
	}
	pw=0;
	while(deci!=0)
	{	dig=deci%2;
		octal=dig*pow(10,pw)+octal;
		pw++;
		deci=deci/2;
	}
	printf("octal = %d", octal);
}
