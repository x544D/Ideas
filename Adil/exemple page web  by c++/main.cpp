#include <iostream>
#include <iostream>
#include <fstream>
#include "web.h"

using namespace std;

/*
 *  Bon to use this syntax for a full WebPageProject the only condition is : the file extension must be .wals (web als)
 *    |__ then the user wont need to load @webpage , instead he is allowed to use all functions of web module directly,
 *        But not allowed to use basic als Syntax
 *
 *  if the user wants to use this syntax inside an .als project he needs to from @base load @webpage
 *    |__ then he can do use directly $head() ... $body()... etc
 *  
 */

int main() {

web::webpage("index.html",
  web::html(
    web::head(
      web::title("my page")),
    web::body("",
      web::section("class='container'",
        web::p("id='txt' style=color:blue","my first text")))));
 
 
  return 0;

}


