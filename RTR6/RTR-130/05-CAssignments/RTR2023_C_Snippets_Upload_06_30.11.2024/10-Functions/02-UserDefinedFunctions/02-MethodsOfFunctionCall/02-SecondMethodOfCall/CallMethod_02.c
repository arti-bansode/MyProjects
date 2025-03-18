#include<stdio.h> //'stdio.h'contains declaration of 'printf()'

//*****USER DEFINED FUNCTION : METHOD OF CALLING FUNCTION 2 ***
//**** CALLING ONLY TWO FUNCTIONS DIRECTILY IN MAIN(), REST OF THE TRACE THRIE CALL INDIRECTLY TO MAIN() ****

int main(int argc, char* argv[], char* envp[])
{
	//function prototypes
	void display_information(void);
	void Function_Country(void);

	//code
	display_information(); //function call
	Function_Country(); //function call

	return(0);
}

//***User-Defined Function Definition...***
void display_information(void) //function definition
{
	// function prototypes
	void Function_My(void);
	void Function_Name(void);
	void Function_Is(void);
	void Function_FirstName(void);
	void Function_MiddleName(void);
	void Function_Surname(void);
	void Function_OfAMC(void);

	//code

	//***FUNCTION CALL ***
	Function_My();
    Function_Name();
    Function_Is();
    Function_FirstName();
    Function_MiddleName();
    Function_Surname();
    Function_OfAMC();
}

void Function_My(void) //function definition
{
	//code
	printf("\n\n");

	printf("My");

}
void Function_Name(void) //function definition
{
	//code
	printf("\n\n");

	printf("Name");

}
void Function_Is(void) //function definition
{
	//code
	printf("\n\n");

	printf("Is");

}
void Function_FirstName(void) //function definition
{
	//code
	printf("\n\n");

	printf("Arti");

}
void Function_MiddleName(void) //function definition
{
	//code
	printf("\n\n");

	printf("Amol");

}
void Function_Surname(void) //function definition
{
	//code
	printf("\n\n");

	printf("Bansode");

}
void Function_OfAMC(void) //function definition
{
	//code
	printf("\n\n");

	printf("Of ASTROMEDICOMP");

}
void Function_Country(void) //function definition
{
	//code
	printf("\n\n");

	printf("I Love In India.");

}