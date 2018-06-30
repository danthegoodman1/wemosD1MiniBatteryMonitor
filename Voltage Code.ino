pinMode(A0, INPUT);
pinMode(D5, OUTPUT);
digitalWrite(D5, HIGH);
// This will enable the read, since the 100k Resistor will consume 10uA
raw = analogRead(A0);
volt=raw/1023.0;
digitalWrite(D5, LOW); // Hopefully the volt variable has copied the raw value
// Otherwise just put the digitalWrite at the bottom
percentage=volt*100;
volt=volt*4.2;
// Do something with the voltage now
