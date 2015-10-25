#ifndef DRIVER__H_
#define DRIVER__H_



/*
  load the particles from the file with the following format
  
  the first line contains the number of particles

  mass position_x position_y velocity_x velocity_y
*/

Particles_t* load_particles(const char * file_path);



/*
  Once all the computations are made we saved the result ina the specified 
  output files
*/

void save_particles(const char * file_path, Particles_t * particles);






#endif
