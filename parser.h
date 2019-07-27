/**********************
Batch number 39
SAMISH BEDI 
2012B3A7735P
AKASH SHARMA
2012B2A7771P
**********************/

#ifndef PARSER_H
#define PARSER_H
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h>

#include "parserDef.h"

Stack *createStack();
void push(Stack *S,treeNode* symbolValue);
treeNode* pop(Stack *S);
treeNode* top(Stack *S);
int lookup_symbol(char *non_terminal);
char * reverse_lookup_non_terminal(int number);
int containsEpsilonRHS(int lookupNoRHS);
void addNTtoLoadedGrammar(int looked_up_value, int rule_count);
void addRHStoLoadedGrammar(int looked_up_value, int rule_count);
void loadGrammar(FILE *grammar);
void addLHStoSet(int looked_up_value);
int checkList(ruleNode *l1,int n);
void appendLists(int l1,int l2);
void createFirstSet(int i);
void appendFirstInFollow(int l1,int l2);
void appendFollowInFollow(int l1,int l2);
void createFollowSet(int i);
void fill_current_symbol_follow_to_ParseTable(int left_non_terminal_index, int rule_number, ruleNode* follow_set_list);
int fill_current_symbol_first_to_ParseTable( int left_non_terminal_index, int rule_number, ruleNode* first_set_list);
void createParseTable();
int checkFollow(int NTvalue,int RHSvalue);
treeNode *createTreeNode(char *lexemeCurrentNode,int lineNo,char *token,char *valueIfNumber,char *parentNodeSymbol,int isLeafNode,char *nodeSymbol,treeNode *child,treeNode *next);
parseTree *parseInputSourceCode(char *testcaseFile);
char* itoa(int i, char b[]);
void printtree(treeNode* root);
void printParseTree(parseTree  *PT);
void parser_main();

#endif
