/* DIGITAL SIGNATURE(S):
   ====================

   List the student author(s) of this code below:

   Fullname                    Seneca Email Address
   --------------------------- ----------------------------
   1)Albert Joshua Canicosa	   ajcanicosa@myseneca.ca
   2)You-Yang Chang			   ychang47@myseneca.ca
   3)Shen Lou				   slou1@myseneca.ca

   +--------------------------------------------------------+
   |                FILE: file_helper.h                     |
   +--------------------------------------------------------+
   |           2  0  2  0  ~  W  I  N  T  E  R              |
   |                 I  P  C  :  B  T  P                    |
   |                 1  4  4  :  1  0  0                    |
   |              FINAL ASSESSMENT PART - 2                 |
   |                                                        |
   |     S  E  N  E  C  A            C  O  L  L  E  G  E    |
   +--------------------------------------------------------+ */

#ifndef FILE_HELPER2_H
#define FILE_HELPER2_H

#include <stdio.h>
#include "file_helper.h"

// clearKeyboard: clear input buffer
void clearKeyboard(void);

// getInt: to make sure if users input demical number
int getInt(void);

// getIntInRange: to make sure if users input the number within the range of the menu
int getIntInRange(int min, int max);

// displayWelcome: to diplay welcome message
void displayWelcome(void);

// displayHeader for 'all rider' menu
void displayHeaderall(void);

// displayHeader for 'top and last' menu
void displayHeadertoplast(void);

// displayHeader for 'winner' menu
void displayHeaderwinner(void);

// menu: to display default menu list and return the number users choose
int menu(void);

#endif
