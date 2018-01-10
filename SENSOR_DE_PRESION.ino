int sensor=A0;
int valorSensor;
int presion;

void setup() 
{
Serial.begin(9600);
pinMode(sensor,INPUT);
}

void loop() 
{
valorSensor=analogRead(sensor);
////CONVERSION A KPA//////
///// 0-50kPa (0-7.25psi) = 0 a 40mV    0.8 mV/kPa
presion=map(valorSensor, 0, 180, 0, 50);
Serial.print("Presion:");
Serial.print(presion);
Serial.println(" Kpa");
delay(200);

}
