#ifndef TIC_H
#define TIC_H

#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;
const int SIZE = 3;
const int INF = 10000;
extern int status[SIZE][SIZE];
const string line = " ----- ";
const int NUM = 16;
extern int player;
int Check(int chess);
void Result(int chess, int player);
void SwitchPlayer();
int Minimax_Decision(int player);
int Minimax_Value(int chess, int player);
void Initial();
void Draw();
char Pic(int x);

#endif // TIC_H
