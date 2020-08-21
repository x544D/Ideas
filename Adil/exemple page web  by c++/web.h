namespace std{
 
    class web
   {
    public:
       
static void webpage(string path,string code){
// Create and open a text file
  ofstream MyFile(path);

// Write to the file
  MyFile << code;

  // Close the file
  MyFile.close();

}
static string html(string head ,string body ){
  return "<html>\n"+head+"\n"+body+"\n</html>";
}
static string title(string child){
  return "<title>"+child+"</title>\n";
}
static string head(string child){
  return "<head>\n"+child+"\n</head>";
}

static string body(string attr,string child){
 return "<body "+attr+" >\n"+child+"\n</body>";
}
static string section(string attr,string child){
   return "<section "+attr+" >\n"+child+"\n</section>";
}
static string div(string attr,string child){
   return "<div "+attr+" >\n"+child+"\n</div>";
}
static string p(string attr,string child){
   return "<p "+attr+" >\n"+child+"\n</p>";
}
    };
    };
