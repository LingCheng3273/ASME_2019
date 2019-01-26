const int RIGHT_ARM_A = 1;
const int RIGHT_ARM_B = 2;
const int LEFT_ARM_A = 3;
const int LEFT_ARM_B = 4;

const int SPEED_PIN = 5; //analog write moving speed to this pin

const int RIGHT_LIMIT_SWITCH_PIN = 7; //value 0 is pressed, 1 is not pressed
const int LEFT_LIMIT_SWITCH_PIN = 8; //value 0 is pressed, 1 is not pressed
const int RIGHT_LIGHT_PIN = 0; //right sensor (Analog pin A0)
const int LEFT_LIGHT_PIN = 15; //left sensor (Analog pin A1)

const int SPEED = 200; //general speed
const int MOVE_RIGHT_SPEED = 50; //might make local for comp
const int MOVE_LEFT_SPEED = 50; //might make local for comp
const int FAST_SPEED = 70; //
const int NORMAL_SPEED = 50; //
const int SLOW_SPEED = 10; //

const int TIME = 1000;

const int CW = false; //var for Motor.turn() to turn clockwise
const int CCW = true; //var for Motor.turn() to turn counterclockwise

//args for Motor
const int LINEAR = false;
const int ROTATIONAL = true;
const int COUNTABLE = true;

const int OPEN_THRESHOLD = 5; //distance to slow opening
const int BEAM_THRESHOLD = 250; //threshold < 700 for beam on, threshold > 700 for beam off

/*boolean stopped = false;
boolean opened = false;
boolean closed = true;
*/ //from protoype
