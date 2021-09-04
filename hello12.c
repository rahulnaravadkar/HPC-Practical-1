#include <omp.h>
#include <stdio.h>

int main() {
	
	printf("Hello 2018BTECS00012! executed by Thread %d\n",omp_get_thread_num());

	return 0;
}
