#include <GL/glut.h>
#include <GL/glu.h>
#include <math.h>
#include <iostream>
using namespace std;

//Deny Pratama
//Yayan Dwi Krisdiantoro
//Arif Hayati Indah Lestari

float cc[20][2];

void init(void);
void display(void);
void keyboard(unsigned char, int, int);
void resize(int, int);
void draw_star(float,float);
void house(float,float,float);
void house2(float,float,float);
void ataspintu(float,float,float);
void kanvas(float,float,float);
void jendela(float,float,float);
void tulisan(float,float,float);
void gambar(float,float,float);
void gambar2(float,float,float);
void atap(float,float,float);
void circle1(float);
void stand(float ,float ,float );
//void luargedung(float,float,float);
float  h=5,h1=6,d1=4,g=1,g1=2;

int main (int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1100, 1100);
	glutInitWindowPosition(100, 10);
	glutCreateWindow("RUANG PAMERAN - KELOMPOK 1");
	init();

	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);

	glutReshapeFunc(resize);

	glutMainLoop();
	return 0;
}



//---------------gambar tembok kanan kiri----------------//

void house(float x,float y,float z)
{
	glColor3f(0.01,0.05,0.5);//tembok kanan
	glBegin(GL_POLYGON);
	glVertex3f(x,y,z);
	glVertex3f(x,y,z+400);
	glVertex3f(x,y+100,z+400);
	glVertex3f(x,y+100,z);
	glEnd();

	glColor3f(0.01,0.05,0.5);//tembok kiri
	glBegin(GL_POLYGON);
	glVertex3f(x-5,y,z);
	glVertex3f(x-5,y+100,z);
	glVertex3f(x-5,y+100,z+400);
	glVertex3f(x-5,y,z+400);
	glEnd();

	glColor3f(0.01,0.05,0.5);//tembok depan
	glBegin(GL_POLYGON);
	glVertex3f(x,y,z+400);
	glVertex3f(x-5,y,z+400);
	glVertex3f(x-5,y+100,z+400);
	glVertex3f(x,y+100,z+400);
	glEnd();

	glColor3f(0.01,0.05,0.5);//tembok balakang
	glBegin(GL_POLYGON);
	glVertex3f(x-5,y,z);
	glVertex3f(x-5,y+100,z);
	glVertex3f(x,y+100,z);
	glVertex3f(x,y,z);
	glEnd();

//-----------atap palinga atas----------//
	glColor3f(0.51,0.015,0.008);
	glBegin(GL_POLYGON);
	glVertex3f(x,y+100,z);
	glVertex3f(x-5,y+100,z);
	glVertex3f(x-5,y+100,z+400);
	glVertex3f(x,y+100,z+400);
	glEnd();

}
//---------------gambar tembok depan belakang----------------//

void house2(float x,float y,float z)
{
	glColor3f(0.01,0.05,0.5);//tembok kanan
	glBegin(GL_POLYGON);
	glVertex3f(x,y,z);
	glVertex3f(x,y,z+5);
	glVertex3f(x,y+100,z+5);
	glVertex3f(x,y+100,z);
	glEnd();

	glColor3f(0.01,0.05,0.5);//tembok kiri
	glBegin(GL_POLYGON);
	glVertex3f(x-5,y,z);
	glVertex3f(x-5,y+100,z);
	glVertex3f(x-5,y+100,z+5);
	glVertex3f(x-5,y,z+5);
	glEnd();

	glColor3f(0.01,0.05,0.5);//tembok depan
	glBegin(GL_POLYGON);
	glVertex3f(x,y,z+5);
	glVertex3f(x-200,y,z+5);
	glVertex3f(x-200,y+100,z+5);
	glVertex3f(x,y+100,z+5);
	glEnd();

	glColor3f(0.01,0.05,0.5);//tembok balakang
	glBegin(GL_POLYGON);
	glVertex3f(x-200,y,z);
	glVertex3f(x-200,y+100,z);
	glVertex3f(x,y+100,z);
	glVertex3f(x,y,z);
	glEnd();




//-----------atap palinga atas----------//
	glColor3f(0.51,0.015,0.008);
	glBegin(GL_POLYGON);
	glVertex3f(x,y+100,z);
	glVertex3f(x-200,y+100,z);
	glVertex3f(x-200,y+100,z+5);
	glVertex3f(x,y+100,z+5);
	glEnd();




}
//---------------gambar tembok atas pintu----------------//

