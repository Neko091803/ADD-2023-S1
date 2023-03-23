  #include"Computer.h"

  
  Computer::Computer(){
    cname = "Computer";
  }
  Move *Computer::makeMove( ){
    Move * cMove = new Move();
    string CoMove = "Rock";
    cMove->setName(CoMove);
     
}

   string Computer::getName(){
      return cname;
   }
