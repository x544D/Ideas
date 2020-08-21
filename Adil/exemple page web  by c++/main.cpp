#include <iostream>
#include <iostream>
#include <fstream>
#include "web.h"

using namespace std;



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


