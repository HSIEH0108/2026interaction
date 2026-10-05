//week05_1_arduino_do_re_mi_Serial
// 修改至week02_5_arduino_do_re_mi_Serial_begin_availabe_read_tone_if_tone
// google: 我想要把 Arduino 跟 Processing 結合
// 在 Processing 按下 key 1 2 3 對應 Arduino 的 Do Re Mi 使用 USB Serial
//寫完程式後用工具Tool-序列監控視窗Serialmointer來傳送123測試很麻煩
void setup() {
  Serial.begin(9600); // USB Serial 開始傳輸，速度 9600 bps
  tone(8, 523, 100); // Do 1秒
  delay(200); //等一下聲音出來，不要滑過去
  tone(8, 587, 100); // Re 1秒
  delay(200); //等一下聲音出來，不要滑過去
  tone(8, 659, 100); // Mi 1秒
}

void loop() {
  if (Serial.available()){ // 如果 USB Serial 有收到資料
    char c = Serial.read(); // 就讀進來
    if (c=='1') tone(8, 523, 1000); // Do 1秒
    if (c=='2') tone(8, 587, 1000); // Re 1秒
    if (c=='3') tone(8, 659, 1000); // Mi 1秒
  }
}
