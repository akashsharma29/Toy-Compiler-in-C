/**********************
Batch number 39
SAMISH BEDI 
2012B3A7735P
AKASH SHARMA
2012B2A7771P
**********************/

#ifndef CG_H
#define CG_H
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h>

#include "parserDef.h"
#include "symbolTableDef.h"

void write(treeNode *AST);
void read(treeNode *AST);
char *LHSassign(treeNode *AST,char* LHS);
void termPrime(treeNode *AST);
void ID(treeNode *AST);
void factor(treeNode *AST);
void term(treeNode *AST);
char* expPrime(treeNode *AST);
void type_arithmetic(treeNode *AST);
void var(treeNode *AST);
void boolean(treeNode* AST);
void ifpart(treeNode *AST);
void elsepart(treeNode *AST);
void whilepart(treeNode *AST);
void conditional(treeNode *AST);
void iterative(treeNode *AST);
void start(treeNode *AST);
void traverseST(STElem *Table);
void bss();
void codegen_main();

#endif
