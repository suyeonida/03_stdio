#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	float y;
	
	printf("���ڸ� �Է��ϼ���: "); 
	scanf("%d", &x);
	
	printf("�и� �Է��ϼ���: "); 
	scanf("%f", &y);
	
	printf("�������� ����� %f �Դϴ�\n", x/y);
	
	return 0;
}
