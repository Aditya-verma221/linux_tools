// Code by Aditya Verma.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
  
int glob = 0;  //global variable to change in threads
  
void *ThreadFun(void *var)
{
    int *thr_id = (int *)var;  
    
    ++glob; //Changing global variable.
    printf("Thread ID: %d\nGlobal variable: %d\n\n", *thr_id, ++glob);
}
  
int main()
{
    int i;
    pthread_t tid,tid2,tid3;
  
    
        pthread_create(&tid, NULL, ThreadFun, (void *)&tid);
        pthread_create(&tid2, NULL, ThreadFun, (void *)&tid2);
        pthread_create(&tid3, NULL, ThreadFun, (void *)&tid3);
  
    pthread_exit(NULL);
    return 0;
}
