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

TEST(task4, test4) {
    Automata Nier = Automata();
    Nier.on();
    Nier.coin(130);
    Nier.choice(4);
    Nier.cook();
    states rez = newAutomata.getState();
    EXPECT_EQ(COOK, rez);
}

TEST(task5, test5) {
    Automata Nier = Automata();
    Nier.on();
    Nier.coin(130);
    Nier.choice(4);
    Nier.cook();
    Nier.finish();
    states rez = newAutomata.getState();
    EXPECT_EQ(WAIT, rez);
}

TEST(task6, test6) {
    Automata Nier = Automata();
    Nier.on();
    Nier.coin(25);
    Nier.choice(2);
    Nier.cancel();
    states rez = newAutomata.getState();
    EXPECT_EQ(WAIT, rez);
}

TEST(task7, test7) {
    Automata Nier = Automata();
    Nier.on();
    Nier.coin(130);
    Nier.choice(4);
    Nier.cook();
    Nier.finish();
    Nier.off();
    states rez = newAutomata.getState();
    EXPECT_EQ(OFF, rez);
}
