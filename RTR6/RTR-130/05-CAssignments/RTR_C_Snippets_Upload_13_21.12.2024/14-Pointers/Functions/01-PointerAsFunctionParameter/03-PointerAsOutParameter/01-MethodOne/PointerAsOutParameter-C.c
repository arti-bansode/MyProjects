#include<stdio.h>

int main(void)
{
	//function declarations
	void MathematicalOperations(int, int, int*, int*, int*, int*, int*);

	//variable declarations 
	int a_aab;
	int b_aab;
	int answer_sum_aab;
	int answer_differance_aab;
	int answer_product_aab;
	int answer_quotient_aab;
	int answer_reminder_aab;

	//code
	printf("\n\n");
	printf("Enter Value Of 'A' :");
	scanf("%d", &a_aab);

	printf("\n\n");
	printf("Enter Value Of 'B' :");
	scanf("%d", &b_aab);

	// PASSING ADRESSES TO FUNCTION ... FUNCTION WILL FILL THEM UP WITH VALUES .... HENCE, THEY GO INTO THE FUNCTION AS ADDRESS PARAMETERS AND COME OUT OF THE FUNCTION FILLED WITH VALID VALUES
	// THUS, (&answer_sum_aab, &answer_differance_aab, &answer_product, &answer_quotient_aab, &answer_reminder_aab) ARE CALLED "OUT PARAMETERS" OR "PARAMETERIZED RETURN VALUES" ...RETURN VALUES OF FUNCTIONS COMING VIA PARAMENTERS 
	// HENCE, ALTHOUGH EACH FUNCTION HAS ONLY ONE RETURN VALUE, USING THE CONCEPT OF "PARAMETERIZED RETURN VALUES", OUR FUNCTION "MathematicalOperations()" HAS GIVEN US 5 RETURN VALUES !!!

	MathematicalOperations(a_aab, b_aab, &answer_sum_aab, &answer_differance_aab, &answer_product_aab, &answer_quotient_aab, &answer_reminder_aab);

	printf("\n\n");
	printf("***** results ******: \n\n");
	printf("Sum = %d\n\n", answer_sum_aab);
	printf("Differance = %d\n\n", answer_differance_aab);
	printf("Product = %d\n\n", answer_product_aab);
	printf("Quotient = %d\n\n", answer_quotient_aab);
	printf("Reminder = %d\n\n", answer_reminder_aab);
	return(0);
}

void MathematicalOperations(int x, int y, int* sum, int* differance, int* product, int* quotient, int* reminder)
{
	//code
	*sum = x + y;	      //Value at address 'sum' = ( x + y)
	*differance = x - y;  //Value at address 'differance' = (x - y)
	*product = x * y;     //Value at address 'product' = (x * y) 
	*quotient = x / y;    //Value at address 'quotient' = (x / y)
	*reminder = x % y;    //Value at address 'reminder' = (x % y)

}