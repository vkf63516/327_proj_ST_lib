//
/*
 * Functions.cpp
 *
 *  Created on: Dec 9, 2020
 *      Author: Vishal Fenn
 */
#include <iostream>
#include <memory>

#include "./includes/Functions.h"
#include "./includes/Smalltalk_American.h"
#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/Smalltalk_Brit.h"
#include "./includes/Watch.h"
#include "./includes/constants.h"
using namespace std;
//create a vector with appropriate numbers of Smalltalk_Brit,Smalltalk_American and ST_American_DonutEnthusiest
//objects using unique pointers.  Since we are using c++11 returning this vector by value is fine since the
//compiler will move the vector on return rather than recreate it (this means there is no copy penalty)
vector<unique_ptr<Smalltalk>> getPeople(int numBrit,
      int numAmerican, int numbAmericanDonutEnthusiest,
      int numWatches) {

   //create a vector to hold SmallTalk unique pointers
   vector<unique_ptr<Smalltalk>> vect1;

   //add brits to vector
   for (int i = 0; i < numBrit; ++i) {
      unique_ptr<Smalltalk_Brit> brit(new Smalltalk_Brit(i));
      vect1.push_back(move(brit));
   }

   //add americans  to vector
   for (int j = 0; j < numBrit; ++j) {
      unique_ptr<Smalltalk_American> usa(new Smalltalk_American(j));
      vect1.push_back(move(usa));
   }

   //add american donut enthusiest  to vector
   for (int z = 0; z < numBrit; ++z) {
      unique_ptr<ST_American_DonutEnthusiest> ade(
            new ST_American_DonutEnthusiest(z));
      vect1.push_back(move(ade));
   }

   //create some watches (as long as number watches <= numb people)
   //then give the watches away to first NUM_WATCHES people in the vector
   // when you are finished using the vector you return
   //from this function(see Smalltalk header for hints)
   int k = 0;
   while (k < vect1.size() && numWatches > 0) {
      unique_ptr<Watch> newWatch(new Watch());
      if (vect1[k]->giveWatch(newWatch)) {
         numWatches--;
      }
      ++k;
   }

   //return your vector
   return (vect1);
}