void ataspintu(float x,float y,float z)
{

	glColor3f(0.01,0.05,0.5);//tembok depan
	glBegin(GL_POLYGON);
	glVertex3f(x,y,z+5);
	glVertex3f(x-50,y,z+5);
	glVertex3f(x-50,y+40,z+5);
	glVertex3f(x,y+40,z+5);
	glEnd();

	glColor3f(0.01,0.05,0.5);//tembok balakang
	glBegin(GL_POLYGON);
	glVertex3f(x-50,y,z);
	glVertex3f(x-50,y+40,z);
	glVertex3f(x,y+40,z);
	glVertex3f(x,y,z);
	glEnd();


//-----------atap palinga atas----------//
	glColor3f(0.51,0.015,0.008);
	glBegin(GL_POLYGON);
	glVertex3f(x,y+40,z);
	glVertex3f(x-50,y+40,z);
	glVertex3f(x-50,y+40,z+5);
	glVertex3f(x,y+40,z+5);
	glEnd();



}

//---------------gambar atap rumah----------------//

void atap(float x,float y,float z)
{


	glColor3f(0.8,0.4,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(x,y,z);
	glVertex3f(x+500,y,z);
	glVertex3f(x+500,y,z+500);
	glVertex3f(x,y,z+500);
	glEnd();

	//-----------atap palinga atas----------//
	glColor3f(0.2,0.8,0.008);//atap kanan
	glBegin(GL_POLYGON);
	glVertex3f(x,y,z);
	glVertex3f(x+200,y+100,z+80);
	glVertex3f(x+200,y+100,z+420);
	glVertex3f(x,y,z+500);
	glEnd();


	glColor3f(0.51,0.8,0.008);//atap kiri
	glBegin(GL_POLYGON);
	glVertex3f(x+500,y,z);
	glVertex3f(x+500,y,z+500);
	glVertex3f(x+300,y+100,z+420);
	glVertex3f(x+300,y+100,z+80);
	glEnd();


	glColor3f(0.1,0.9,0.13);//segitiga dibwah atap belakang
	glBegin(GL_POLYGON);
	glVertex3f(x+500,y,z);
	glVertex3f(x,y,z);
	glVertex3f(x+200,y+100,z+80);
	glVertex3f(x+300,y+100,z+80);

	glEnd();

	glColor3f(0.1,0.9,0.13);//segitiga dibwah atap depan
	glBegin(GL_POLYGON);
	glVertex3f(x+500,y,z+500);
	glVertex3f(x,y,z+500);
	glVertex3f(x+200,y+100,z+420);
	glVertex3f(x+300,y+100,z+420);
	glEnd();

	glColor3f(0.1,0.9,0.13);//tutup atap
	glBegin(GL_POLYGON);
	glVertex3f(x+300,y+100,z+80);
	glVertex3f(x+200,y+100,z+80);
	glVertex3f(x+200,y+100,z+420);
	glVertex3f(x+300,y+100,z+420);
	glEnd();


}
//---------------gambar kanvas----------------//

void kanvas(float x,float y,float z)
{

	glColor3f(0.8,0.6,0.4);//tembok depan
	glBegin(GL_POLYGON);
	glVertex3f(x,y,z+5);
	glVertex3f(x-50,y,z+5);
	glVertex3f(x-50,y+50,z+5);
	glVertex3f(x,y+50,z+5);
	glEnd();

}
void a(float x,float y,float z)
{

	glColor3f(0.0,0.5,0.5);//tembok depan
	glBegin(GL_POLYGON);
	glVertex3f(x,y,z+5);
	glVertex3f(x-50,y,z+5);
	glVertex3f(x-50,y+50,z+5);
	glVertex3f(x,y+50,z+5);
	glEnd();

}

//---------------gambar tulisan----------------//

void tulisan(float x,float y,float z)
{



	glColor3f(0.8,0.4,0.2);
	glBegin(GL_POLYGON);   //A
	glVertex3f(x-33,y+12,z+5);
	glVertex3f(x-37,y+5,z+5);
	glVertex3f(x-38,y+5,z+5);
	glVertex3f(x-35,y+20,z+5);
	glVertex3f(x-31,y+20,z+5);
	glVertex3f(x-28,y+5,z+5);
	glVertex3f(x-29,y+5,z+5);
	glEnd();

	glColor3f(0.8,0.4,0.2);
	glBegin(GL_POLYGON);  //R
	glVertex3f(x-24,y+13,z+5);
	glVertex3f(x-24,y+5,z+5);
	glVertex3f(x-26,y+5,z+5);
	glVertex3f(x-26,y+20,z+5);
	glVertex3f(x-19,y+20,z+5);
	glVertex3f(x-19,y+15,z+5);
	glVertex3f(x-23,y+15,z+5);
	glVertex3f(x-19,y+5,z+5);
	glVertex3f(x-21,y+5,z+5);
	glEnd();

	glColor3f(0.8,0.4,0.2);
	glBegin(GL_POLYGON);  //T
	glVertex3f(x-13,y+16,z+5);
	glVertex3f(x-17,y+16,z+5);
	glVertex3f(x-17,y+20,z+5);
	glVertex3f(x-7,y+20,z+5);
	glVertex3f(x-7,y+16,z+5);
	glVertex3f(x-11,y+16,z+5);
	glVertex3f(x-11,y+5,z+5);
	glVertex3f(x-13,y+5,z+5);
	glEnd();

	glColor3f(0.5,0.015,0.13);//bawah
	glBegin(GL_POLYGON);
	glVertex3f(x+5,y,z+5);
	glVertex3f(x-50,y,z+5);
	glVertex3f(x-50,y+2,z+5);
	glVertex3f(x+5,y+2,z+5);
	glEnd();

	glColor3f(0.5,0.015,0.13);//atas
	glBegin(GL_POLYGON);
	glVertex3f(x+5,y+23,z+5);
	glVertex3f(x-50,y+23,z+5);
	glVertex3f(x-50,y+25,z+5);
	glVertex3f(x+5,y+25,z+5);
	glEnd();

	glColor3f(0.5,0.015,0.13);//kiri
	glBegin(GL_POLYGON);
	glVertex3f(x-48,y,z+5);
	glVertex3f(x-50,y,z+5);
	glVertex3f(x-50,y+25,z+5);
	glVertex3f(x-48,y+25,z+5);
	glEnd();

	glColor3f(0.5,0.015,0.13);//kanan
	glBegin(GL_POLYGON);
	glVertex3f(x+5,y,z+5);
	glVertex3f(x+3,y,z+5);
	glVertex3f(x+3,y+25,z+5);
	glVertex3f(x+5,y+25,z+5);
	glEnd();

	glColor3f(0.5,0.015,0.13);
	glBegin(GL_POLYGON);   //tali
	glVertex3f(x-5,y+23,z+5);
	glVertex3f(x-40,y+23,z+5);
	glVertex3f(x-40,y+30,z+5);
	glVertex3f(x-5,y+30,z+5);
	glEnd();



	glColor3f(0.8,0.6,0.4);//kanvas tulisan
	glBegin(GL_POLYGON);
	glVertex3f(x+5,y,z+4.9);
	glVertex3f(x-50,y,z+4.9);
	glVertex3f(x-50,y+25,z+4.9);
	glVertex3f(x+5,y+25,z+4.9);
	glEnd();


}

//---------------gambar------------------//
void gambar(float x,float y,float z)
{
	glColor3f(0.8,0.4,0.2);
	glBegin(GL_POLYGON);   //batang
	glVertex3f(x-30,y+1,z+5);
	glVertex3f(x-36,y+1,z+5);
	glVertex3f(x-36,y+10,z+5);
	glVertex3f(x-30,y+10,z+5);
	glEnd();

	glColor3f(0.015,0.5,0.13);
	glBegin(GL_POLYGON);   //daun
	glVertex3f(x-31,y+25,z+5);
	glVertex3f(x-26,y+18,z+5);
	glVertex3f(x-29,y+18,z+5);
	glVertex3f(x-23,y+10,z+5);
	glVertex3f(x-43,y+10,z+5);
	glVertex3f(x-38,y+18,z+5);
	glVertex3f(x-40,y+18,z+5);
	glVertex3f(x-35,y+25,z+5);
	glVertex3f(x-38,y+25,z+5);
	glVertex3f(x-33,y+30,z+5);
	glVertex3f(x-28,y+25,z+5);
	glEnd();

	glColor3f(0.8,0.4,0.2);
	glBegin(GL_POLYGON);   //batang
	glVertex3f(x-20,y+1,z+5);
	glVertex3f(x-26,y+1,z+5);
	glVertex3f(x-26,y+10,z+5);
	glVertex3f(x-20,y+10,z+5);
	glEnd();

	glColor3f(0.015,0.5,0.13);
	glBegin(GL_POLYGON);   //daun
	glVertex3f(x-21,y+25,z+5);
	glVertex3f(x-16,y+18,z+5);
	glVertex3f(x-19,y+18,z+5);
	glVertex3f(x-13,y+10,z+5);
	glVertex3f(x-33,y+10,z+5);
	glVertex3f(x-28,y+18,z+5);
	glVertex3f(x-30,y+18,z+5);
	glVertex3f(x-25,y+25,z+5);
	glVertex3f(x-28,y+25,z+5);
	glVertex3f(x-23,y+30,z+5);
	glVertex3f(x-18,y+25,z+5);
	glEnd();
}

//---------------gambar2 (Gunung)------------------//
void gambar2(float x,float y,float z)
{
	glColor3f(0.1,0.2,0.9);
	glBegin(GL_POLYGON);   //gunung
	glVertex3f(x-50,y+18,z+5);
	glVertex3f(x-30,y+30,z+5);
	glVertex3f(x-16,y+23,z+5);
	glVertex3f(x-13,y+28,z+5);
	glVertex3f(x-1,y+18,z+5);
	glEnd();

	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);   //jalan
	glVertex3f(x-45,y-5,z+5);
	glVertex3f(x-10,y+18,z+5);
	glVertex3f(x-30,y-5,z+5);
	glEnd();

	glColor3f(0.015,0.5,0.13);
	glBegin(GL_LINE_STRIP);   //rumput
	glVertex3f(x-48,y+15,z+5);
	glVertex3f(x-45,y+10,z+5);
	glVertex3f(x-42,y+15,z+5);
	glVertex3f(x-39,y+10,z+5);
	glVertex3f(x-36,y+15,z+5);
	glVertex3f(x-33,y+10,z+5);
	glVertex3f(x-30,y+15,z+5);
	glVertex3f(x-27,y+10,z+5);
	glVertex3f(x-24,y+15,z+5);
	glEnd();

	glColor3f(0.015,0.5,0.13);
	glBegin(GL_LINE_STRIP);   //rumput
	glVertex3f(x-48,y+8,z+5);
	glVertex3f(x-45,y+3,z+5);
	glVertex3f(x-42,y+8,z+5);
	glVertex3f(x-39,y+3,z+5);
	glVertex3f(x-36,y+8,z+5);
	glEnd();

	glColor3f(0.015,0.5,0.13);
	glBegin(GL_LINE_STRIP);   //rumput
	glVertex3f(x-14,y+9,z+5);
	glVertex3f(x-11,y+2,z+5);
	glVertex3f(x-8,y+9,z+5);
	glVertex3f(x-5,y+2,z+5);
	glVertex3f(x-2,y+9,z+5);
	glEnd();




}


