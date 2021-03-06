//****************************************************************************
//
//
//
//****************************************************************************


 
 
// ===========================================================================
//                                   Libraries
// ===========================================================================



// ===========================================================================
//                                 Project Files
// ===========================================================================
#include "proie.h"







//############################################################################
//                                                                           #
//                              Class proie                                  #
//                                                                           #
//############################################################################

// ===========================================================================
//                         Definition of static attributes
// ===========================================================================

// ===========================================================================
//                                  Constructors
// ===========================================================================
proie::proie(void)
{
	float a =150*((float)rand() / (float)RAND_MAX);	
	float b =150*((float)rand() / (float)RAND_MAX);	
  vector p(a,b);
  position=p;
  //index++;
}

proie::proie(float a, float b)
{
	vector p(a,b);
	position=p;
	//index++;
}

// ===========================================================================
//                                  Destructor
// ===========================================================================
proie::~proie(void)
{
	//index--;
}

// ===========================================================================
//                                 Public Methods
// ===========================================================================
vector proie::vitesse2(proie* tab[5], int i)
{
	int K=0;
	vector newvit;
	for (int j=0; j<5; j++)
	{
			vector dist=this->Get_pos() -tab[j]->Get_pos();
			float distance =dist.Get_Norm();

			if (distance<rayon & j!= i)
			{
				K++;		
				newvit=newvit + tab[j]->Get_pos() - this->Get_pos(); 
				newvit= newvit/K;
			}
	
	
  }
	return newvit;
}

vector proie::vitesse1(proie* tab[5], int i)
{
	int K=0;
	vector newvit;
	for (int j=0; j<5; j++)
	{
			vector dist=this->Get_pos() -tab[j]->Get_pos();
			float distance =dist.Get_Norm();

			if (distance<rayon & j!= i)
			{
				K++;		
				newvit=newvit + tab[j]->Get_vit() - this->Get_vit(); 
				newvit = newvit/K;
			}
	
	
  }
	return newvit;
}

void proie::Get_speed(proie* tab[5], int i)
{
	vitesse=vitesse+this->vitesse2(tab, i)+this->vitesse1(tab, i);
}


void proie::Get_rank(proie* tab[5], int i, int dt)
{
	position=position+this->Get_vit()*dt;
}

// ===========================================================================
//                                Protected Methods
// ===========================================================================

// ===========================================================================
//                               Non inline accessors
// ===========================================================================
