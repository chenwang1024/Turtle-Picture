// Project 02 - Scribbler Turtle
// Chen Wang, Won Seok Chung
// Due Feb 15, 2017

#include <stdio.h>
#include <MyroC.h>
#include <eSpeakPackage.h>
#include <unistd.h>
#include <math.h>


// Function to draw square
int drawsquare(){

    for(int i = 0; i < 4; i++){
    rForward(1.0, 2.0);
    rTurnRight(1.0, 0.83);
}

return 0;

}

// Function to draw triangle

int drawtriangle(){
  rTurnRight(1.0,0.25);
    for (int i = 0; i < 2; i++){
      rForward(1.0,2.2);
     rTurnRight(1.0,1.1);
}
rForward(1.0,1.1);

return 0;

}

// Function to draw circle

int drawcircle(){
  rMotors(0.28, 0.95);
   sleep(10);
   rStop();
}


// Function to draw a line

int drawline(){
   rTurnRight(1.0, 0.73);
   rForward(1.0,2.0);
  

return 0;

}

// Function to draw a picture (our design)

int drawpicture() {
    
  eSpeakTalk("Program starts in 3 2 1");
  drawsquare();
  drawtriangle();
  drawcircle();
  drawline();
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
