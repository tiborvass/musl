#include "pthread_impl.h"

// Wasm doesn't *yet* have threading support, but it's being planned as part
// of the threaded-Wasm support in Spring 2018.

struct pthread *__main_pthread;

int __set_thread_area(void *pt)
{
	__main_pthread = (struct __pthread*)pt;

	return 1; // Cannot create threads
}
