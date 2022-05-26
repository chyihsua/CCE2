size(296,170);
PImage img=loadImage("image.jpeg");//讀入圖檔
//將圖片拉進這視窗
image(img,0,0);//畫出圖檔
image(img,0,0,296/2,170/2);//調整圖片大小（圖,x座標,y座標,寬度,高度）
