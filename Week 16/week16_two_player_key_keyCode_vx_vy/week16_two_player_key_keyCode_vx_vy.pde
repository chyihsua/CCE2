void setup()
{
  size(400,300);
}
int x1=100,y1=150,x2=300,y2=150;
int vx1=0,vy1=0,vx2=0,vy2=0;//速度

void draw()
{
  background(#FFFFF2);
  ellipse(x1,y1,30,30);
  ellipse(x2,y2,30,30);
  x1+=vx1; y1+=vy1;//解決無法同時反映按兩鍵的問題
  x2+=vx2; y2+=vy2;
}

void keyPressed()
{
  if (key=='a') vx1=-2;
  if (key=='d') vx1=+2;
  if (key=='w') vy1=-2;
  if (key=='s') vy1=+2;
  if (keyCode==LEFT) vx2=-2;
  if (keyCode==RIGHT) vx2=+2;
  if (keyCode==UP) vy2=-2;
  if (keyCode==DOWN) vy2=+2;
}

void keyReleased()
{
  if (key=='a'||key=='d') vx1=0;
  if (key=='w'||key=='s') vy1=0;
  if (keyCode==LEFT||keyCode==RIGHT) vx2=0;
  if (keyCode==UP||keyCode==DOWN) vy2=0;
}
