#include <iostream>
#include <cstdlib>
#include <pthread.h>

using namespace std;

#define NUM_THREADS 5

void *printHello(void *thread_id)
{
    long tid;

    tid = (long) thread_id;
    cout << "Hello World! Thread ID, " << tid << endl;
    pthread_exit(NULL);
}

int main()
{
    pthread_t threads[NUM_THREADS];
    int rc;

    for(int i=0; i<NUM_THREADS; i++)
    {
        cout << "main(): creating thread, " << i << endl;

        rc = pthread_create(&threads[i], NULL, printHello, (void*) i);

        if (rc)
        {
            cout << "Error:unable to create thread, " << rc << endl;
            exit(-1);
        }
    }


    pthread_exit(NULL);

    return 0;
}

