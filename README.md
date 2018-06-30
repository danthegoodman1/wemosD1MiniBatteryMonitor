# wemosD1MiniBatteryMonitor
Reading the battery efficiently from a Wemos D1 Mini

## Schematic:
![Image of Schematic](https://github.com/danthegoodman1/wemosD1MiniBatteryMonitor/blob/master/Wemos%20D1%20mini%20battery%20monitor.png)

## Code:
```c++
pinMode(A0, INPUT);
pinMode(D5, OUTPUT);
digitalWrite(D5, HIGH);
// This will enable the read, since the 100k Resistor will consume 10uA
raw = analogRead(A0);
volt=raw/1023.0;
digitalWrite(D5, LOW); // Hopefully the volt variable has copied the raw value
// Otherwise just put the digitalWrite at the bottom
volt=volt*4.2;
// Do something with the voltage now
```

### [Credit](https://arduinodiy.wordpress.com/2016/12/25/monitoring-lipo-battery-voltage-with-wemos-d1-minibattery-shield-and-thingspeak/)
