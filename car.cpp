#include<graphics.h>

void Traffic_Light()
{
    rectangle(319, 230, 329, 300); delay(500);
    rectangle(309, 150, 339, 230); delay(500);
    setfillstyle(1, RED);
    circle(325, 166, 10); delay(500);
    floodfill(324, 168, 15);
    setfillstyle(1, YELLOW);
    circle(325, 191, 10);delay(500);
    floodfill(324, 193, 15);
    setfillstyle(1, GREEN);
    circle(325, 216, 10);delay(500);
    floodfill(324, 218, 15);
}

void Buildings()
{
    rectangle(50, 150, 60, 300); delay(500);
    rectangle(245, 150, 255, 300); delay(500);
    rectangle(60, 150, 245, 200); delay(500);
    outtextxy(130, 170, "GARAGE");delay(500);

    rectangle(360, 200, 500, 300); //outer garage
    rectangle(390, 230, 470, 300); delay(500);//inner garage
    line(390, 240, 470, 240);delay(500);
    rectangle(500, 200, 639, 300);delay(500); //outer enterance
    rectangle(550, 230, 590, 300); //door
    circle(560, 265, 4); delay(500);delay(500); //door knob
    rectangle(510, 220, 540, 280);delay(500); //left window
    line(525, 220, 525, 280);
    line(510, 250, 540, 250);delay(500);
    rectangle(600, 220, 630, 280);delay(500); //right window
    line(615, 220, 615, 280);
    line(600, 250, 630, 250);delay(500);
    rectangle(360, 100, 450, 200);delay(500);//left room
    rectangle(370, 120, 400, 180);
    rectangle(402, 120, 432, 180);delay(500);
    rectangle(450, 80, 570, 200); //center room
    rectangle(460, 100, 510, 180);
    rectangle(512, 100, 562, 180);delay(500);
    int arr3[] = {590, 40, 570, 40, 570, 200, 639, 200, 639, 70, 590, 40};
    drawpoly(6, arr3); //right room
    rectangle(590, 70, 620, 120);
    rectangle(590, 125, 620, 175);delay(500);
    int arr4[] = {360, 100, 320, 85, 450, 85};
    drawpoly(3, arr4);
    int arr5[] = {320, 85, 320, 65, 450, 65, 450, 80};
    drawpoly(4, arr5);delay(500);
    int arr6[] = {450, 80, 440, 60, 580, 60, 570, 80};
    drawpoly(4, arr6);
    int arr7[] = {440, 60, 440, 45, 580, 45, 580, 60};
    drawpoly(4, arr7);delay(500);
    int arr8[] = {570, 40, 560, 40, 560, 25, 590, 25, 639, 55, 639, 70};
    drawpoly(6, arr8);
}

