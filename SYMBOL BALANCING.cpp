#include<stdio.h>
#include<stdbool.h>
#define MAX_SIZE 100
struct Stack
{
    int top;
    char items[MAX_SIZE];
};
void initialize(struct Stack *s)
{
    s->top = -1;
}
bool isEmpty(struct Stack *s)
{
    return (s->top == -1);
}
bool isFull(struct Stack *s)
{
    return (s->top == MAX_SIZE - 1);
}
void push(struct Stack *s, char c)
{
    if (!isFull(s))
	{
        s->items[++(s->top)] = c;
    }
	else
	{
        printf("Stack Overflow\n");
    }
}
char pop(struct Stack *s)
{
    if (!isEmpty(s))
	{
        return s->items[(s->top)--];
    }
	else
	{
        printf("Stack Underflow\n");
        return '\0';
    }
}
bool isBalanced(char *expression)
{
    struct Stack stack;
    initialize(&stack);    
    while (*expression != '\0')
	{
        if (*expression == '(' || *expression == '[' || *expression == '{')
		{
            push(&stack, *expression);
        }
		else if (*expression == ')' || *expression == ']' || *expression == '}')
		{
            if (isEmpty(&stack) || *expression - pop(&stack) > 2)
			{
                return false;
            }
        }
        expression++;
    }
    return isEmpty(&stack);
}
int main()
{
    char expression[MAX_SIZE];    
    printf("Enter an expression to check for balanced symbols: ");
    scanf("%s", expression);
    printf("Expression is %s\n", isBalanced(expression) ? "balanced" : "not balanced");
    return 0;
}
