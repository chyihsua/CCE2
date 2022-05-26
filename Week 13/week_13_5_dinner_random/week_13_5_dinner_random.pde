void setup(){
  size(300,300);
  fill(#97C4FA);
  textSize(50);
  textAlign(CENTER,CENTER);
}

int choice=-1; //預設-1代表沒選

void draw(){
  background(#FFFAE8);
  text("Dinner 1",150,50);
  text("Dinner 2",150,150);
  text("Dinner 3",150,250);
  if (choice==0) ellipse(30,50,50,50);
  if (choice==1) ellipse(30,150,50,50);
  if (choice==2) ellipse(30,250,50,50);
               //圓形或橢圓（位置/大小）
}

void mousePressed(){ //當滑鼠按下時
  choice=int (random(3)); 
  //random會在0.00~2.99，int取整數
}
