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
const int MOVE_RIGHT_SPEED = 200; //might make local for comp
const int MOVE_LEFT_SPEED = 200; //might make local for comp
const int BEAM_THRESHOLD = 250; //threshold < 700 for beam on, threshold > 700 for beam off

/*boolean stopped = false;
boolean opened = false;
boolean closed = true;
*/ //from protoype
