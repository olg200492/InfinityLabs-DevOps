/*****************************************************
 * QUIZ9.C                                           *

 *                                                   *

 *****************************************************/ 
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#define bool int
#define ONE 1
#define ZERO 0

/* Returns 1 if character1 and character2 are matching left and right Brackets */
bool isMatchingPair(char character1, char character2)
{
	if (character1 == '(' && character2 == ')')
    {
        return ONE;
    }		
	else if (character1 == '{' && character2 == '}')
    {
        return ONE;
    }
	else if (character1 == '[' && character2 == ']')
    {
        return ONE;
    }		
	else
    {
        return ZERO;
    }		
}

/* Return 1 if expression has balanced Brackets */
bool areBracketsBalanced(char exp[])
{
	int i = ZERO;
	stack_t *stack = StackCreate(50);

	while (exp[i])
	{
		if (exp[i] == '{' || exp[i] == '(' || exp[i] == '[')
        {
            StackPush(stack, &exp[i]);
        }
		if (exp[i] == '}' || exp[i] == ')'|| exp[i] == ']') {
			if (stack == NULL)
            {
                return ZERO;
            }           
			else if (!isMatchingPair( (*(char *)StackPop(stack))  , exp[i] )  )
            {
                return ZERO;
            }				
		}
		i++;
	}
	if (stack == NULL)
    {
        return ONE; 
    }		
	else
    {
        return ZERO;
    }		
}

int main()
{
	char exp[100] = "{()}[";

	if (areBracketsBalanced(exp))
    {
        printf("Balanced \n");
    }		
	else
    {
        printf("Not Balanced \n");
    }		
	return 0;
}

