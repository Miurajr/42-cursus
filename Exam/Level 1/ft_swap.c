#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp ;
	
	temp = *a;
	*a = *b; 
	*b = temp;	
}

*/
int main(void)
{
	int a = 10;
	int b = 50;
	
	ft_swap(&a, &b);
	printf("A = 10:%d B = 50:%d\n", a, b);	
	
}
*/
