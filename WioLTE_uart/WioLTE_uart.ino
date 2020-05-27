#include <WioLTEforArduino.h>
WioLTE Wio;
#define GroveUARTPort Serial
#define CONSOLE SerialUSB

void setup() {
  Wio.Init();
  Wio.PowerSupplyGrove(true);
  CONSOLE.begin(115200);
  GroveUARTPort.begin(115200);
  delay(1000);
  CONSOLE.println("rate = 115200)");
}

void loop() {
//受信
//  while (GroveUARTPort.available()) {
//    String recv_str = GroveUARTPort.readStringUntil('\n');
//    CONSOLE.print("Recv: ");
//    CONSOLE.println(recv_str);
//  }
//送信
  String sendstr = "esp32";
  for (int i = 0; i < sendstr.length(); i++){
    GroveUARTPort.write(sendstr.charAt(i)); 
  }
  delay(2000);
  /* Send using `GroveAPort.println("foobar");` */
}
