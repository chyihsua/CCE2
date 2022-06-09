void setup()
{
  size(450,450);
}
int bx=0,by=0;

void draw()
{
  background(#E5C468);
  for (int xy=50;xy<450;xy+=50)//畫棋盤
  {
    line(0,xy,450,xy);
    line(xy,0,xy,450);
  }
  fill(0);
  ellipse(mouseX,mouseY,35,35);
  ellipse(bx,by,35,35);
}

void mousePressed()
{
  bx=mouseX;
  by=mouseY;
}
