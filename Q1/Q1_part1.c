/* Name: Hitesh Garg 
   Roll_Number: Y2019426 */

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
		//printf("%s\n", "Process creation failed");
		exit(1);
	}
	else if (pid==0)
	{
		//printf("child process successfully created!\n");
		childprocess();
		//exit(1);
	}
	else
	{
		//wait(NULL);
		//printf("Parent process successfully created!\n");
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
		printf("%d \n",varp--);
	}
}

void parentprocess()
{
	// varp=10;
	while (varp!=101)
	{
		printf("%d \n",varp++);
	}
}
