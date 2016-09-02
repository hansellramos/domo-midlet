int incomingByte = 0;   // for incoming serial data

int estado = 0;

void setup() {
    pinMode(13, OUTPUT);
    Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
}

void loop() {
        // send data only when you receive data:
        if (Serial.available() > 0) {
                // read the incoming byte:
                incomingByte = Serial.read();

                if(incomingByte>=49){
                  estado = 1;
                }else{
                  estado = 0;
                }
                
                if(estado == 1){                  
                  digitalWrite(13, HIGH);
                }else{
                  digitalWrite(13, LOW);
                }

                // say what you got:
                Serial.print("I received: ");
                Serial.println(incomingByte, DEC);
                //delay(5000);
        }
        
}
