//week01_3_painter_if_mousePressed_line_if_mouseButton
//想做一個(簡單的)小畫家，用mouse畫圖
void setup(){
  size(500,500);
}

void draw(){
  if (mouseButton == LEFT)stroke(255,0,0); // 左鍵紅色
  if (mouseButton == CENTER)stroke(0,255,0); // 中鍵紅色
  if (mouseButton == RIGHT)stroke(0,0,255); // 右鍵紅色
  if (mousePressed)line(mouseX,mouseY,pmouseX,pmouseY);
//按下去時(用剛剛的色彩)畫線mouse座標、之前mouse座標
}
//不懂的字，可以選它，右鍵find in reference尋找
