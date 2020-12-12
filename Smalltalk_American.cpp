/*
 * Smalltalk_American.cpp
 *
 *  Created on: Dec 12, 2020
 *      Author: vishalfenn
 */

#include <vector>
#include <string>
#include "./includes/Smalltalk_American.h"
#include "./includes/constants.h"

using namespace std;

Smalltalk_American::Smalltalk_American(int iPerson) :
      Smalltalk(AMERICAN, iPerson) {
   populatePhrases();
}
Smalltalk_American::Smalltalk_American(string myNationality, int iPerson) :
      Smalltalk(AMERICAN, iPerson) {

}

Smalltalk_American::~Smalltalk_American(void) {

}
void Smalltalk_American::populatePhrases() {
   mySmallTalk.push_back(AMERICAN_PHRASE_1);
   mySmallTalk.push_back(AMERICAN_PHRASE_2);
   mySmallTalk.push_back(AMERICAN_PHRASE_3);
   mySmallTalk.push_back(AMERICAN_PHRASE_4);
   mySmallTalk.push_back(AMERICAN_PHRASE_5);
}

