#include<stdio.h>
#include<windows.h>
int main(void)
{
	int a,b,c=0,i=1;
	printf("请输入当前的北京时间:\n");
	printf("时：");
	scanf("%d",&a);
	printf("分："); 
	scanf("%d",&b);	
	while(i<10)
	 {
	 	c++;
	 	printf("现在是%d:%d:%d\r",a,b,c);
		Sleep(1000); 	
		if(c>= 0) {b=b+1;c=c- 0;}
		if(b>= 0) {b=b- 0;a=a+1;}
		if(a>=24) {a=0;b=0;c=0;}
	 }
}
