#include<stdio.h>
int stack[20];
int top = -1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

void evaluatePostfix(char exp[]) {
	
	int data,data1,data2;
	char *e;
	e = exp;
    while(*e != '\0')
    {
        if(isdigit(*e))
        {
            push(*e - 48);
        }
        else
        {
            data1 = pop();
            data2 = pop();
            switch(*e)
            {
            case '+':
            {
                data = data1 + data2;
                break;
            }
            case '-':
            {
                data = data2 - data1;
                break;
            }
            case '*':
            {
                data = data1 * data2;
                break;
            }
            case '/':
            {
                data = data2 / data1;
                
                break;
            }
            }
            push(data);
        }
        e++;
    }
    printf("\nThe result of expression %s  =  %d\n\n",exp,pop());
}

int main()
{
    char exp[20];
    printf("Enter the postfix expression : ");
    scanf("%s",exp);
	evaluatePostfix(exp);
    return 0;
}

