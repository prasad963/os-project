#include<stdio.h>
#include<pthread.h>
#include<math.h>
pthread_mutex_t wrt,readcount=0,red;
int rcount=0,database;

void reader()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
		if(i==2)
		{
			printf(" reader doing");
		}
	}
	
}
void *reader(void *arv)
{
	printf("reader trying to enter ...\n");
	
	
 } 
 void *writer(void *a)
 {

 	if(readcount==0)
 	{
	 
 	printf("writer to enter \n");
 	pthread_mutex_lock(&wrt);
 	printf("writer entered\n");
 	sleep(2);
 	printf("readers inside writers function %d\n",rcount);
 	database=rand();
 	printf("writer has written %d\n",database);
	 printf("writer leaving\n");
 	pthread_mutex_unlock(&wrt);
 	sleep(2);
 pthread_exit(NULL);
 
}
 }
 int main()
 {
 
 pthread_mutex_init(&red,NULL);
 
 pthread_mutex_init(&wrt,NULL);
 	void* result;
 	pthread_t r1[50],r2[50];
 	int l1,l2,i;
 	printf("enter reader=");
 	scanf("%d",&l1);
 	printf("enter writers=");
 	scanf("%d",&l2);
 	reader();
 	for(i=0;i<l1;i++)
 	{
 		pthread_create(&r1[i],NULL,reader,NULL);
 		
	 }
 	
 	for(i=0;i<l2;i++)
 	{
 		pthread_create(&r2[i],NULL,writer,NULL);
 		
	 }
 for(i=0;i<l1;i++)
 	{
 		pthread_join(r1[i],NULL);
 		
	 }
	 for(i=0;i<l2;i++)
 	{
 		pthread_join(r2[i],NULL);
 		
	 }
return 0;
	 
 		
 }
 

    
