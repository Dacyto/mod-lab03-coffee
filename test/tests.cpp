// Copyright 2022 GHA Test Team

#include <gtest/gtest.h>
#include "Automata.h"

TEST(task1, test1) {
  Automata Nier = Automata();
  Nier.on();
  STATES rez = Nier.getStates();
  EXPECT_EQ(WAIT, rez);
}

TEST(task2, test2) {
    Automata Nier = Automata();
    Nier.on();
    Nier.coin(95);
    states rez = Nier.getState();
    EXPECT_EQ(ACCEPT, rez);
}

TEST(task3, test3) {
    Automata Nier = Automata();
    Nier.on();
    Nier.coin(130);
    Nier.choice(4);
    states rez = newAutomata.getState();
    EXPECT_EQ(CHECK, rez);
}
