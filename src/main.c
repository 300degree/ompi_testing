#include "mpi.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 4 * 1024^2

int main(int argc, char **argv)
{
    int rank, size;

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    printf("%d, %d\n", rank, size);

    MPI_Finalize();
    return EXIT_SUCCESS;
}