//---------------gambar frame jendela----------------//

void jendela(float x,float y,float z)
{

	glColor3f(0.5,0.015,0.13);//bawah
	glBegin(GL_POLYGON);
	glVertex3f(x,y,z+5);
	glVertex3f(x-50,y,z+5);
	glVertex3f(x-50,y+5,z+5);
	glVertex3f(x,y+5,z+5);
	glEnd();

	glColor3f(0.5,0.015,0.13);//atas
	glBegin(GL_POLYGON);
	glVertex3f(x,y+50,z+5);
	glVertex3f(x-50,y+50,z+5);
	glVertex3f(x-50,y+45,z+5);
	glVertex3f(x,y+45,z+5);
	glEnd();

	glColor3f(0.5,0.015,0.13);//kanan
	glBegin(GL_POLYGON);
	glVertex3f(x,y,z+5);
	glVertex3f(x+5,y,z+5);
	glVertex3f(x+5,y+50,z+5);
	glVertex3f(x,y+50,z+5);
	glEnd();

	glColor3f(0.5,0.015,0.13);//kiri
	glBegin(GL_POLYGON);
	glVertex3f(x-50,y,z+5);
	glVertex3f(x-45,y,z+5);
	glVertex3f(x-45,y+50,z+5);
	glVertex3f(x-50,y+50,z+5);
	glEnd();

	glColor3f(0.5,0.015,0.13);//tengah vertikal
	glBegin(GL_POLYGON);
	glVertex3f(x-25,y,z+5);
	glVertex3f(x-20,y,z+5);
	glVertex3f(x-20,y+50,z+5);
	glVertex3f(x-25,y+50,z+5);
	glEnd();

	glColor3f(0.5,0.015,0.13);//tengah horisontal
	glBegin(GL_POLYGON);
	glVertex3f(x,y+27,z+5);
	glVertex3f(x-50,y+27,z+5);
	glVertex3f(x-50,y+22,z+5);
	glVertex3f(x,y+22,z+5);
	glEnd();



}




