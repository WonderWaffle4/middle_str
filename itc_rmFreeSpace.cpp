#include "middle_str.h"

string itc_rmFreeSpace(string str){
    string newstr = "";
    bool wasOnSpace = false;
    for(long long i = 0; i <= itc_len(str); i++){
        if(str[i] == ' ' && !wasOnSpace) {
            wasOnSpace = true;
            newstr += ' ';
        }
        if(wasOnSpace && str[i] != ' ') wasOnSpace = false;
        if(!wasOnSpace) newstr += str[i];
    }
    return newstr;
}
