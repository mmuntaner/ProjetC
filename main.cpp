//****************************************************************************
//
//
//
//****************************************************************************
 
 
 
 
// ===========================================================================
//                               Include Libraries
// ===========================================================================
#include <stdlib.h>
#include <stdio.h>



// ===========================================================================
//                             Include Project Files
// ===========================================================================
#include "vector.h"
#include "agent.h"
#include "proie.h"
#include "predateur.h"


// ===========================================================================
//                         Declare Miscellaneous Functions
// ===========================================================================








// ===========================================================================
//                                   The Main
// ===========================================================================
int main(int argc, char* argv[])
{
  printf("Hello World !\n");

  proie *tableau[5];
  //proie* tableau = new proie[5];
  tableau[0]= new proie();
  tableau[1]= new proie();
  tableau[2]= new proie(12, 18);
  tableau[3]= new proie(13,19);
  tableau[4]= new proie(11,17);

  for (int i=0; i<5; i++)
  {
  	tableau[i]->Get_pos().affichevector();
  	printf("\n");
  }

  for (int i=0; i<5; i++)
  {
  	tableau[i]->vitesse2(tableau,i);
  	//tableau[i]->vitesse1(tableau,i);
  	tableau[i]->Get_vit().affichevector();
   
  }
  

  
  /*for (int i=0; i<5; i++)
  {
  	tableau[i]->Get_vit().affichevector();
  }
  */
  return 0;
}



// ===========================================================================
//                         Define Miscellaneous Functions
// ===========================================================================

