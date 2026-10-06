int main(void)
{
	int num1 = 10, num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	SwapPtr(&ptr1, &ptr2);
}
void SwapPtr(int** p1, int** p2)	// *p1 = ptr1	// *p2 = ptr2
{
	int* temp = *p1;	// temp = &num1;
	*p1 = *p2;			// ptr1 = &num2;
	*p2 = temp;			// ptr2 = &num1;
}