
C is a programming language developed by Dennis Ritchie in the year 1972 at At and T Labs.

Before C it was BPCL (Basic Programming Computer Language)

In C, there are 32 reserved keywords.

C is case-sensitive language.

==================================================================
Datatypes:

In C, there are 4 datatypes.

Type		Size  		Format-Specifier

1) int		4 Bytes		%d
2) char		1 Byte		%c
3) float	4 Bytes		%f
4) double 	8 Bytes		%lf

optional ;

long 

void	- empty Datatype

String : It is a collection of Characters.

e.g char name[5];        %s

==================================================================
Variables : It is a name at memory location, which stores values
 	    different types.

	    Rules for declaring the variables.

	   1) A variable name should not start with a Digit.

		legal : a1   illegal : 1a

	   2) There should not be a blank space.

		legal : firstname  illegal : first name
	
	   3) No special Characters allowed except _ $

		legal : first_name   illegal : first@name

	   4) Variable name should be case-sensitive.

		a is different and A is different.

		-Because it follows ASCII Rule

		-American Standard Code for Information Interchange


	printf() : It is use to display data on the screen. (output)
	scanf()  : It is use to accept data on the screen (Input)

	- Compiler will always look for the main method first.