int calc()
{
	extern int addition(int add1, int add2);
	extern int subtraction(int sub1, int sub2);
	extern int multiplication(int mul1, int mul2);
	extern int division(int div1, int div2);
	extern int remainder(int rem1, int rem2);
	
	char operator;
	int operand1;
	int operand2;
	int output;
	int rem;
	
	//printf("Select an Operator (+,-,*,/): ");
	//scanf("%c", operator);
	//printf("\nEnter first Operand: ");
	//scanf("%d", operand1);
	//printf("\nEnter second Operand: ");
	//scanf("%d", operand2);
	
	switch(operator)
	{
		case '+':
			output = addition(operand1, operand2);
			//printf("Your answer is %d", output);
		break;
		case '-':
			output = subtraction(operand1, operand2);
			//printf("Your answer is %d", output);
		break;
		case '*':
			output = multiplication(operand1, operand2);
			//printf("Your answer is %d", output);
		break;
		case '/':
			output = division(operand1, operand2);
			rem = remainder(operand1, operand2);
			//printf("Your answer is %d with remainder of %d", output, rem);
		break;
		
		default:
			//printf("\nOperator error. Please try again.");
		break;
	}
	
	return 0;
}
