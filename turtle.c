#include <stdio.h>
#include <MyroC.h>
#include <eSpeakPackage.h>
#include <unistd.h>

int drawsquare(){

    for(int i = 0; i < 4; i++){
    rForward(1.0, 2.0);
    rTurnRight(1.0, 0.78);
}

return 0;

}

int drawtriangle(){
   rTurnRight(xx,xx);
   for (int i = 0; i < 2; i++){
   rForward(xx,xx);
   rTurnRight(xx,xx);
}
   rForward(xx,xx);

return 0;

}


int drawcircle(){
   rMotors(0.5, 1.0);
   sleep(x);
   rStop();
}


int drawline(){
   rTurnLeft(1.0, 0.78);
   rForward(xx,xx);
   rTurnLeft(2.0, 0.78);
   rForward(xx,xx);

return 0;

}

int drawpicture() {
    
    eSpeakTalk("Program starts in 3 2 1");
    drawsquare();
    drawtriangle();
    drawcircle();
    drawline();
    eSpeakTalk("Program ends, thank you for your patience.");

    return 0;
}



int main (){

  eSpeakConnect();
  rConnect("/dev/rfcomm0");
  drawpicture();
  eSpeakDisconnect();
  rDisconnect();
  return 0;

}
