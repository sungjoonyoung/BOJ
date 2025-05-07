#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef char element;
typedef struct struc {
	element* arr;
	int ind;
}stack;
void init_struc(stack* s);
element pop(stack* s);
void push(stack* s, element x);
element top(stack* s);
int empty(stack* s);

char op[100];
int main(void) {
	stack s;
	init_struc(&s);
	scanf("%s", &op);
	for (int i = 0; i < strlen(op); i++) {
        char tmp = op[i];
        switch (tmp)
        {
        case '*':case '/':
            while (!empty(&s) && (top(&s) == '*'||top(&s) == '/')) {
                printf("%c",pop(&s));
            }
            push(&s, tmp);
            break;
        case '+':case '-':
            while (!empty(&s) && (top(&s) != '(')) {
                printf("%c",pop(&s));
            }
            push(&s, tmp);
            break;
        case ')':
            while (top(&s) != '(') {
                printf("%c",pop(&s));
            }
            pop(&s);
            break;
        case '(':
            push(&s, tmp);
            break;
        default:
            printf("%c",tmp);
            break;
        }
    }
	while (!empty(&s)) {
        printf("%c",pop(&s));
	}
}

void init_struc(stack* s) {
	s->arr = (element*)malloc(sizeof(element));
	s->ind = 0;
}
element pop(stack* s) {
	if (empty(s)) {
		printf("Out of Bound");
		exit(1);
	}
	s->ind--;
	return(s->arr[s->ind]);
}
void push(stack* s, element x) {
	s->arr = (element*)realloc(s->arr, (s->ind + 1) * sizeof(element));
	s->arr[s->ind] = x;
	s->ind++;
}
element top(stack* s) {
	if (empty(s)) {
		printf("Out of Bound");
		exit(1);
	}
	return(s->arr[s->ind - 1]);
}
int empty(stack* s) {
	return (s->ind == 0);
}