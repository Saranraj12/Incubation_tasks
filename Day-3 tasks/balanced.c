#include<stdio.h>
char stack[20];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

void evaluatePostfix(char exp[]) {
	
	int f = 0;
	char *e;
	e = exp;
    while(*e != '\0')
    {
        if (*e == '{' || *e == '[' || *e == '(') {
        	push(*e);
		}
		else if(*e == '}' || *e == ']' || *e == ')') {
			if (top == -1)
				f = 1;
			else{
				char ch = pop();
				if (*e == '}' && (ch == '(' || ch == '[')){
					f = 1;
				}
				if (*e == ']' && (ch == '(' || ch == '{')){
					f = 1;
				}
				if (*e == ')' && (ch == '{' || ch == '[')){
					f = 1;
				}
			}
		}
		e++;
    }
    if(top!=-1) f = 0;
    printf( (f != 0) ? "Unbalanced" : "Balanced");
    

}

int main()
{
    char exp[20];
    printf("Enter the expression :: ");
    scanf("%s",exp);
	evaluatePostfix(exp);
    return 0;
}