//----------------------Letak -------------//
void house1()
{
//-------------letak tembok-----------//
	house(220,0.1,-200); //tembok kanan
	house(-220,0.1,-200); //tembok kiri
	house2(-25,0.1,195); //tembok depan kanan
	house2(220,0.1,195); //tembok depan kiri
	ataspintu(20,60,195); //tembok depan atas

	house2(-25,0.1,100); //tembok belakang1 kanan
	house2(220,0.1,100); //tembok belakang1 kiri
	ataspintu(20,60,100); //tembok belakang1 atas

	house2(-25,0.1,-100); //tembok belakang2 kanan
	house2(220,0.1,-100); //tembok belakang2 kiri
	ataspintu(20,60,-100); //tembok belakang2 atas

	house2(-25,0.1,-200); //tembok belakan3 kanan
	house2(220,0.1,-200); //tembok belakang3 kiri
	ataspintu(20,60,-200); //tembok belakang3 atas

	atap(-250,100,-250);//atap rumah

	//-----------jendela depan rumah--------------//
	jendela(-150,30,195.2); //jendela 1.1
	jendela(-50,30,195.2); //jendela 1.2
	jendela(100,30,195.2); //jendela 1.3
	jendela(200,30,195.2); //jendela 1.4

	//-----------jendela belakang rumah--------------//
	jendela(-150,30,-205.2); //jendela 2.-1
	jendela(-50,30,-205.2); //jendela 2.-2
	jendela(100,30,-205.2); //jendela 2.-3
	jendela(200,30,-205.2); //jendela 2.-4

	//-----------tulisan depan rumah--------------//
	tulisan(20,60,195.2);

	//-----------gambar pohon ruang 1-------------//
	gambar(-150,40,105.1); //kanvas 2.1
	gambar(-50,40,105.1); //kanvas 2.2
	gambar(100,40,105.1); //kanvas 2.3
	gambar(200,40,105.1); //kanvas 2.4

	//-----------gambar gunung ruang tengah -------//
	gambar2(-150,40,-94.9); //kanvas 3.1
	gambar2(-50,40,-94.9); //kanvas 3.2
	gambar2(100,40,-94.9); //kanvas 3.3
	gambar2(200,40,-94.9); //kanvas 3.4

	kanvas(-150,30,195.1); //kanvas 1.1
	kanvas(-50,30,195.1); //kanvas 1.2
	kanvas(100,30,195.1); //kanvas 1.3
	kanvas(200,30,195.1); //kanvas 1.4



	kanvas(-150,30,189); //kanvas 1.-1
	kanvas(-50,30,189); //kanvas 1.-2
	kanvas(100,30,189); //kanvas 1.-3
	kanvas(200,30,189); //kanvas 1.-4

    gambar(-150,40,189.9); //kanvas 2.1
	gambar(-50,40,189.9); //kanvas 2.2
	gambar(100,40,189.9); //kanvas 2.3
	gambar(200,40,189.9); //kanvas 2.4


	//------------------------------------------//

	kanvas(-150,30,105); //kanvas 2.1
	kanvas(-50,30,105); //kanvas 2.2
	kanvas(100,30,105); //kanvas 2.3
	kanvas(200,30,105); //kanvas 2.4

	kanvas(-150,30,94); //kanvas 2.-1
	kanvas(-50,30,94); //kanvas 2.-2
	kanvas(100,30,94); //kanvas 2.-3
	kanvas(200,30,94); //kanvas 2.-4


	//---------------------------------------//

	kanvas(-150,30,-95); //kanvas 3.1
	kanvas(-50,30,-95); //kanvas 3.2
	kanvas(100,30,-95); //kanvas 3.3
	kanvas(200,30,-95); //kanvas 3.4

	gambar(-150,40,-106.2); //kanvas 2.1
	gambar(-50,40,-106.2); //kanvas 2.2
	gambar(100,40,-106.2); //kanvas 2.3
	gambar(200,40,-106.2); //kanvas 2.4

	kanvas(-150,30,-106); //kanvas 3.-1
	kanvas(-50,30,-106); //kanvas 3.-2
	kanvas(100,30,-106); //kanvas 3.-3
	kanvas(200,30,-106); //kanvas 3.-4

	//------------------------------------//
    gambar(-150,40,-190.1); //kanvas 2.1
	gambar(-50,40,-190.1); //kanvas 2.2
	gambar(100,40,-190.1); //kanvas 2.3
	gambar(200,40,-190.1); //kanvas 2.4

	kanvas(-150,30,-191); //kanvas 2.1
	kanvas(-50,30,-191); //kanvas 2.2
	kanvas(100,30,-191); //kanvas 2.3
	kanvas(200,30,-191); //kanvas 2.4

	kanvas(-150,30,-205.1); //kanvas 2.-1
	kanvas(-50,30,-205.1); //kanvas 2.-2
	kanvas(100,30,-205.1); //kanvas 2.-3
	kanvas(200,30,-205.1); //kanvas 2.-4

	//----------- LUAR GEDUNG -------------//
//	luargedung();

}


