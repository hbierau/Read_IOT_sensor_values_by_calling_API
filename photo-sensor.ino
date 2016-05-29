int photoresistor = A0; // This is where your photoresistor is plugged in. The other side goes to the "power" pin (below).


int analogvalue; // Here we are declaring the integer variable analogvalue, which we will use later to store the value of the photoresistor.


// Next we go into the setup function.

void setup() {

    // First, declare all of our pins. This lets our device know which ones will be used for outputting voltage, and which ones will read incoming voltage.

    pinMode(photoresistor,INPUT);  // Our photoresistor pin is input (reading the photoresistor)
   

    // We are going to declare a Particle.variable() here so that we can access the value of the photoresistor from the cloud.
    Particle.variable("analogvalue", &analogvalue, INT);
    // This is saying that when we ask the cloud for "analogvalue", this will reference the variable analogvalue in this app, which is an integer variable.

}


// Next is the loop function...

void loop() {

    // check to see what the value of the photoresistor is and store it in the int variable analogvalue
    analogvalue = analogRead(photoresistor);
    delay(100);

}