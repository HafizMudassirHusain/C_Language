#include <stdio.h>
#include<conio.h>
void main()
{		
    char ch;
    int lowercase_Vowel, uppercase_Vowel;
    clrscr();
    printf("Please Enter an alphabet: \n");
    scanf(" %c", &ch);
    lowercase_Vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    uppercase_Vowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    if (lowercase_Vowel || uppercase_Vowel) {
    	printf("\n %c The Enter Alphabet  is a VOWEL.", ch);
	}
    else {
    	printf("\n %c The Enter Alphabet is a CONSONANT.", ch);
	}
    getch();
}
