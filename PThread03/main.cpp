#include <iostream>
#include <cstdlib>
#include <pthread.h>
#include <string.h>
#include <unistd.h>

using namespace std;

#define NUM_THREADS 5

void *wait(void *thread_arg)
{
    int i;
    long tid = (long) thread_arg;

    cout << "Sleeping in thread " << tid << endl;

    sleep(3);

    cout << "Thread with id : " << tid << "  ...exiting " << endl;

    pthread_exit(NULL);
}

int main()
{
    pthread_t threads[NUM_THREADS];
    pthread_attr_t attr;
    void *status;
    int rc;

    // Initialize and set thread joinable
    pthread_attr_init(&attr);
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

    for(int i=0; i<NUM_THREADS; i++)
    {
        cout << "main(): creating thread, " << i << endl;

        rc = pthread_create(&threads[i], NULL, wait, (void*) i);

        if (rc)
        {
            cout << "Error:unable to create thread, " << rc << endl;
            exit(-1);
        }
    }

    // free attribute and wait for the other threads
    pthread_attr_destroy(&attr);

    for(int i=0; i < NUM_THREADS; i++)
    {
        rc = pthread_join(threads[i], &status);

        if (rc)
        {
            cout << "Error:unable to join," << rc << endl;

            exit(-1);

        }

        cout << "Main: completed thread id :" << i;
        cout << "  exiting with status :" << status << endl;
    }

    cout << "Main: program exiting." << endl;

    pthread_exit(NULL);

    return 0;
}

