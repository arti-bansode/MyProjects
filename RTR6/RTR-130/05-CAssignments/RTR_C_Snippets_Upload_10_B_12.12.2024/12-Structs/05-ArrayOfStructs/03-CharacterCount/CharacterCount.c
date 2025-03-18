#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define MAX_STRING_LENGTH 1024

struct CharacterCount
{
	char ch_aab;
	int ch_count_aab;
}character_and_count[] = { {'A', 0}, //character_and_count[0].ch_aab = 'A' & character_and_count[0].ch_count_aab = 0
	{'B', 0},  //character_and_count[1].ch_aab = 'A' & character_and_count[1].ch_count_aab = 0
	{'C', 0},   //character_and_count[2].ch_aab = 'A' & character_and_count[2].ch_count_aab = 0
	{'D', 0},   //character_and_count[3].ch_aab = 'A' & character_and_count[3].ch_count_aab = 0
	{'E', 0},    
	{'F', 0},
	{'G', 0},
	{'H', 0},
	{'I', 0},
	{'J', 0},
	{'K', 0},
	{'L', 0},
	{'M', 0},
	{'N', 0},
	{'O', 0},
	{'P', 0},
	{'Q', 0},
	{'R', 0},
	{'S', 0},
	{'T', 0},
	{'U', 0},
	{'V', 0},
	{'W', 0},
	{'X', 0},
	{'Y', 0},
	{'Z', 0} };  //character_and_count[25].ch_aab = 'A' & character_and_count[25].ch_count_aab = 0

#define SIZE_OF_ENTIRE_ARRAY_OF_STRUCTS sizeof(character_and_count)
#define SIZE_OF_ONE_STRUCT_FROM_THE_ARRAY_OF_STRUCTS sizeof(character_and_count[0])
#define NUM_ELEMENTS_IN_ARRAY (SIZE_OF_ENTIRE_ARRAY_OF_STRUCTS / SIZE_OF_ONE_STRUCT_FROM_THE_ARRAY_OF_STRUCTS)

//ENTRY POINT FUNCTION
int main(void)
{
	//variable declarations
	char str[MAX_STRING_LENGTH];
	int i_aab, j_aab, actual_string_length_aab = 0;

	//code
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(str, MAX_STRING_LENGTH);

	actual_string_length_aab = strlen(str);

	printf("\n\n");
	printf("The String You Have Entered Is : \n\n");
	printf("%s\n\n", str);

	for (i_aab = 0; i_aab < actual_string_length_aab; i_aab++)
	{
		for (j_aab = 0; j_aab < NUM_ELEMENTS_IN_ARRAY; j_aab++) // Run every character of the input string through the rntire alphabet (A to Z)
		{
			str[i_aab] = toupper(str[i_aab]); //If character is in lower case, turn it to upper case for comparison

			if (str[i_aab] == character_and_count[j_aab].ch_aab)
				character_and_count[j_aab].ch_count_aab++;

		}
	}

	printf("\n\n");
	printf("The Number of Occurances Of All Character From Alphabet Are As Follows : \n\n");
	for (i_aab = 0; i_aab < NUM_ELEMENTS_IN_ARRAY; i_aab++)
	{
		printf("Character %c = %d\n", character_and_count[i_aab].ch_aab, character_and_count[i_aab].ch_count_aab);
	}
	printf("\n\n");
	return(0);
}

