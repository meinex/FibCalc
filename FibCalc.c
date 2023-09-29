#include <stdio.h>

int main(){
	
	/* Порядковий номер числа, яке необхідно вивести */
	int number;	
	/* Змінні, в яких зберігатимуться числа послідовності */
	unsigned long num1 = 1;	
	unsigned long num2 = 0;

	printf("Enter the number of the element of Fibonacci sequence: ");
	scanf("%d", &number);
	
	if(number <= 0){
		printf("Entered number must be bigger than 0. Entered number(%d) is not.", number);
		return 0;
	}


	int i = 0;
	while(1){
		if(++i >= number){
			printf("Element number %d in Fibonacci sequence is: %lu", number+1, num2);
			break;
		}
		
		num1 = num1 + num2;
		if(++i >= number){
			
			printf("Element number %d in Fibonacci sequence is: %lu", number+1, num1);
			break;
		}
		
		num2 = num1 + num2;
	} 


	return 0;
}
