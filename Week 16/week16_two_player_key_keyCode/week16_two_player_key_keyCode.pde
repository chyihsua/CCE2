void setup()
{
  size(400,300);
}

int x1=100,y1=150,x2=300,y2=150;

void draw()
{
  background(#FFFFF2);
  ellipse(x1,y1,30,30);
  ellipse(x2,y2,30,30);
}

void keyPressed()
{
  if (key=='a') x1-=2;
  if (key=='d') x1+=2;
  if (key=='w') y1-=2;
  if (key=='s') y1+=2;
  if (keyCode==LEFT) x2-=2;
  if (keyCode==RIGHT) x2+=2;
  if (keyCode==UP) y2-=2;
  if (keyCode==DOWN) y2+=2;
}
