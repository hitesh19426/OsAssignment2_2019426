/* Name: Hitesh Garg 
   Roll_Number: 2019426 */
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int varp=10;

void childprocess();
void parentprocess();

int main(int argc, char const *argv[])
{
	/* code */
	pid_t pid=fork();
	if (pid<0)
	{
		exit(1);
	}
	else if (pid==0)
	{
		childprocess();
	}
	else
	{
		parentprocess();
		wait(NULL);
	}

	return 0;
}

void childprocess()
{
	//varp=10;
	while (varp!=-91)
	{
		printf("Child %d \n",varp--);
	}
}

void parentprocess()
{
	// varp=10;
	while (varp!=101)
	{
		printf("Parent %d \n",varp++);
	}
}