void circle1(float c[20][2])
{
float x=0,y=03;
int i;
for(i=0;i<20;i++)
{
c[i][0]=x*cos((i+1)*36*(3.142/360))-y*sin((i+1)*36*(3.142/360));
c[i][1]=x*sin((i+1)*36*(3.142/360))+y*cos((i+1)*36*(3.142/360));
}

for(i=0;i<19;i++)
{
	glBegin(GL_POLYGON);
glVertex3f(c[i][0],c[i][1],0);
glVertex3f(c[i][0],c[i][1],40);
glVertex3f(c[i+1][0],c[i+1][1],40);
glVertex3f(c[i+1][0],c[i+1][1],0);
glEnd();
}

glBegin(GL_POLYGON);
glVertex3f(c[0][0],c[0][1],0);
glVertex3f(c[0][0],c[0][1],40);
glVertex3f(c[19][0],c[19][1],40);
glVertex3f(c[19][0],c[19][1],0);
glEnd();

}


void init(void)
{
		glClearColor(0.0,0.0,0.0,0.0);//warna langit
glEnable(GL_DEPTH_TEST);
	glMatrixMode(GL_MODELVIEW);
}




void display(void)
{
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//------------------gambar tanah------------------//
	glBegin(GL_QUADS);

	//-------------- LANTAI GEDUNG --------------------//
	glColor3f(0.8,0.6,0.4);//warna tanah bagian belakang kiri
    glVertex3f(-300.0, 0.0, -250.0);
	glColor3f(0.8,0.6,0.4);//warna tanah bagian depan kiri
	glVertex3f(-300.0, 0.0, 250.0);
	glColor3f(0.8,0.6,0.4);
	glVertex3f(300.0, 0.0, 250.0);//warna tanah bagian depan kanan
	glColor3f(0.8,0.6,0.4);
	glVertex3f(300.0, 0.0, -250.0);//warna tanah bagian belakang kanan

	//---------------- JALANAN LUAR --------------------//
	glColor3f(0.1,0.1,0.1);
	glVertex3f(-300.0, 0.0, 300.0); //jalan belakang kiri
	glColor3f(0.1,0.1,0.1);
	glVertex3f(300.0, 0.0, 300.0);//jalan belakang kanan
	glColor3f(0.1,0.1,0.1);
	glVertex3f(300.0, 0.0, 400.0);//jalan depan kanan
	glColor3f(0.1,0.1,0.1);
	glVertex3f(-300.0, 0.0, 400.0); //jalan depan kiri

	//---------------- GARIS PUTIH PUTUS PUTUS TENGAH JALAN--------------//
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-250.0, 0.01, 347.0); //jalan belakang kiri
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-200.0, 0.01, 347.0);//jalan belakang kanan
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-200.0, 0.01, 353.0);//jalan depan kanan
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-250.0, 0.01, 353.0); //jalan depan kiri

	glColor3f(0.5,0.5,0.5);
	glVertex3f(-150.0, 0.01, 347.0); //jalan belakang kiri
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-100.0, 0.01, 347.0);//jalan belakang kanan
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-100.0, 0.01, 353.0);//jalan depan kanan
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-150.0, 0.01, 353.0); //jalan depan kiri

	glColor3f(0.5,0.5,0.5);
	glVertex3f(-50.0, 0.01, 347.0); //jalan belakang kiri
	glColor3f(0.5,0.5,0.5);
	glVertex3f(0.0, 0.01, 347.0);//jalan belakang kanan
	glColor3f(0.5,0.5,0.5);
	glVertex3f(0.0, 0.01, 353.0);//jalan depan kanan
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-50.0, 0.01, 353.0); //jalan depan kiri

	glColor3f(0.5,0.5,0.5);
	glVertex3f(50.0, 0.01, 347.0); //jalan belakang kiri
	glColor3f(0.5,0.5,0.5);
	glVertex3f(100.0, 0.01, 347.0);//jalan belakang kanan
	glColor3f(0.5,0.5,0.5);
	glVertex3f(100.0, 0.01, 353.0);//jalan depan kanan
	glColor3f(0.5,0.5,0.5);
	glVertex3f(50.0, 0.01, 353.0); //jalan depan kiri

	glColor3f(0.5,0.5,0.5);
	glVertex3f(150.0, 0.01, 347.0); //jalan belakang kiri
	glColor3f(0.5,0.5,0.5);
	glVertex3f(200.0, 0.01, 347.0);//jalan belakang kanan
	glColor3f(0.5,0.5,0.5);
	glVertex3f(200.0, 0.01, 353.0);//jalan depan kanan
	glColor3f(0.5,0.5,0.5);
	glVertex3f(150.0, 0.01, 353.0); //jalan depan kiri

	glColor3f(0.5,0.5,0.5);
	glVertex3f(250.0, 0.01, 347.0); //jalan belakang kiri
	glColor3f(0.5,0.5,0.5);
	glVertex3f(300.0, 0.01, 347.0);//jalan belakang kanan
	glColor3f(0.5,0.5,0.5);
	glVertex3f(300.0, 0.01, 353.0);//jalan depan kanan
	glColor3f(0.5,0.5,0.5);
	glVertex3f(250.0, 0.01, 353.0); //jalan depan kiri

	//-----------TROTOAR----------------//
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-300.0, 0.0, 250.0); //jalan belakang kiri
	glColor3f(0.5,0.5,0.5);
	glVertex3f(300.0, 0.0, 250.0);//jalan belakang kanan
	glColor3f(0.5,0.5,0.5);
	glVertex3f(300.0, 0.0, 300.0);//jalan depan kanan
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-300.0, 0.0, 300.0); //jalan depan kiri

    glColor3f(0.3,0.3,0.3);//warna belakang kanan
    glVertex3f(-30,0.01,250);
	glColor3f(0.3,0.3,0.3);//warna belakang kiri
	glVertex3f(-30,0.01,300);
	glColor3f(0.3,0.3,0.3);//warna depan kiri
	glVertex3f(25,0.01,300);
	glColor3f(0.3,0.3,0.3);//warna depan kanan
	glVertex3f(25,0.01,250);

	//--------BATAS TROTOAR DEPAN KIRI---------//
	glColor3f(0.2,0.2,0.2);
	glVertex3f(-300.0, 2.0, 300.0); //jalan belakang kiri
	glColor3f(0.2,0.2,0.2);
	glVertex3f(-30.0, 2.0, 300.0);//jalan belakang kanan
	glColor3f(0.2,0.2,0.2);
	glVertex3f(-30.0, 0.0, 300.0);//jalan depan kanan
	glColor3f(0.2,0.2,0.2);
	glVertex3f(-300.0, 0.0, 300.0); //jalan depan kiri

	glColor3f(0.2,0.2,0.2);
	glVertex3f(-300.0, 2.0, 297.0); //jalan belakang kiri
	glColor3f(0.2,0.2,0.2);
	glVertex3f(-30.0, 2.0, 297.0);//jalan belakang kanan
	glColor3f(0.2,0.2,0.2);
	glVertex3f(-30.0, 0.0, 297.0);//jalan depan kanan
	glColor3f(0.2,0.2,0.2);
	glVertex3f(-300.0, 0.0, 297.0); //jalan depan kiri

	glColor3f(0.2,0.2,0.2);
	glVertex3f(-300.0, 2.0, 297.0); //jalan belakang kiri
	glColor3f(0.2,0.2,0.2);
	glVertex3f(-30.0, 2.0, 297.0);//jalan belakang kanan
	glColor3f(0.2,0.2,0.2);
	glVertex3f(-30.0, 2.0, 300.0);//jalan depan kanan
	glColor3f(0.2,0.2,0.2);
	glVertex3f(-300.0, 2.0, 300.0); //jalan depan kiri

	glEnd();
	glFlush();




