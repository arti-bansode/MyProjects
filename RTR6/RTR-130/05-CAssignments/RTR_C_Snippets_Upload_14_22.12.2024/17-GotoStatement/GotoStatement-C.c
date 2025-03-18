#include<stdio.h>
#include<string.h> // for toupper()

int main(void)
{
	// variable declarations
	char ch_aab, ch_i_aab;
	unsigned int ascii_ch_aab = 0;

	//code
	printf("\n\n");
	printf("Enter The First Character Of First Name : ");
	ch_aab = getch();

	ch_aab = toupper(ch_aab);

		for (ch_i_aab = 'A'; ch_i_aab <= 'Z'; ch_i_aab++)
		{
			if (ch_aab == ch_i_aab)
			{
				ascii_ch_aab = (unsigned int)ch_aab;
				goto result_output; // programm flow jumps directly to label "result_output"
			}
		}
	printf("\n\n");
	printf("Goto statement not executed, so printfing \"Hello, world !!!\",\n");
	//will be omitted if 'goto' statement is executed

result_output: // Label itself does not alter flow of program. Following code is executed regardless of whether goto statement is executed or not.
	printf("\n\n");

	if (ascii_ch_aab == 0)
	{
		printf("You must have a strange name! Could not find the character '%c' in the entire English Alphabet!\n", ch_aab);
	}

	else
	{
		printf("Character '%c' found. It has ASCII value  %u.\n", ch_aab, ascii_ch_aab);
	}
	printf("\n\n");
	return(0);
}