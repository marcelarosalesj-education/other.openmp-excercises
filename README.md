# OpenMP exercises

I will use this repo to keep my demos and exercises using OpenMP

## Synchronization
Impose order constraints and protect access to shared data.
* High level
  * critical - Mutual exclusion. Only one thread at a time can enter a _Critical Region_ `#pragma omp critical`
  * atomic - provides mutual exclusion but only applies to the read/update of a memory location `#pragma omp atomic`
  * barrier
  * ordered
* Low level
  * flush
  * locks (simple and nested)


## SPMD vs Worksharing
* SPMD - Single Program Multiple Data is when each thread redundantly executes the same code
* Worksharing - is split up the code between threads
  * Loop construct - splits up loop iterations among the threads in a team `#pragma omp for`
  * Sections/section constructs
  * Single construct
  * Task construct

## References
* [A Hands-on introduction to OpenMP](https://www.openmp.org/wp-content/uploads/omp-hands-on-SC08.pdf)
