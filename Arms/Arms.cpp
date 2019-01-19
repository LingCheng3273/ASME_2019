Arms::Arms(int R_pinA, int R_pinB, int L_pinA, int L_pinB){
  rightArm = Arm(R_pinA, R_pinB, 'r');
  leftArm = Arm(L_pinA, L_pinB, 'l');
}

/*Straight foward opening. Need to test if one after another is too slow*/
Arms::open(){
  rightArm.startPosition();
  leftArm.startPosition();
}

Arms::open2(){
  while(!rightArm.checkOpen() || !leftArm.checkOpen()){
    if(!rightArm.checkOpen()){
      rightArm.moveLeft();
    }
  }
}

/*Straight foward closing. Need to test if one after another is too slow*/
Arms::close(){
  rightArm.close();
  leftArm.close();
}


Arms::close2(){
  
  
  rightArm.close();
  leftArm.close();
}

