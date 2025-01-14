/**
 * @file passenger_unloader.cc
 *
 * @copyright 2020 Zixuan Zhang, All rights reserved.
 */
#include "src/passenger_unloader.h"
#include <sstream>
#include <fstream>
using namespace std;

int PassengerUnloader::UnloadPassengers(std::list<Passenger *>* passengers,
                                        Stop * current_stop) {
  // TODO(wendt): may need to do end-of-life here
  // instead of in Passenger or Simulator
  int passengers_unloaded = 0;
  for (std::list<Passenger *>::iterator it = (*passengers).begin();
      it != (*passengers).end();
      it++) {
    if ((*it)->GetDestination() == current_stop->GetId()) {
      ostringstream outStr;
      (*it)->Display(outStr);
      FileWriter::GetInstance()->Write("PassData.csv", outStr);
      // could be used to inform scheduler of end-of-life?
      // This could be a destructor issue as well.
      // *it->FinalUpdate();
      it = (*passengers).erase(it);
      // getting seg faults, probably due to reference deleted objects
      // here
      it--;
      passengers_unloaded++;
    }
  }

  return passengers_unloaded;
}

