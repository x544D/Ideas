#include <stdio.h>
#include <string.h>
#include "file.h"


char * get_py_eq(char *  fname)
{
    if(!strcmp(fname,"tonumber")) return _tonumber;
    else if(!strcmp(fname,"totext")) return _totext;
    else if(!strcmp(fname,"tojson")) return _tojson;
    else if(!strcmp(fname,"toxml")) return _toxml;
    else if(!strcmp(fname,"toascii")) return _toascii;
    else if(!strcmp(fname,"todict")) return _todict;

    else if(!strcmp(fname,"isnumber")) return _isnumber;
    else if(!strcmp(fname,"isalpha")) return _isalpha;
    else if(!strcmp(fname,"isequal")) return _isequal;
    else if(!strcmp(fname,"ismatch")) return _ismatch;

    else if(!strcmp(fname,".add")) return __add;
    else if(!strcmp(fname,".insert")) return __insert;
    else if(!strcmp(fname,".remove")) return __remove;
    else if(!strcmp(fname,".reverse")) return __reverse;
    else if(!strcmp(fname,".size")) return __size;
    else if(!strcmp(fname,".clear")) return __clear;

    else if(!strcmp(fname,"sqrt")) return _sqrt;  
    else if(!strcmp(fname,"fabs")) return _fabs;
    else if(!strcmp(fname,"pow")) return _pow;
    else if(!strcmp(fname,"fact")) return _fact;
    else if(!strcmp(fname,"log")) return _log;
    else if(!strcmp(fname,"exp")) return _exp;
    else if(!strcmp(fname,"sin")) return _sin;
    else if(!strcmp(fname,"cos")) return _cos;
    else if(!strcmp(fname,"tan")) return _tan;
    else if(!strcmp(fname,"asin")) return _asin;
    else if(!strcmp(fname,"acos")) return _acos;   
    else if(!strcmp(fname,"atan")) return _atan;
    else if(!strcmp(fname,"rand")) return _rand; 

    else if(!strcmp(fname,".lower")) return __lower;
    else if(!strcmp(fname,".upper")) return __upper;
    else if(!strcmp(fname,".split")) return __split;
    else if(!strcmp(fname,".len")) return __len;
    else if(!strcmp(fname,".replace")) return __replace;
    else if(!strcmp(fname,".count")) return __count;

    else if(!strcmp(fname,"system")) return _system;
    
    else return NULL;
}

//For testing 
/*int main()
{
  char * name = get_py_eq("sqrt");
  puts(name);
   return 0;
}*/
