/* Project 02 - Scribbler Turtle
   By Chen Wang, Won Seok Chung
   Due Feb 15, 2017 */

#include <stdio.h>
#include <MyroC.h>
#include <eSpeakPackage.h>
#include <unistd.h>

/* Included MyroC.h for robots, eSpeakPackage.h for eSpeak, and unistd.h for rMotors()*/

// Helper Function: draw square
int drawsquare() {

   for (int i = 2; i <= 9; i++){
   if (i % 2 == 0){
   rForward(1.0, 2.0);
   }
   else {
   rTurnRight(1.0, 0.83);
   }
}
   return 0;
}


// Helper Function: draw triangle
int drawtriangle(){

   rTurnRight(1.0,0.25);   
   for (int i = 0; i < 2; i++){
      rForward(1.0,2.2);
      rTurnRight(1.0,1.1);
   }  
   rForward(1.0,1.1);
   return 0;
}

// Helper Function: draw circle

int drawcircle(){
   rMotors(0.28, 0.95);
   sleep(10);
   rStop();
   return 0;
}

// Helper Function" draw a line and stairs

int drawtail(){
   rTurnRight(1.0, 0.83);
   rForward(1.0,2.0);
     for (int i = 2; i <= 8; i++){
     rForward(0.5, 0.5);
     if (i % 2 == 0){
     rTurnRight (1.0, 0.83);
     }
     else {
     rTurnLeft (1.0, 0.73);
     }
}  
   return 0;
}

// Function: draw a picture (our design)

int drawpicture(){
    
   eSpeakTalk("Program starts in 3 2 1");
   drawsquare();
   drawtriangle();
   drawcircle();
   drawtail();
   eSpeakTalk("Program ends, thank you for your patience.");
   return 0;
}

// Main Function

int main (){

   eSpeakConnect();
   rConnect("/dev/rfcomm0");
   drawpicture();
   eSpeakDisconnect();
   rDisconnect();
   return 0;

}