//--------------gambar batang pohon-------------//


 	glColor3f(0.5,0.015,0.13);
    glPushMatrix();
	glTranslatef(100,1,240); //pohon depan d2
    glutSolidCube(7);
    glPopMatrix();


    glColor3f(0.5,0.015,0.13);
    glPushMatrix();
	glTranslatef(30,1,240);	//pohon depan d3
    glutSolidCube(7);
    glPopMatrix();

    glColor3f(0.5,0.015,0.13);
    glPushMatrix();				//pohon depan d4
	glTranslatef(-50,1,240);
    glutSolidCube(7);
    glPopMatrix();

    glColor3f(0.5,0.015,0.13);
    glPushMatrix();				//pohon depan d4
	glTranslatef(-130,1,240);
    glutSolidCube(7);
    glPopMatrix();

    glColor3f(0.5,0.015,0.13);
    glPushMatrix();				//pohon depan mushola
	glTranslatef(70,1,-20);
    glutSolidCube(7);
    glPopMatrix();

     glColor3f(0.5,0.015,0.13);
    glPushMatrix();				//pohon depan mushola
	glTranslatef(70,1,80);
    glutSolidCube(7);
    glPopMatrix();

     glColor3f(0.5,0.015,0.13);
    glPushMatrix();				//pohon depan mushola
	glTranslatef(-85,1,-20);
    glutSolidCube(7);
    glPopMatrix();

     glColor3f(0.5,0.015,0.13);
    glPushMatrix();				//pohon depan mushola
	glTranslatef(-85,1,80);
    glutSolidCube(7);
    glPopMatrix();