void Car_Move()
{
    for(int i = 0; i <= 420; i += 10)
    {
        line(0, 300, 640, 300); //Road

        //Tires
        circle(100 + i, 285, 15);
        circle(200 + i, 285, 15);
        circle(100 + i, 285, 5);  
        circle(200 + i, 285, 5);
         
        //Car's Body
        line(65 + i, 285, 85 + i, 285);
        line(115 + i, 285, 185 + i, 285);
        line(215 + i, 285, 235 + i, 285);
        line(65 + i, 285, 65 + i, 260);
        line(235 + i, 285, 235 + i, 260);
        line(65 + i, 260, 100 + i, 255);
        line(235 + i, 260, 200 + i, 255);
        line(100 + i, 255, 115 + i, 235);
        line(200 + i, 255, 185 + i, 235);
        line(115 + i, 235, 185 + i, 235);

        //Windows
        line(106 + i, 255, 118 + i, 238);
        line(118 + i, 238, 118 + i, 255);
        line(106 + i, 255, 118 + i, 255);
        line(194 + i, 255, 182 + i, 238);
        line(182 + i, 238, 182 + i, 255);
        line(194 + i, 255, 182 + i, 255);
        line(121 + i, 238, 121 + i, 255);
        line(121 + i, 238, 148 + i, 238);
        line(121 + i, 255, 148 + i, 255);
        line(148 + i, 255, 148 + i, 238);
        line(179 + i, 238, 179 + i, 255);
        line(179 + i, 238, 152 + i, 238);
        line(179 + i, 255, 152 + i, 255);
        line(152 + i, 255, 152 + i, 238);
        
        //Building
        rectangle(50, 150, 60, 300); 
        rectangle(245, 150, 255, 300); 
        rectangle(60, 150, 245, 200); 
        outtextxy(130, 170, "GARAGE");

        //House
        rectangle(360, 200, 500, 300); 
        rectangle(390, 230, 470, 300); 
        line(390, 240, 470, 240);
        rectangle(500, 200, 639, 300); 
        rectangle(550, 230, 590, 300);
        circle(560, 265, 4);
        rectangle(510, 220, 540, 280);
        line(525, 220, 525, 280);
        line(510, 250, 540, 250);
        rectangle(600, 220, 630, 280); 
        line(615, 220, 615, 280);
        line(600, 250, 630, 250);
        rectangle(360, 100, 450, 200);
        rectangle(370, 120, 400, 180);
        rectangle(402, 120, 432, 180);
        rectangle(450, 80, 570, 200); 
        rectangle(460, 100, 510, 180);
        rectangle(512, 100, 562, 180);
        int arr3[] = {590, 40, 570, 40, 570, 200, 639, 200, 639, 70, 590, 40};
        drawpoly(6, arr3); 
        rectangle(590, 70, 620, 120);
        rectangle(590, 125, 620, 175);
        int arr4[] = {360, 100, 320, 85, 450, 85};
        drawpoly(3, arr4);
        int arr5[] = {320, 85, 320, 65, 450, 65, 450, 80};
        drawpoly(4, arr5);
        int arr6[] = {450, 80, 440, 60, 580, 60, 570, 80};
        drawpoly(4, arr6);
        int arr7[] = {440, 60, 440, 45, 580, 45, 580, 60};
        drawpoly(4, arr7);
        int arr8[] = {570, 40, 560, 40, 560, 25, 590, 25, 639, 55, 639, 70};
        drawpoly(6, arr8);

        //Traffic Lights
        rectangle(319, 230, 329, 300); 
        rectangle(309, 150, 339, 230); 
        setfillstyle(1, RED);
        circle(325, 166, 10); 
        floodfill(324, 168, 15);
        setfillstyle(1, YELLOW);
        circle(325, 191, 10);
        floodfill(324, 193, 15);
        setfillstyle(1, GREEN);
        circle(325, 216, 10);
        floodfill(324, 218, 15);

        //Ship
        int arr1[] = {47 + i, 410, 150 + i, 410, 130 + i, 440, 67 + i, 440, 47 + i, 410};
        drawpoly(5, arr1);
        line(50 + i, 415, 145 + i, 415);
        line(53 + i, 420, 142 + i, 420);
        line(56 + i, 425, 139 + i, 425);
        rectangle(98 + i, 340, 102 + i, 410);
        int arr2[] = {102 + i, 340, 160 + i, 390, 102 + i, 395};
        drawpoly(3, arr2);

        delay(100);
        cleardevice(); //To erase every car frame
    }
    
}

void Ship()
{
    int arr1[] = {47, 410, 150, 410, 130, 440, 67, 440, 47, 410};
    drawpoly(5, arr1); delay(500);
    line(50, 415, 145, 415);
    line(53, 420, 142, 420);
    line(56, 425, 139, 425);delay(500);
    rectangle(98, 340, 102, 410);delay(500);
    int arr2[] = {102, 340, 160, 390, 102, 395};
    drawpoly(3, arr2);
}

int main()
{
    int i, gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    
        line(0, 300, 640, 300); //Road

        //Tires
        circle(100, 285, 15); 
        circle(100, 285, 5);  delay(500);
        circle(200, 285, 15); 
        circle(200, 285, 5); delay(500);
         
        //Car's Body
        line(65, 285, 85, 285); 
        line(115, 285, 185, 285); 
        line(215, 285, 235, 285); delay(500);
        line(65, 285, 65, 260); 
        line(235, 285, 235, 260); delay(500);
        line(65, 260, 100, 255); 
        line(235, 260, 200, 255); delay(500);
        line(100, 255, 115, 235); 
        line(200, 255, 185, 235); delay(500);
        line(115, 235, 185, 235); delay(500);

        //Windows
        line(106, 255, 118, 238); 
        line(118, 238, 118, 255); 
        line(106, 255, 118, 255);delay(500);
        line(194, 255, 182, 238);
        line(182, 238, 182, 255); 
        line(194, 255, 182, 255);delay(500);
        line(121, 238, 121, 255);
        line(121, 238, 148, 238);
        line(121, 255, 148, 255);
        line(148, 255, 148, 238);delay(500);
        line(179, 238, 179, 255);
        line(179, 238, 152, 238);
        line(179, 255, 152, 255);
        line(152, 255, 152, 238);delay(500);

        Traffic_Light(); 
        Buildings();
        Ship(); 
        Car_Move();

    getch();
    closegraph();
}