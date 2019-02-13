//Jacob Filer - 1642557
//Project 1 Demo

#include <stdio.h>
#include <stdlib.h>

void add(signed int *a,signed int *b);
void sub(signed int *a,signed int *b);
void mul(signed int *a,signed int *b);
void Jdiv(signed int *a,signed int *b);
int getNum(signed int *a,signed int *b);

int main(){
	char usrInpt[1];
	signed int a,b;

	while (1) {
		printf("Calculator Menu\n\ta.Addition\n\ts.Subtraction\n\tm.Multiplication\n\td.Division\n\te.Exit\n\nMode:");
		scanf("%s",usrInpt);
		switch(usrInpt[0]) {
			case 'e':case 'E':
				return 0;
				break;
			case 'a':case 'A':case '+':
				getNum(&a,&b);
				add(&a,&b);				
				break;
			case 's':case 'S':case '-':
				getNum(&a,&b);	
				sub(&a,&b);
				break;
			case 'm':case 'M':case '*':
				getNum(&a,&b);
				mul(&a,&b);
				break;
			case 'd':case 'D':case '/':
				getNum(&a,&b);
				Jdiv(&a,&b);
				break;
			default:
				printf("User Input not valid!\n");
				usrInpt[0]=' ';
		}
		if (usrInpt[0] !=' ') {
			printf("Result: ");
			if (a!=0) {
				printf("%dr%d\n",b,a);
			} else {
				printf("%d\n",b);
			}
		}
		getchar();
		getchar();
	}
	return 0;
}

int getNum(signed int *a,signed int *b) {
	char inptNum[10];
	int ret;
	printf("Type \'p\' for previous result.\nInput 1: ");
	scanf("%s",inptNum);
	if (inptNum[0]!='p') {
		*a = (int) strtol(inptNum,(char **)NULL,10);
	} else {
		*a=*b;
	}
	printf("Input 2: ");
	scanf("%s",inptNum);
	if (inptNum[0]!='p') {
		*b = (int) strtol(inptNum,(char **)NULL,10);
	}
	printf("\n"); 
	
	return *a;
}
