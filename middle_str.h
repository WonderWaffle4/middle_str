#ifndef MIDDLE_STR_H_INCLUDED
#define MIDDLE_STR_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

bool itc_isDigit(unsigned char c);
bool itc_compare(string S1, string S2);
bool itc_isFirstInSecond(string s1, string s2);
bool itc_isIp(string str);

unsigned char itc_toUpper(unsigned char c);
unsigned char itc_changeCase(unsigned char c);

int itc_len(string str);
int itc_countWords(string str);
int itc_abs(int num);

string itc_maxCharWord(string str);
string itc_slice_str(string str, int start, int last);
string itc_Cezar(string str, int k);
string itc_rmFreeSpace(string str);

char itc_sameChar(string str);

#endif // MIDDLE_STR_H_INCLUDED
