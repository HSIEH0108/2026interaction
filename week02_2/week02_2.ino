//week02_2_arduino_void_setup_pinMode_void_loop_digitalWrite
void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT); // 第8個腳要發出聲音
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8,HIGH); //發出高電位
  delay(1000); // 等一秒(1000ms = 1s, 1ms = 0.001s)
  digitalWrite(8,LOW);//發出低電位
  delay(1000); //等一秒(1000很慢，10很吵，2有點聲音，1音頻很高)
}
