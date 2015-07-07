#include <iostream>
#include <cstdlib>
#include <pthread.h>
#include <string.h>

using namespace std;

#define NUM_THREADS 5

struct thread_data
{
  int thread_id;
  string message;
};

void *printHello(void *thread_arg)
{
    struct thread_data *data;

    data = (struct thread_data *) thread_arg;

    cout << "Thread ID: " << data->thread_id << endl;
    cout << "Thread Message: " << data->message << endl;

    pthread_exit(NULL);
}

int main()
{
    pthread_t threads[NUM_THREADS];
    struct thread_data td[NUM_THREADS];
    int rc;

    for(int i=0; i<NUM_THREADS; i++)
    {
        cout << "main(): creating thread, " << i << endl;

        td[i].thread_id = i;
        td[i].message = "Message"+i;

        rc = pthread_create(&threads[i], NULL, printHello, (void*) &td[i]);

        if (rc)
        {
            cout << "Error:unable to create thread, " << rc << endl;
            exit(-1);
        }
    }


    pthread_exit(NULL);

    return 0;
}

