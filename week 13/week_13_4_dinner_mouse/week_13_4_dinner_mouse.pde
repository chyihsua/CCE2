void setup(){
  size(300,300);
  fill(#97C4FA);
  textSize(50);
  textAlign(CENTER,CENTER);
}

void draw(){
  background(#FFFAE8);
  text("Dinner 1",150,50);
  text("Dinner 2",150,150);
  text("Dinner 3",150,250);
  int choice=mouseX %3;//%3餘數為0,1,2三種結果
  if (choice==0) rect(0,30,50,50);//在0,30的地方畫一個50x50的矩形
  if (choice==1) rect(0,130,50,50);
  if (choice==2) rect(0,230,50,50);
  
}
