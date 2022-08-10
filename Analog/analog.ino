float temprature ; // A variable is defined to hold the obtained value.
int AnalogPin = 0; // Analog Pinnumber 0 is defined to receive the analog signal

void setup() {
   Serial.begin(9600);
}

void loop() {
   temprature = analogRead(AnalogPin);// Read from pin A0 
   
   temprature = 1 / (log(1 / (1023. / temprature - 1)) / 3950 + 1.0 / 298.15) - 273.15; // convert the analog volt to its temperature equivalent
   Serial.print("The Temprature is ");
   Serial.print(temprature); // display temperature value
   Serial.print(" Degrees Celsius");
   Serial.println();
   delay(1000); // Read every second
}