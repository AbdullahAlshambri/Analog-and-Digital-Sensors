
# Using Analog and Digital Sensors with an Arduino

There are two types of sensors that could be used with an arduino, analog or digital. The sensor is catagorized based on the number of values or conditions that it can detects. Following is a brief definition of each type and simple example to clarify the concept.

## Analog Sensors

Analog Sensors Provide the user with an infinite range of values. In this example a temprature sensor is used. This kind of sensor provides the Arduino with a voltage that can be a fraction, a number, or both. Following is the code used with the arduino to obtain the voltage value from the sensor and convert it to the value of the temprature. After the value is obtained and converted, it will appear in the serial monitor.



```bash
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
```
### Circuit 
![ circuit](https://github.com/AbdullahAlshambri/Analog-and-Digital-Sensors/blob/main/Analog/Analog%20Temp.png?raw=true)


## Digital Sensors

The case is different with digital sensors wherease obtained value are limited, usually 1 and zero only. Here is an example of a button that is when pressed it retrifies a value of 1 otherwise it retrifies a value of 0.



### Code 


```bash
const int buttonPin = 11;     // pushbutton pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
 
  pinMode(buttonPin, INPUT); // initialize the pushbutton pin as an input:
  Serial.begin(9600);
}

void loop() {
  
  buttonState = digitalRead(buttonPin); // read the state of the pushbutton value:

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    Serial.print("The Button is PRESSED ");

  } else {
    Serial.print("The Button is NOT PRESSED ");

  }
   Serial.println();
   delay(2000); // Read every two seconds
}
}
```

### Circuit
![circuit](https://github.com/AbdullahAlshambri/Analog-and-Digital-Sensors/blob/main/Digital/Digital%20Pushbutton.png?raw=true)