//--------------gambar daun pohon----------//



	 glColor3f(0.015,0.5,0.13);
    glPushMatrix();
    glTranslatef(100,24,240);
    glScalef(1.1,2.3,0.8);		//pohon samping d2
	glutSolidSphere(10,15,4);
	glFlush();
	glPopMatrix();

    glColor3f(0.015,0.5,0.13);
    glPushMatrix();
    glTranslatef(30,24,240);
    glScalef(1.1,2.3,0.8);		//pohon samping d3
	glutSolidSphere(10,15,4);
	glFlush();
	glPopMatrix();

    glColor3f(0.015,0.5,0.13);
    glPushMatrix();
    glTranslatef(-50,24,240); //pohon samping d4
    glScalef(1.1,2.3,0.8);
	glutSolidSphere(10,15,4);
	glFlush();
	glPopMatrix();

    glColor3f(0.015,0.5,0.13);
    glPushMatrix();
    glTranslatef(-130,24,240);
    glScalef(1.1,2.3,0.8);		//pohon samping d4
	glutSolidSphere(10,15,4);
	glFlush();
	glPopMatrix();


    glColor3f(0.015,0.5,0.13);
    glPushMatrix();
    glTranslatef(70,24,-20);
    glScalef(1.1,2.3,0.8);		//pohon depan mushola
	glutSolidSphere(10,15,4);
	glFlush();
	glPopMatrix();

	 glColor3f(0.015,0.5,0.13);
    glPushMatrix();
    glTranslatef(70,24,80);
    glScalef(1.1,2.3,0.8);		//pohon depan mushola
	glutSolidSphere(10,15,4);
	glFlush();
	glPopMatrix();

	 glColor3f(0.015,0.5,0.13);
    glPushMatrix();
    glTranslatef(-85,24,-20);
    glScalef(1.1,2.3,0.8);		//pohon depan mushola
	glutSolidSphere(10,15,4);
	glFlush();
	glPopMatrix();

	 glColor3f(0.015,0.5,0.13);
    glPushMatrix();
    glTranslatef(-85,24,80);
    glScalef(1.1,2.3,0.8);		//pohon depan mushola
	glutSolidSphere(10,15,4);
	glFlush();
	glPopMatrix();

