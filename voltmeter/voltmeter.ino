const int sensor =  A0;
void setup() {
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}
void loop() {
  double val = mapf(analogRead(A0), 0, 1024, 0, 25);
  Serial.println(val);
  delay(100);
}
double mapf(double val, double in_min, double in_max, double out_min, double out_max) {
  return (val - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
