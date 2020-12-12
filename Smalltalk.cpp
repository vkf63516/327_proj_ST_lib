/*
 * Smalltalk.cpp
 *
 *  Created on: Dec 9, 2020
 *      Author: vishalfenn
 */
#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <memory>
#include "./includes/Watch.h"
#include "./includes/Smalltalk.h"
#include "./includes/constants.h"
using namespace std;
class Smalltalk {
   Smalltalk(string myNationality, int iPerson) :
         nationality(myNationality),
               iPerson(iPerson),
               current_phrase(0) {
   }
   ~Smalltalk(void) {
   }
   string saySomething() {
      string phrase1 = mySmallTalk[current_phrase % (mySmallTalk.size())];
      ++current_phrase;
      return phrase1;
   }
   string getTime() {
      if (this->pWatch != 0) {
         return "THE_CURRENT_TIME_IS: " + pWatch->getTime();
      }
      return I_DO_NOT_HAVE_A_WATCH;
   }

   unique_ptr<Watch> takeWatch() {
      unique_ptr<Watch> watch1;
      if (this->pWatch == 0) {
         watch1 = 0;
      }
      else {
         watch1 = move(pWatch);
      }
      return true;
   }

   bool

};
