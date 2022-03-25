// Copyright 2022 Dacyto

#include "Automata.h"

using std::cout;
using std::endl;

Automata::Automata() {
  state = OFF;
  cash = 0;
}

void Automata::on() {
  if (state == OFF) state = WAIT;
}

void Automata::off() {
  if (state == WAIT) state = OFF;
}

void Automata::coin(int c) {
  if (state == WAIT) state = ACCEPT;
  cash = cash + c;
}

STATES Automata::getState() {
  return state;
}

void Automata::getMenu() {
  for (int i = 0; i < 8; i++) {
    cout << menu[i] << "  " << price[i] << " RUB" << endl;
  }
}
