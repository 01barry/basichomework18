#include <stdio.h>

int main() 
{
    int num0=0,y=0;
    int array[10] = {};
    
    printf("�п�J�@�Ӿ��:\n");
    scanf("%d", &num0);
    
    while(num0) 
	{
        array[num0 % 10]++;
        num0/=10;
    }
    
    for (y=0;y<10;y++) 
	{
        if (array[y] != 0)
            printf ("%d��%d��\n", y, array[y]);
	}
    return 0;
}
