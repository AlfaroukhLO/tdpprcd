#ifndef TYPES__H_
#define TYPES__H_


typedef struct{
 
  double x,y;

}Coordinates;


typedef Coordinates Velocity;
typedef Coordinates Position;

typedef struct{
  
  const int mass;
  Position p;
  Velocity v;

}LocalParticle;


typedef struct{
  
  const int mass;
  Position p;

}SharedParticle;

typedef struct {

  LocalParticle* list_p;
  int size;

}Particles_t;

typedef LocalParticle* LocalBuffer_t ;

typedef SharedParticle* SharedBuffer_t;



#endif
