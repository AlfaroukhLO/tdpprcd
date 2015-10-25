#ifndef COMPUTE__H_
#define COMPUTE__H_


/*
  This function split the initial buffer equally if possible betwenn the number of cpu availables

 */

void split_particles(Particles_t* particles,const int nb_procs);




#endif