//-------------- KARPET---------------//

		glBegin(GL_QUADS); //karpet utama
        glColor3f(0.51,0.015,0.008);//warna belakang kanan
        glVertex3f(-20,0.01,-200);
		glColor3f(0.51,0.015,0.008);//warna belakang kiri
		glVertex3f(-20,0.01,240);
		glColor3f(0.51,0.015,0.008);//warna depan kiri
		glVertex3f(15,0.01,240);
		glColor3f(0.51,0.015,0.008);//warna depan kanan
		glVertex3f(15,0.01,-200);
		glEnd();

		glBegin(GL_QUADS); //karpet melintang tengah
        glColor3f(0.51,0.015,0.008);//warna belakang kanan
        glVertex3f(-140,0.01,15);
		glColor3f(0.51,0.015,0.008);//warna belakang kiri
		glVertex3f(-140,0.01,60);
		glColor3f(0.51,0.015,0.008);//warna depan kiri
		glVertex3f(135,0.01,60);
		glColor3f(0.51,0.015,0.008);//warna depan kanan
		glVertex3f(135,0.01,15);
		glEnd();

		glBegin(GL_QUADS); //karpet melintang depan
        glColor3f(0.51,0.015,0.008);//warna belakang kanan
        glVertex3f(-140,0.01,140);
		glColor3f(0.51,0.015,0.008);//warna belakang kiri
		glVertex3f(-140,0.01,175);
		glColor3f(0.51,0.015,0.008);//warna depan kiri
		glVertex3f(135,0.01,175);
		glColor3f(0.51,0.015,0.008);//warna depan kanan
		glVertex3f(135,0.01,140);
		glEnd();

		glBegin(GL_QUADS); //karpet melintang belakang
        glColor3f(0.51,0.015,0.008);//warna belakang kanan
        glVertex3f(-140,0.01,-115);
		glColor3f(0.51,0.015,0.008);//warna belakang kiri
		glVertex3f(-140,0.01,-150);
		glColor3f(0.51,0.015,0.008);//warna depan kiri
		glVertex3f(135,0.01,-150);
		glColor3f(0.51,0.015,0.008);//warna depan kanan
		glVertex3f(135,0.01,-115);
		glEnd();


	house1();
	glFlush();
	glutSwapBuffers();


}




//-----------kontrol----------------//
void keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 'a':
	case 'A':
		glTranslatef(5.0, 0.0, 0.0);
		break;
	case 'd':
	case 'D':
		glTranslatef(-5.0, 0.0, 0.0);
		break;
	case 'w':
	case 'W':
		glTranslatef(0.0, 0.0, 5.0);
		break;
	case 's':
	case 'S':
		glTranslatef(0.0, 0.0, -5.0);
		break;
	case 'q':
	case 'Q':
            glRotatef(-2,0.5,0.0,0.0);

    case 'e':
    case 'E':
            glRotatef(2	,0.0,0.5,0.0);

	}
	display();
}

void resize(int width, int height)
{
	if (height == 0) height = 1;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

gluPerspective(80.0, width / height, 0.5, 600.0);

	glTranslatef(0.0, -15.0, -320.0);

	glMatrixMode(GL_MODELVIEW);
}

