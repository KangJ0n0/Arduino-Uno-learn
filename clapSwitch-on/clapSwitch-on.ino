int SoundSensor=7; // LM393 Sound Sensor Digital Pin D0 connected to pin 7
int LED=13; // LED connected to pin 13
boolean LEDStatus=false;
void setup() {
 pinMode(SoundSensor,INPUT);
 pinMode(LED,OUTPUT); 
 Serial.begin(9600); //initialize serial
}
void loop() {
 int SensorData=digitalRead(SoundSensor); 
  Serial.println(SensorData);//print the value
   if(SensorData==1){

    if(LEDStatus==false){
        LEDStatus=true;
        digitalWrite(LED,HIGH);
    }
    else if(LEDStatus==true){
        LEDStatus=false;
        digitalWrite(LED,LOW);
    }}}
