/*
 * Smalltalk.cpp
 *
 *  Created on: Dec 9, 2020
 *      Author: Vishal Fenn
 */

#include <string>
#include <vector>
#include <memory>
#include "./includes/Watch.h"
#include "./includes/constants.h"
#include "./includes/Smalltalk.h"

using namespace std;

Smalltalk::Smalltalk(string myNationality, int iPerson) :
      nationality(myNationality),
            iPerson(iPerson),
            current_phrase(0) {
}
Smalltalk::~Smalltalk(void) {
}
string Smalltalk::saySomething() {
   string phrase1 = mySmallTalk[current_phrase % (mySmallTalk.size())];
   ++current_phrase;
   return (phrase1);
}
string Smalltalk::getTime() {
   if (this->pWatch != 0) {
      return ("THE_CURRENT_TIME_IS: " + pWatch->getTime());
   }
   return (I_DO_NOT_HAVE_A_WATCH);
}

unique_ptr<Watch> Smalltalk::takeWatch() {
   unique_ptr<Watch> watch1;
   if (this->pWatch == 0) {
      watch1 = 0;
   }
   else {
      watch1 = move(pWatch);
   }
   return (watch1);
}

bool Smalltalk::giveWatch(unique_ptr<Watch> &pWatch) {
   if (this->pWatch != 0) {
      return (false);
   }
   this->pWatch = move(pWatch);
   return (true);
}

void Smalltalk::populatePhrases() {

}

