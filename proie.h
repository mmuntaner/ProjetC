//****************************************************************************
//
//
//
//****************************************************************************



#ifndef __PROIE_H__
#define __PROIE_H__


// ===========================================================================
//                                  Libraries
// ===========================================================================
#include <cstdio>
#include <cstdlib>



// ===========================================================================
//                                Project Files
// ===========================================================================
#include "agent.h"



// ===========================================================================
//                              Class declarations
// ===========================================================================






class proie : public agent 
{
  public :
    
    // =======================================================================
    //                                 Enums
    // =======================================================================
    
    // =======================================================================
    //                               Constructors
    // =======================================================================
    proie(void);
    proie(float a, float b);

    // =======================================================================
    //                                Destructor
    // =======================================================================
    virtual ~proie(void);

    // =======================================================================
    //                            Accessors: getters
    // =======================================================================

    // =======================================================================
    //                            Accessors: setters
    // =======================================================================

    // =======================================================================
    //                                Operators
    // =======================================================================

    // =======================================================================
    //                              Public Methods
    // =======================================================================
    inline const float Get_rayon(void) const; 
    vector vitesse2(proie* tab[5], int i);
    vector vitesse1(proie* tab[5], int i);
    void Get_speed(proie* tab[5], int i);
    void Get_rank(proie* tab[5], int i, int dt);
    // =======================================================================
    //                             Public Attributes
    // =======================================================================





  protected :

    // =======================================================================
    //                            Forbidden Constructors
    // =======================================================================
    /*proie(void)
    {
      printf("%s:%d: error: call to forbidden constructor.\n", __FILE__, __LINE__);
      exit(EXIT_FAILURE);
    };

    proie(const proie &model)
    {
      printf("%s:%d: error: call to forbidden constructor.\n", __FILE__, __LINE__);
      exit(EXIT_FAILURE);
      }; */


    // =======================================================================
    //                              Protected Methods
    // =======================================================================

    // =======================================================================
    //                             Protected Attributes
    // =======================================================================
     static const float rayon =5;
     };


// ===========================================================================
//                              Getters' definitions
// ===========================================================================
inline const float proie::Get_rayon(void) const 
{
  return rayon;
}
// ===========================================================================
//                              Setters' definitions
// ===========================================================================

// ===========================================================================
//                             Operators' definitions
// ===========================================================================

// ===========================================================================
//                          Inline functions' definition
// ===========================================================================


#endif // __PROIE_H__

