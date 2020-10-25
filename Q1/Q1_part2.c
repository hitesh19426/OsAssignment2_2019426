/* Name: Hitesh Garg
   Roll_Number: 2019426 */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
void *increament(void *vargp);
int varp=10;

int main(int argc, char const *argv[])
{
	/* code */
	pthread_t tid;
	pthread_create(&tid, NULL, increament, NULL);
	pthread_join(tid, NULL);
	
	printf("Parent thread. ");
	for (; varp<=100;varp++)
		printf("%d\n", varp);
	
	return 0;
}

void *increament(void *vargp)
{
	printf("%s\n", "Child thread");
	for (;varp>=-90;varp--)
	{
		printf("%d\n",varp );
	}
}
