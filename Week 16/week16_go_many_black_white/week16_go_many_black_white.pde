void setup()
{
  size(450,450);
}
int []bx=new int [100];//陣列
int []by=new int [100];
int N=0;//現在有幾個棋子

void draw()
{
  background(#E5C468);
  for (int xy=50;xy<450;xy+=50)//畫棋盤
  {
    line(0,xy,450,xy);
    line(xy,0,xy,450);
  }
  for(int i=0;i<N;i++)//i代表現在是第幾個棋子
  {
    if (i%2==0)fill(0);//決定黑/白棋
    else fill(255);
    ellipse(bx[i],by[i],35,35);
  }
  if (N%2==0)fill(0);//決定鼠標顯示黑/白棋
  else fill(255);
  ellipse(mouseX,mouseY,35,35);//要精準在十字上只要判斷靠近哪一個xy座標
}

void mousePressed()
{
  bx[N]=mouseX;
  by[N]=mouseY;
  N++;
}
