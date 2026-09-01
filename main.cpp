#include <windows.h>
#include<cstdio>
#include <GL/glut.h>
#include <math.h>
#define PI 3.14159265358979323846
//------------------------------------------------Mahim Start------------------------------------------//
GLfloat position_mahim = -0.9f;
GLfloat speed_mahim = 0.01f;
bool musicStarted = false;
GLfloat position_mahim1 = 0.0f;
GLfloat speed_mahim1 = 0.01f;
bool redLight_mahim = false;   // Default GREEN
bool carStopped_mahim = false;
bool busStopped_mahim = false;
bool carCanStop_mahim = true;
bool busCanStop_mahim = true;
GLfloat cloudposition_mahim = 0.0f;
GLfloat cloudspeed_mahim = 0.0005f;
float x1_mahim=-0.65f;
int currentDisplay = 0;
float x2_mahim=0.65f;
static int flag_mahim=1;
GLfloat sunX_mahim = -1.15f;
GLfloat sunY_mahim = 0.85f;
GLfloat sunspeed_mahim = 0.002f;
GLfloat flag_mahimAngle = 0.0f;
GLfloat flag_mahimRotatespeed_mahim = 0.5f;
GLfloat treeSway_mahim = 0.0f;
GLfloat treeDirection_mahim = 1.0f;
bool soundOn = true;
//------------------------------------------------Mahim End------------------------------------------//


//------------------------------------------------Fabliha Start------------------------------------------//
const int triangleAmount = 100;

GLfloat cloud1Position_fabliha = 0.0f;
GLfloat cloud1Speed_fabliha = 0.001f;

GLfloat cloud2Position_fabliha = 0.0f;
GLfloat cloud2Speed_fabliha = -0.001f;

GLfloat cloud3Position_fabliha = 0.0f;
GLfloat cloud3Speed_fabliha = 0.001f;

GLfloat boat1Position_fabliha = 0.0f;
GLfloat boat1Speed_fabliha = 0.0015f;

GLfloat boat2Position_fabliha = 0.0f;
GLfloat boat2Speed_fabliha = -0.0015f;

GLfloat car1RedPosition_fabliha = 0.0f;
GLfloat car1RedSpeed_fabliha = 0.0030f;

GLfloat car2GreenPosition_fabliha = 0.0f;
GLfloat car2GreenSpeed_fabliha = -0.0030f;

GLfloat car3BluePosition_fabliha = 0.0f;
GLfloat car3BlueSpeed_fabliha = 0.0030f;

GLfloat car4PinkPosition_fabliha = 0.0f;
GLfloat car4PinkSpeed_fabliha = -0.0030f;

GLfloat waterPosition_fabliha = 0.0f;
GLfloat waterSpeed_fabliha = 0.0015f;

// TRAFFIC SIGNAL
bool trafficRed_fabliha = true;
bool trafficGreen_fabliha = false;

// RED CAR STOP POSITION
GLfloat redCarStopPosition_fabliha = 0.27f;
//------------------------------------------------Fabliha End------------------------------------------//


//------------------------------------------------Alvi Start------------------------------------------//
GLfloat cloud1X_alvi = -1.0f;
GLfloat cloud2X_alvi = 1.0f;
GLfloat cloudSpeed_alvi = 0.001f;
// Moon
GLfloat moonX_alvi = 0.65f;
GLfloat moonY_alvi = 0.72f;
GLfloat moonSpeed_alvi = 0.0005f;
// tree movement

GLfloat treeMove_alvi = 0.0f;
GLfloat treeSpeed_alvi = 0.0004f;

bool treeMoveRight_alvi = true;
GLfloat starScale_alvi = 1.0f;
GLfloat starSpeed_alvi = 0.0005f;

bool starZoomIn_alvi = true;
GLfloat position_alvi = -2.0f;
GLfloat position2_alvi = 2.0f;

GLfloat speed_alvi = 0.02f;
bool carMove_alvi = true;

// traffic light

bool trafficRed_alvi = false;
bool trafficYellow_alvi = false;
bool trafficGreen_alvi = true;

// stop positions near traffic signal
GLfloat car1StopPosition_alvi = 0.90f;
GLfloat car2StopPosition_alvi = 0.20f;
// Road lamp control
bool lampOn_alvi = true;
bool soundOn_alvi = true;
//------------------------------------------------Alvi End------------------------------------------//

//------------------------------------------------Siam Start------------------------------------------//
// main control variables
bool paused_siam = false;
bool automaticSignal_siam = true;
int signalElapsed_siam = 0;

// cloud variables
GLfloat cloud1X_siam = -1.0f;
GLfloat cloud2X_siam = 1.0f;
GLfloat cloudSpeed_siam = 0.001f;
// Moon stays fixed in the night sky
GLfloat moonX_siam = 0.82f;
GLfloat moonY_siam = 0.82f;

// tree movement
GLfloat treeMove_siam = 0.0f;
GLfloat treeSpeed_siam = 0.0004f;
bool treeMoveRight_siam = true;
// star animation
GLfloat starScale_siam = 1.0f;
GLfloat starSpeed_siam = 0.0005f;
bool starZoomIn_siam = true;

// car movement
GLfloat position_siam = -2.0f;
GLfloat position2_siam = 2.0f;
GLfloat speed_siam = 0.02f;
bool carMove_siam = true;

// traffic light
bool trafficRed_siam = false;
bool trafficYellow_siam = false;
bool trafficGreen_siam = true;

// Both cars stop at the same visible road marking, x = 0.65.
// The values are translation values for the two sample car structures.
GLfloat car1StopPosition_siam = 1.21f;
GLfloat car2StopPosition_siam = 0.22f;

// Road lamp and WAV background sound controls
bool lampOn_siam = true;
bool soundOn_siam = false;

//------------------------------------------------Siam End------------------------------------------//

//------------------------------------------------Ananto Start------------------------------------------//
bool soundOn_ananto = true;


// Traffic light control

bool trafficRed_ananto = false;
bool trafficYellow_ananto = false;
bool trafficGreen_ananto = true;

int trafficState_ananto = 2;


// Cloud movement variables

GLfloat cloud1X_ananto = -1.0f;
GLfloat cloud2X_ananto = 1.0f;
GLfloat cloudSpeed_ananto = 0.001f;
// Tree waving animation

GLfloat treeMove_ananto = 0.0f;
GLfloat treeSpeed_ananto = 0.0004f;

bool treeMoveRight_ananto = true;
// Car movement variables

GLfloat position_ananto = -2.0f;
GLfloat position2_ananto = 2.0f;

GLfloat speed_ananto = 0.02f;

bool carMove_ananto = true;
// Flag movement variables

GLfloat flagAngle_ananto = 0.0f;

GLfloat flagRotateSpeed_ananto = 0.5f;
GLfloat moonX_ananto = 0.78f;
GLfloat moonY_ananto = 0.85f;
GLfloat moonSpeed_ananto = 0.0002f;


//------------------------------------------------Ananto End------------------------------------------//



//------------------------------------------------Mahim Start------------------------------------------//
void circle_mahim(GLfloat x, GLfloat y, GLfloat radius)
{
    int i;
    int triangleAmount = 500;
    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + radius * cos(i * twicePi / triangleAmount),
            y + radius * sin(i * twicePi / triangleAmount)
        );
    }
    glEnd();
}
void update_mahim(int value)
{
    float stopPosition = -0.50f;

    if(redLight_mahim && carCanStop_mahim)
    {
        if(position_mahim < stopPosition)
        {
            position_mahim += speed_mahim;

            if(position_mahim >= stopPosition)
            {
                position_mahim = stopPosition;
                carStopped_mahim = true;
            }
        }
        else
        {
            position_mahim = stopPosition;
            carStopped_mahim = true;
        }
    }
    else
    {
        if(!carStopped_mahim)
        {
            position_mahim += speed_mahim;
        }
    }

    if(!redLight_mahim)
    {
        carStopped_mahim = false;
    }

    if(position_mahim > 0.0f)
    {
        carCanStop_mahim = false;
    }

    if(position_mahim > 1.9f)
    {
        position_mahim = -0.9f;
        carCanStop_mahim = true;
        carStopped_mahim = false;
    }

    glutPostRedisplay();
    glutTimerFunc(30, update_mahim, 0);
}
void updateCloud_mahim(int value)
{
    if(cloudposition_mahim > 1.9f)
        cloudposition_mahim = -0.2f;

    cloudposition_mahim += cloudspeed_mahim;

    glutPostRedisplay();

    glutTimerFunc(30, updateCloud_mahim, 0);
}

void updateCloud_mahim2(int value)
{
    if(flag_mahim)
    {
        x1_mahim += 0.003f;
        x2_mahim -= 0.003f;

        if(x1_mahim > 0.26f)
        {
            flag_mahim = 0;
        }
    }

    if(!flag_mahim)
    {
        x1_mahim -= 0.003f;
        x2_mahim += 0.003f;

        if(x1_mahim < -0.65f)
        {
            flag_mahim = 1;
        }
    }

    glutPostRedisplay();

    glutTimerFunc(30, updateCloud_mahim2, 0);
}
void update_mahim1(int value1)
{
    float stopPosition = -0.15f;

    if(redLight_mahim && busCanStop_mahim)
    {
        if(position_mahim1 > stopPosition)
        {
            position_mahim1 -= speed_mahim1;

            if(position_mahim1 <= stopPosition)
            {
                position_mahim1 = stopPosition;
                busStopped_mahim = true;
            }
        }
        else
        {
            position_mahim1 = stopPosition;
            busStopped_mahim = true;
        }
    }

    else if(!busStopped_mahim)
    {
        position_mahim1 -= speed_mahim1;
    }

    if(!redLight_mahim)
    {
        busStopped_mahim = false;
    }

    if(position_mahim1 < -0.70f)
    {
        busCanStop_mahim = false;
    }

    if(position_mahim1 < -1.9f)
    {
        position_mahim1 = 1.0f;

        busCanStop_mahim = true;
        busStopped_mahim = false;
    }

    glutPostRedisplay();
    glutTimerFunc(30, update_mahim1, 0);
}
void updateSun_mahim(int value)
{
    if(sunX_mahim > 1.15f)
    {
        glutPostRedisplay();
        return;
    }

    sunX_mahim += sunspeed_mahim;
    sunY_mahim -= sunspeed_mahim * 0.2f;

    glutPostRedisplay();
    glutTimerFunc(30, updateSun_mahim, 0);
}

void updateflag_mahim(int value)
{
    flag_mahimAngle += flag_mahimRotatespeed_mahim;

    if(flag_mahimAngle > 7.0f || flag_mahimAngle < -7.0f)
        flag_mahimRotatespeed_mahim = -flag_mahimRotatespeed_mahim;

    glutPostRedisplay();
    glutTimerFunc(30, updateflag_mahim, 0);
}

void updateTree_mahim(int value)
{
    treeSway_mahim += 0.001f * treeDirection_mahim;

    if(treeSway_mahim > 0.015f)
        treeDirection_mahim = -1.0f;

    if(treeSway_mahim < -0.015f)
        treeDirection_mahim = 1.0f;

    glutPostRedisplay();

    glutTimerFunc(30, updateTree_mahim, 0);
}
void initGL()
{
    glClearColor(0.38f, 0.68f, 0.92f, 1.0f);
}
void renderBitmapString(float x, float y, float z, void *font, char *string)
{
    char *c;
    glRasterPos3f(x, y, z);

    for (c = string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}
void sound_mahim()
{
    PlaySound("National Anthem.wav", NULL, SND_ASYNC | SND_FILENAME);
}

//------------------------------------------------Mahim End------------------------------------------//

//------------------------------------------------Fabliha Start------------------------------------------//
void updateCloud1_fabliha(int value)
{
    cloud1Position_fabliha = cloud1Position_fabliha + cloud1Speed_fabliha;

    if(cloud1Position_fabliha > 2.0f)
        cloud1Position_fabliha = -2.0f;

    glutPostRedisplay();
    glutTimerFunc(1, updateCloud1_fabliha, 0);
}
void updateCloud2_fabliha(int value)
{
    cloud2Position_fabliha = cloud2Position_fabliha + cloud2Speed_fabliha;

    if(cloud2Position_fabliha < -2.0f)
        cloud2Position_fabliha = 2.0f;

    glutPostRedisplay();
    glutTimerFunc(2, updateCloud2_fabliha, 0);
}
void updateCloud3_fabliha(int value)
{
    cloud3Position_fabliha = cloud3Position_fabliha + cloud3Speed_fabliha;

    if(cloud3Position_fabliha > 2.0f)
        cloud3Position_fabliha = -2.0f;

    glutPostRedisplay();
    glutTimerFunc(3, updateCloud3_fabliha, 0);
}
void updateBoat1_fabliha(int value)
{
    boat1Position_fabliha = boat1Position_fabliha + boat1Speed_fabliha;

    if(boat1Position_fabliha > 2.0f)
        boat1Position_fabliha = -2.0f;

    glutPostRedisplay();
    glutTimerFunc(1, updateBoat1_fabliha, 0);
}
void updateBoat2_fabliha(int value)
{
    boat2Position_fabliha = boat2Position_fabliha + boat2Speed_fabliha;

    if(boat2Position_fabliha < -2.0f)
        boat2Position_fabliha = 2.0f;

    glutPostRedisplay();
    glutTimerFunc(1, updateBoat2_fabliha, 0);
}
void updateCar1Red_fabliha(int value)
{
    // RED LIGHT ON
    if(trafficRed_fabliha)
    {
        // Car moves until it reaches the traffic signal
        if(car1RedPosition_fabliha < redCarStopPosition_fabliha)
        {
            car1RedPosition_fabliha = car1RedPosition_fabliha + car1RedSpeed_fabliha;
        }

        // Stop exactly before the traffic pole
        if(car1RedPosition_fabliha >= redCarStopPosition_fabliha)
        {
            car1RedPosition_fabliha = redCarStopPosition_fabliha;
        }
    }

    // GREEN LIGHT ON
    if(trafficGreen_fabliha)
    {
        car1RedPosition_fabliha = car1RedPosition_fabliha + car1RedSpeed_fabliha;

        if(car1RedPosition_fabliha > 2.0f)
            car1RedPosition_fabliha = -2.0f;
    }
    glutPostRedisplay();
    glutTimerFunc(1, updateCar1Red_fabliha, 0);
}
void updateCar2Green_fabliha(int value)
{
    car2GreenPosition_fabliha = car2GreenPosition_fabliha + car2GreenSpeed_fabliha;

    if(car2GreenPosition_fabliha < -2.0f)
        car2GreenPosition_fabliha = 2.0f;

    glutPostRedisplay();
    glutTimerFunc(1, updateCar2Green_fabliha, 0);
}
void updateCar3Blue_fabliha(int value)
{
    car3BluePosition_fabliha = car3BluePosition_fabliha + car3BlueSpeed_fabliha;

    if(car3BluePosition_fabliha > 2.0f)
        car3BluePosition_fabliha = -2.0f;

    glutPostRedisplay();
    glutTimerFunc(1, updateCar3Blue_fabliha, 0);
}
void updateCar4Pink_fabliha(int value)
{
    car4PinkPosition_fabliha = car4PinkPosition_fabliha + car4PinkSpeed_fabliha;

    if(car4PinkPosition_fabliha < -2.0f)
        car4PinkPosition_fabliha = 2.0f;

    glutPostRedisplay();
    glutTimerFunc(1, updateCar4Pink_fabliha, 0);
}
void drawCircle_fabliha(float centerX, float centerY, float radius)
{
    int i;
    int triangleAmount = 100;
    float twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(centerX, centerY);

    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            centerX + radius * cos(i * twicePi / triangleAmount),
            centerY + radius * sin(i * twicePi / triangleAmount)
        );
    }
    glEnd();
}
void updateWater_fabliha(int value)
{
    waterPosition_fabliha = waterPosition_fabliha + waterSpeed_fabliha;

    if(waterPosition_fabliha > 2.0f)
        waterPosition_fabliha = -2.0f;

    glutPostRedisplay();
    glutTimerFunc(30, updateWater_fabliha, 0);
}

//------------------------------------------------Fabliha End------------------------------------------//

//------------------------------------------------Alvi Start------------------------------------------//
void cloudUpdate_alvi(int value)
{

    cloud1X_alvi += cloudSpeed_alvi;
    if(cloud1X_alvi > 1.5f)
    {
        cloud1X_alvi = -1.5f;
    }

    cloud2X_alvi -= cloudSpeed_alvi;

    if(cloud2X_alvi < -1.5f)
    {
        cloud2X_alvi = 1.5f;
    }

    glutPostRedisplay();

    glutTimerFunc(30, cloudUpdate_alvi, 0);
}
// move moon
void moonUpdate_alvi(int value)
{

    moonX_alvi -= moonSpeed_alvi;

    if(moonX_alvi < -1.2f)
    {
        moonX_alvi = 1.2f;
    }

    glutPostRedisplay();

    glutTimerFunc(30, moonUpdate_alvi, 0);
}
void treeUpdate_alvi(int value)
{

    if(treeMoveRight_alvi)
    {
        treeMove_alvi += treeSpeed_alvi;

        if(treeMove_alvi >= 0.008f)
        {
            treeMoveRight_alvi = false;
        }
    }

    else
    {
        treeMove_alvi -= treeSpeed_alvi;

        if(treeMove_alvi <= -0.008f)
        {
            treeMoveRight_alvi = true;
        }
    }

    glutPostRedisplay();

    glutTimerFunc(30, treeUpdate_alvi, 0);
}
void starUpdate_alvi(int value)
{

    if(starZoomIn_alvi)
    {
        starScale_alvi += starSpeed_alvi;

        if(starScale_alvi >= 1.08f)
        {
            starZoomIn_alvi = false;
        }
    }

    else
    {
        starScale_alvi -= starSpeed_alvi;

        if(starScale_alvi <= 0.95f)
        {
            starZoomIn_alvi = true;
        }
    }

    glutPostRedisplay();

    glutTimerFunc(30, starUpdate_alvi, 0);
}
void carUpdate_alvi(int value)
{

    if(carMove_alvi)
    {
        // CAR 1 - LEFT TO RIGHT
        if(trafficRed_alvi)
        {
            if(position_alvi < car1StopPosition_alvi)
            {
                position_alvi += speed_alvi;

                if(position_alvi >= car1StopPosition_alvi)
                {
                    position_alvi = car1StopPosition_alvi;
                }
            }
            else if(position_alvi > car1StopPosition_alvi)
            {
                position_alvi += speed_alvi;

                if(position_alvi > 1.8f)
                {
                    position_alvi = -2.0f;
                }
            }
        }
        else if(trafficGreen_alvi || trafficYellow_alvi)
        {
            position_alvi += speed_alvi;

            if(position_alvi > 1.8f)
            {
                position_alvi = -2.0f;
            }
        }

        // CAR 2 - RIGHT TO LEFT
        if(trafficRed_alvi)
        {
            if(position2_alvi > car2StopPosition_alvi)
            {
                position2_alvi -= speed_alvi;

                if(position2_alvi <= car2StopPosition_alvi)
                {
                    position2_alvi = car2StopPosition_alvi;
                }
            }
            else if(position2_alvi < car2StopPosition_alvi)
            {
                position2_alvi -= speed_alvi;

                if(position2_alvi < -1.8f)
                {
                    position2_alvi = 2.0f;
                }
            }
        }
        else if(trafficGreen_alvi || trafficYellow_alvi)
        {
            position2_alvi -= speed_alvi;

            if(position2_alvi < -1.8f)
            {
                position2_alvi = 2.0f;
            }
        }
    }

    glutPostRedisplay();

    glutTimerFunc(30, carUpdate_alvi, 0);
}
void drawCircle_alvi(float cx, float cy, float radius)
{
    glBegin(GL_POLYGON);

    for(int i = 0; i < 100; i++)
    {
        float angle = 2.0f * PI * i / 100.0f;

        float x = cx + radius * cos(angle);
        float y = cy + radius * sin(angle);

        glVertex2f(x, y);
    }

    glEnd();
}
void drawCloud_alvi(float x, float y)
{

    glColor3f(0.55f, 0.58f, 0.65f);

    drawCircle_alvi(x, y, 0.06f);

    drawCircle_alvi(x+0.07f, y+0.03f, 0.08f);

    drawCircle_alvi(x+0.15f, y, 0.06f);

}

// draw crescent moon without extra dark circle

void drawMoon_alvi(float cx, float cy, float radius)
{
    glColor3f(1.0f, 0.93f, 0.68f);

    glBegin(GL_TRIANGLE_STRIP);

    for(int i = 0; i <= 100; i++)
    {
        float angle = PI * i / 100.0f;

        float y = cy + radius * cos(angle);

        float outerX = cx - radius * sin(angle);
        float innerX = cx - (radius * 0.50f) * sin(angle);

        glVertex2f(outerX, y);
        glVertex2f(innerX, y);
    }

    glEnd();
}

// draw traffic light

void drawTrafficLight_alvi()
{
    // pole
    glColor3f(0.08f, 0.08f, 0.08f);

    glBegin(GL_QUADS);
    glVertex2f(0.47f, -0.52f);
    glVertex2f(0.49f, -0.52f);
    glVertex2f(0.49f, -0.30f);
    glVertex2f(0.47f, -0.30f);
    glEnd();

    // pole base
    glColor3f(0.12f, 0.12f, 0.12f);

    glBegin(GL_QUADS);
    glVertex2f(0.43f, -0.52f);
    glVertex2f(0.53f, -0.52f);
    glVertex2f(0.52f, -0.49f);
    glVertex2f(0.44f, -0.49f);
    glEnd();

    // signal box
    glColor3f(0.04f, 0.04f, 0.04f);

    glBegin(GL_QUADS);
    glVertex2f(0.42f, -0.30f);
    glVertex2f(0.54f, -0.30f);
    glVertex2f(0.54f, -0.06f);
    glVertex2f(0.42f, -0.06f);
    glEnd();

    // red light
    if(trafficRed_alvi)
        glColor3f(1.0f, 0.0f, 0.0f);
    else
        glColor3f(0.25f, 0.0f, 0.0f);

    drawCircle_alvi(0.48f, -0.105f, 0.027f);

    // yellow light
    if(trafficYellow_alvi)
        glColor3f(1.0f, 0.85f, 0.0f);
    else
        glColor3f(0.25f, 0.20f, 0.0f);

    drawCircle_alvi(0.48f, -0.18f, 0.027f);

    // green light
    if(trafficGreen_alvi)
        glColor3f(0.0f, 1.0f, 0.0f);
    else
        glColor3f(0.0f, 0.25f, 0.0f);

    drawCircle_alvi(0.48f, -0.255f, 0.027f);
}
//------------------------------------------------Alvi End------------------------------------------//

//------------------------------------------------Siam Start------------------------------------------//

void cloudUpdate_siam(int value)
{
    if(!paused_siam)
    {
        cloud1X_siam += cloudSpeed_siam;

        if(cloud1X_siam > 1.5f)
        {
            cloud1X_siam = -1.5f;
        }

        cloud2X_siam -= cloudSpeed_siam;

        if(cloud2X_siam < -1.5f)
        {
            cloud2X_siam = 1.5f;
        }
    }

    glutPostRedisplay();
    glutTimerFunc(30, cloudUpdate_siam, 0);
}

void treeUpdate_siam(int value)
{
    if(!paused_siam)
    {
        if(treeMoveRight_siam)
        {
            treeMove_siam += treeSpeed_siam;

            if(treeMove_siam >= 0.008f)
            {
                treeMoveRight_siam = false;
            }
        }
        else
        {
            treeMove_siam -= treeSpeed_siam;

            if(treeMove_siam <= -0.008f)
            {
                treeMoveRight_siam = true;
            }
        }
    }

    glutPostRedisplay();
    glutTimerFunc(30, treeUpdate_siam, 0);
}

void starUpdate_siam(int value)
{
    if(!paused_siam)
    {
        if(starZoomIn_siam)
        {
            starScale_siam += starSpeed_siam;

            if(starScale_siam >= 1.08f)
            {
                starZoomIn_siam = false;
            }
        }
        else
        {
            starScale_siam -= starSpeed_siam;

            if(starScale_siam <= 0.95f)
            {
                starZoomIn_siam = true;
            }
        }
    }

    glutPostRedisplay();
    glutTimerFunc(30, starUpdate_siam, 0);
}
void carUpdate_siam(int value)
{
    if(!paused_siam)
    {
        // Automatic signal timing: RED -> GREEN -> YELLOW -> RED.
        if(automaticSignal_siam)
        {
            signalElapsed_siam += 30;

            if(trafficRed_siam && signalElapsed_siam >= 6000)
            {
                trafficRed_siam = false;
                trafficYellow_siam = false;
                trafficGreen_siam = true;
                signalElapsed_siam = 0;
            }
            else if(trafficGreen_siam && signalElapsed_siam >= 7000)
            {
                trafficRed_siam = false;
                trafficYellow_siam = true;
                trafficGreen_siam = false;
                signalElapsed_siam = 0;
            }
            else if(trafficYellow_siam && signalElapsed_siam >= 1500)
            {
                trafficRed_siam = true;
                trafficYellow_siam = false;
                trafficGreen_siam = false;
                signalElapsed_siam = 0;
            }
        }

        if(carMove_siam)
        {
            // CAR 1 - LEFT TO RIGHT
            if(trafficRed_siam)
            {
                if(position_siam < car1StopPosition_siam)
                {
                    position_siam += speed_siam;

                    if(position_siam >= car1StopPosition_siam)
                    {
                        position_siam = car1StopPosition_siam;
                    }
                }
                else if(position_siam > car1StopPosition_siam)
                {
                    position_siam += speed_siam;

                    if(position_siam > 1.8f)
                    {
                        position_siam = -2.0f;
                    }
                }
            }
            else if(trafficGreen_siam || trafficYellow_siam)
            {
                position_siam += speed_siam;

                if(position_siam > 1.8f)
                {
                    position_siam = -2.0f;
                }
            }

            // CAR 2 - RIGHT TO LEFT
            if(trafficRed_siam)
            {
                if(position2_siam > car2StopPosition_siam)
                {
                    position2_siam -= speed_siam;

                    if(position2_siam <= car2StopPosition_siam)
                    {
                        position2_siam = car2StopPosition_siam;
                    }
                }
                else if(position2_siam < car2StopPosition_siam)
                {
                    position2_siam -= speed_siam;

                    if(position2_siam < -1.8f)
                    {
                        position2_siam = 2.0f;
                    }
                }
            }
            else if(trafficGreen_siam || trafficYellow_siam)
            {
                position2_siam -= speed_siam;

                if(position2_siam < -1.8f)
                {
                    position2_siam = 2.0f;
                }
            }
        }
    }

    glutPostRedisplay();
    glutTimerFunc(30, carUpdate_siam, 0);
}

void sound_siam()
{
    PlaySound("Ibn-Al-Noor(chosic.com).wav", NULL, SND_ASYNC | SND_FILENAME | SND_LOOP);
    soundOn_siam = true;
}

void stopSound_siam()
{
    PlaySound(NULL, NULL, 0);
    soundOn_siam = false;
}
void drawCircle_siam(float cx, float cy, float radius)
{
    glBegin(GL_POLYGON);

    for(int i = 0; i < 100; i++)
    {
        float angle = 2.0f * PI * i / 100.0f;
        float x = cx + radius * cos(angle);
        float y = cy + radius * sin(angle);

        glVertex2f(x, y);
    }

    glEnd();
}
void drawCloud_siam(float x, float y)
{
    glColor3f(0.18f, 0.22f, 0.30f);
    drawCircle_siam(x, y, 0.06f);
    drawCircle_siam(x + 0.07f, y + 0.03f, 0.08f);
    drawCircle_siam(x + 0.15f, y, 0.06f);
}

// draw crescent moon using only circles
void drawMoon_siam(float cx, float cy, float radius)
{
    glColor3f(1.0f, 0.93f, 0.68f);
    drawCircle_siam(cx, cy, radius);

    glColor3f(0.025f, 0.045f, 0.095f);
    drawCircle_siam(cx + 0.050f, cy + 0.012f, radius - 0.007f);
}

// draw traffic light
void drawTrafficLight_siam()
{
    // pole
    glColor3f(0.08f, 0.08f, 0.08f);
    glBegin(GL_QUADS);
    glVertex2f(0.75f, -0.55f);
    glVertex2f(0.77f, -0.55f);
    glVertex2f(0.77f, -0.30f);
    glVertex2f(0.75f, -0.30f);
    glEnd();

    // pole base
    glColor3f(0.12f, 0.12f, 0.12f);
    glBegin(GL_QUADS);
    glVertex2f(0.71f, -0.55f);
    glVertex2f(0.81f, -0.55f);
    glVertex2f(0.80f, -0.52f);
    glVertex2f(0.72f, -0.52f);
    glEnd();

    // signal box
    glColor3f(0.04f, 0.04f, 0.04f);
    glBegin(GL_QUADS);
    glVertex2f(0.70f, -0.30f);
    glVertex2f(0.82f, -0.30f);
    glVertex2f(0.82f, -0.06f);
    glVertex2f(0.70f, -0.06f);
    glEnd();

    // red light
    if(trafficRed_siam)
        glColor3f(1.0f, 0.0f, 0.0f);
    else
        glColor3f(0.25f, 0.0f, 0.0f);

    drawCircle_siam(0.76f, -0.105f, 0.027f);

    // yellow light
    if(trafficYellow_siam)
        glColor3f(1.0f, 0.85f, 0.0f);
    else
        glColor3f(0.25f, 0.20f, 0.0f);

    drawCircle_siam(0.76f, -0.18f, 0.027f);

    // green light
    if(trafficGreen_siam)
        glColor3f(0.0f, 1.0f, 0.0f);
    else
        glColor3f(0.0f, 0.25f, 0.0f);

    drawCircle_siam(0.76f, -0.255f, 0.027f);
}

//------------------------------------------------Siam End------------------------------------------//

//------------------------------------------------Ananto Start------------------------------------------//
void cloudUpdate_ananto(int value)
{

    cloud1X_ananto += cloudSpeed_ananto;

    if(cloud1X_ananto > 1.5f)
    {
        cloud1X_ananto = -1.5f;
    }


    cloud2X_ananto -= cloudSpeed_ananto;

    if(cloud2X_ananto < -1.5f)
    {
        cloud2X_ananto = 1.5f;
    }


    glutPostRedisplay();

    glutTimerFunc(30, cloudUpdate_ananto, 0);

}
void moonUpdate_ananto(int value)
{

    moonX_ananto -= moonSpeed_ananto;


    if(moonX_ananto < -1.2f)
    {
        moonX_ananto = 1.2f;
    }


    glutPostRedisplay();

    glutTimerFunc(30, moonUpdate_ananto, 0);

}
void treeUpdate_ananto(int value)
{

    if(treeMoveRight_ananto)
    {

        treeMove_ananto += treeSpeed_ananto;

        if(treeMove_ananto >= 0.008f)
        {
            treeMoveRight_ananto = false;
        }

    }

    else
    {

        treeMove_ananto -= treeSpeed_ananto;

        if(treeMove_ananto <= -0.008f)
        {
            treeMoveRight_ananto = true;
        }

    }


    glutPostRedisplay();

    glutTimerFunc(30, treeUpdate_ananto, 0);

}
void carUpdate_ananto(int value)
{

    if(carMove_ananto)
    {

        if(trafficGreen_ananto)
        {

            position_ananto += speed_ananto;

            position2_ananto -= speed_ananto;

        }

        else if(trafficYellow_ananto)
        {

            position_ananto += speed_ananto * 0.5f;

            position2_ananto -= speed_ananto * 0.5f;

        }


        if(position_ananto > 1.8f)
        {
            position_ananto = -2.0f;
        }


        if(position2_ananto < -1.8f)
        {
            position2_ananto = 2.0f;
        }

    }


    glutPostRedisplay();

    glutTimerFunc(30, carUpdate_ananto, 0);

}
void updateFlag_ananto(int value)
{

    flagAngle_ananto += flagRotateSpeed_ananto;


    if(flagAngle_ananto > 7.0f || flagAngle_ananto < -7.0f)
    {
        flagRotateSpeed_ananto = -flagRotateSpeed_ananto;
    }


    glutPostRedisplay();

    glutTimerFunc(30, updateFlag_ananto, 0);

}

// Update traffic light

void trafficUpdate_ananto(int value)
{

    trafficState_ananto++;


    if(trafficState_ananto > 2)
    {
        trafficState_ananto = 0;
    }


    if(trafficState_ananto == 0)
    {

        trafficRed_ananto = true;

        trafficYellow_ananto = false;

        trafficGreen_ananto = false;

    }

    else if(trafficState_ananto == 1)
    {

        trafficRed_ananto = false;

        trafficYellow_ananto = true;

        trafficGreen_ananto = false;

    }

    else
    {

        trafficRed_ananto = false;

        trafficYellow_ananto = false;

        trafficGreen_ananto = true;

    }


    glutPostRedisplay();

    glutTimerFunc(3000, trafficUpdate_ananto, 0);

}
void drawCircle_ananto(float cx, float cy, float radius)
{

    glBegin(GL_POLYGON);


    for(int i = 0; i < 100; i++)
    {

        float angle = 2.0f * PI * i / 100.0f;


        float x = cx + radius * cos(angle);

        float y = cy + radius * sin(angle);


        glVertex2f(x,y);

    }


    glEnd();

}


// Draw cloud

void drawCloud_ananto(float x, float y)
{

    glColor3f(0.55f,0.58f,0.65f);


    drawCircle_ananto(x,y,0.05f);


    drawCircle_ananto(x+0.06f,y+0.025f,0.065f);


    drawCircle_ananto(x+0.13f,y,0.05f);

}


// Draw traffic light

void drawTrafficLight_ananto()
{

    glColor3f(0.15f,0.15f,0.15f);


    glBegin(GL_QUADS);

    glVertex2f(0.82f,-0.55f);

    glVertex2f(0.85f,-0.55f);

    glVertex2f(0.85f,0.05f);

    glVertex2f(0.82f,0.05f);

    glEnd();


    glColor3f(0.02f,0.02f,0.02f);


    glBegin(GL_QUADS);

    glVertex2f(0.77f,0.05f);

    glVertex2f(0.90f,0.05f);

    glVertex2f(0.90f,0.35f);

    glVertex2f(0.77f,0.35f);

    glEnd();


    if(trafficRed_ananto)
        glColor3f(1.0f,0.0f,0.0f);

    else
        glColor3f(0.3f,0.0f,0.0f);


    drawCircle_ananto(0.835f,0.28f,0.035f);



    if(trafficYellow_ananto)
        glColor3f(1.0f,1.0f,0.0f);

    else
        glColor3f(0.3f,0.3f,0.0f);


    drawCircle_ananto(0.835f,0.20f,0.035f);



    if(trafficGreen_ananto)
        glColor3f(0.0f,1.0f,0.0f);

    else
        glColor3f(0.0f,0.3f,0.0f);


    drawCircle_ananto(0.835f,0.12f,0.035f);

}

//------------------------------------------------Ananto End------------------------------------------//


void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0f, 0.0f, 0.0f);
    renderBitmapString(-0.78f, 0.88f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "AMERICAN INTERNATIONAL UNIVERSITY-BANGLADESH");
    renderBitmapString(-0.78f, 0.81f, 0.0f, GLUT_BITMAP_HELVETICA_18, "Faculty of Science and Technology (FST)");

    renderBitmapString(-0.78f, 0.74f, 0.0f, GLUT_BITMAP_HELVETICA_18, "Department of Computer Science and Engineering.");

    renderBitmapString(-0.78f, 0.65f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "Project Title: Interactive Visualization of Bangladesh's Iconic Landmarks");

    renderBitmapString(-0.78f, 0.55f, 0.0f, GLUT_BITMAP_HELVETICA_18, "Group: 01");
    renderBitmapString(-0.78f, 0.41f, 0.0f, GLUT_BITMAP_HELVETICA_18, "Semester");
    renderBitmapString(-0.35f, 0.41f, 0.0f, GLUT_BITMAP_HELVETICA_18, "Summer 2025-26");

    renderBitmapString(-0.78f, 0.35f, 0.0f, GLUT_BITMAP_HELVETICA_18, "Course Name");
    renderBitmapString(-0.35f, 0.35f, 0.0f, GLUT_BITMAP_HELVETICA_18, "Computer Graphics");

    renderBitmapString(-0.78f, 0.29f, 0.0f, GLUT_BITMAP_HELVETICA_18, "Course Code");
    renderBitmapString(-0.35f, 0.29f, 0.0f, GLUT_BITMAP_HELVETICA_18, "CSC4118");

    renderBitmapString(-0.78f, 0.23f, 0.0f, GLUT_BITMAP_HELVETICA_18, "Section");
    renderBitmapString(-0.35f, 0.23f, 0.0f, GLUT_BITMAP_HELVETICA_18, "H");

    renderBitmapString(-0.78f, 0.17f, 0.0f, GLUT_BITMAP_HELVETICA_18, "Supervised by");
    renderBitmapString(-0.35f, 0.17f, 0.0f, GLUT_BITMAP_HELVETICA_18, "MAHFUJUR RAHMAN");

    renderBitmapString(-0.78f, -0.10f, 0.0f, GLUT_BITMAP_HELVETICA_18, "Submitted by:");

    renderBitmapString(-0.78f, -0.15f, 0.0f, GLUT_BITMAP_HELVETICA_18, "SL No.");
    renderBitmapString(-0.52f, -0.15f, 0.0f, GLUT_BITMAP_HELVETICA_18, "Student ID");
    renderBitmapString(-0.20f, -0.15f, 0.0f, GLUT_BITMAP_HELVETICA_18, "Student Name");

    renderBitmapString(-0.78f, -0.30f, 0.0f, GLUT_BITMAP_HELVETICA_18, "6");
    renderBitmapString(-0.52f, -0.30f, 0.0f, GLUT_BITMAP_HELVETICA_18, "23-52436-2");
    renderBitmapString(-0.20f, -0.30f, 0.0f, GLUT_BITMAP_HELVETICA_18, "Ananta Saha Pranta");

    renderBitmapString(-0.78f, -0.45f, 0.0f, GLUT_BITMAP_HELVETICA_18, "8");
    renderBitmapString(-0.52f, -0.45f, 0.0f, GLUT_BITMAP_HELVETICA_18, "23-52442-2");
    renderBitmapString(-0.20f, -0.45f, 0.0f, GLUT_BITMAP_HELVETICA_18, "Abdur Rahman Alvi");

    renderBitmapString(-0.78f, -0.60f, 0.0f, GLUT_BITMAP_HELVETICA_18, "33");
    renderBitmapString(-0.52f, -0.60f, 0.0f, GLUT_BITMAP_HELVETICA_18, "24-56556-1");
    renderBitmapString(-0.20f, -0.60f, 0.0f, GLUT_BITMAP_HELVETICA_18, "Fabiha Tahsin");

    renderBitmapString(-0.78f, -0.75f, 0.0f, GLUT_BITMAP_HELVETICA_18, "34");
    renderBitmapString(-0.52f, -0.75f, 0.0f, GLUT_BITMAP_HELVETICA_18, "24-56577-1");
    renderBitmapString(-0.20f, -0.75f, 0.0f, GLUT_BITMAP_HELVETICA_18, "Mahim Hossain");

    renderBitmapString(-0.78f, -0.90f, 0.0f, GLUT_BITMAP_HELVETICA_18, "21");
    renderBitmapString(-0.52f, -0.90f, 0.0f, GLUT_BITMAP_HELVETICA_18, "23-54131-3");
    renderBitmapString(-0.20f, -0.90f, 0.0f, GLUT_BITMAP_HELVETICA_18, "Abdullah Siam");
    glColor3f(1.0f, 0.0f, 0.0f);
    renderBitmapString(0.7f, -0.8f, 0.0f, GLUT_BITMAP_HELVETICA_18, "Press I to view Instructions");
    renderBitmapString(0.7f, -0.9f, 0.0f, GLUT_BITMAP_HELVETICA_18, "Press S to Start the Project");
    glFlush();
}
void display_instruction()
{
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0f, 0.0f, 0.0f);

    renderBitmapString(-0.20f, 0.90f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "Instruction Page");

    // ================= 1. BANGLADESH PARLIAMENT =================
    renderBitmapString(-0.85f, 0.80f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "1. Bangladesh Parliament [MAHIM HOSSAIN]");
    renderBitmapString(-0.75f, 0.74f, 0.0f, GLUT_BITMAP_HELVETICA_12, "S / s / 1 -> View Bangladesh Parliament Scenario");
    renderBitmapString(-0.75f, 0.68f, 0.0f, GLUT_BITMAP_HELVETICA_12, "R / r -> Turn ON the Red Traffic Light");
    renderBitmapString(-0.75f, 0.62f, 0.0f, GLUT_BITMAP_HELVETICA_12, "G / g -> Turn ON the Green Traffic Light");
    renderBitmapString(-0.75f, 0.56f, 0.0f, GLUT_BITMAP_HELVETICA_12, "L / l -> Increase Vehicle Speed");
    renderBitmapString(-0.75f, 0.50f, 0.0f, GLUT_BITMAP_HELVETICA_12, "H / h -> Decrease Vehicle Speed");
    renderBitmapString(-0.75f, 0.44f, 0.0f, GLUT_BITMAP_HELVETICA_12, "M / m -> Mute Background Music");
    renderBitmapString(-0.75f, 0.38f, 0.0f, GLUT_BITMAP_HELVETICA_12, "U / u -> Unmute Background Music");

    // ================= 2. HATIRJHEEL =================
    renderBitmapString(-0.85f, 0.29f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "2. Hatirjheel [FABLIHA TAHSIN]");
    renderBitmapString(-0.75f, 0.23f, 0.0f, GLUT_BITMAP_HELVETICA_12, "F / f / 2 -> View Hatirjheel Scenario");
    renderBitmapString(-0.75f, 0.17f, 0.0f, GLUT_BITMAP_HELVETICA_12, "R / r -> Turn ON the Red Traffic Light");
    renderBitmapString(-0.75f, 0.11f, 0.0f, GLUT_BITMAP_HELVETICA_12, "G / g -> Turn ON the Green Traffic Light");

    // ================= 3. SHAHID MINAR =================
    renderBitmapString(-0.85f, 0.02f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "3. Shahid Minar [ABDUR RAHMAN ALVI");
    renderBitmapString(-0.75f, -0.04f, 0.0f, GLUT_BITMAP_HELVETICA_12, "3 -> View Shahid Minar Scenario");
    renderBitmapString(-0.75f, -0.10f, 0.0f, GLUT_BITMAP_HELVETICA_12, "UP Arrow -> Increase Vehicle Speed");
    renderBitmapString(-0.75f, -0.16f, 0.0f, GLUT_BITMAP_HELVETICA_12, "DOWN Arrow -> Decrease Vehicle Speed");
    renderBitmapString(-0.75f, -0.22f, 0.0f, GLUT_BITMAP_HELVETICA_12, "LEFT Arrow -> Stop Vehicles");
    renderBitmapString(-0.75f, -0.28f, 0.0f, GLUT_BITMAP_HELVETICA_12, "RIGHT Arrow -> Move Vehicles");
    renderBitmapString(-0.75f, -0.34f, 0.0f, GLUT_BITMAP_HELVETICA_12, "O / o -> Turn ON Street Lights");
    renderBitmapString(-0.75f, -0.40f, 0.0f, GLUT_BITMAP_HELVETICA_12, "L / l -> Turn OFF Street Lights");
    renderBitmapString(-0.75f, -0.46f, 0.0f, GLUT_BITMAP_HELVETICA_12, "R / r -> Red Traffic Light");
    renderBitmapString(-0.75f, -0.52f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Y / y -> Yellow Traffic Light");
    renderBitmapString(-0.75f, -0.58f, 0.0f, GLUT_BITMAP_HELVETICA_12, "G / g -> Green Traffic Light");
    renderBitmapString(-0.75f, -0.64f, 0.0f, GLUT_BITMAP_HELVETICA_12, "S / s -> Reset Vehicles");
    renderBitmapString(-0.75f, -0.70f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Left Click -> Mute Sound");
    renderBitmapString(-0.75f, -0.76f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Right Click -> Play Sound");

    renderBitmapString(0.55f, -0.83f, 0.0f, GLUT_BITMAP_HELVETICA_18, "Press B -> Back to Front Page");
    renderBitmapString(0.55f, -0.88f, 0.0f, GLUT_BITMAP_HELVETICA_18, "Press 1 -> Go to First Scenario");

    // ================= 4. NATIONAL MARTYRS MEMORIAL =================
    renderBitmapString(0.05f, 0.80f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "4. National Martyrs Memorial [ANANTA SAHA PRANTA]");
    renderBitmapString(0.10f, 0.74f, 0.0f, GLUT_BITMAP_HELVETICA_12, "5 -> View National Martyrs Memorial Scenario");
    renderBitmapString(0.10f, 0.68f, 0.0f, GLUT_BITMAP_HELVETICA_12, "R / r -> Red Traffic Light");
    renderBitmapString(0.10f, 0.62f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Y / y -> Yellow Traffic Light");
    renderBitmapString(0.10f, 0.56f, 0.0f, GLUT_BITMAP_HELVETICA_12, "G / g -> Green Traffic Light");
    renderBitmapString(0.10f, 0.50f, 0.0f, GLUT_BITMAP_HELVETICA_12, "S / s -> Reset Vehicles");
    renderBitmapString(0.10f, 0.44f, 0.0f, GLUT_BITMAP_HELVETICA_12, "UP Arrow -> Increase Vehicle Speed");
    renderBitmapString(0.10f, 0.38f, 0.0f, GLUT_BITMAP_HELVETICA_12, "DOWN Arrow -> Decrease Vehicle Speed");
    renderBitmapString(0.10f, 0.32f, 0.0f, GLUT_BITMAP_HELVETICA_12, "LEFT Arrow -> Stop Vehicles");
    renderBitmapString(0.10f, 0.26f, 0.0f, GLUT_BITMAP_HELVETICA_12, "RIGHT Arrow -> Move Vehicles");
    renderBitmapString(0.10f, 0.20f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Left Click -> Mute Sound");
    renderBitmapString(0.10f, 0.14f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Right Click -> Play Sound");

// ================= 5. BAITUL MUKARRAM =================
    renderBitmapString(0.05f, 0.08f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "5. Baitul Mukarram [ABDULLAH SIAM]");
    renderBitmapString(0.10f, 0.02f, 0.0f, GLUT_BITMAP_HELVETICA_12, "UP Arrow -> Increase Speed");
    renderBitmapString(0.10f, -0.04f, 0.0f, GLUT_BITMAP_HELVETICA_12, "DOWN Arrow -> Decrease Speed");
    renderBitmapString(0.10f, -0.10f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Left Click -> Pause / Resume");
    renderBitmapString(0.10f, -0.16f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Right Click -> Automatic Signal");
    glFlush();
}

//------------------------------------------------Mahim Start------------------------------------------//
void display_mahim()
{
    glClear(GL_COLOR_BUFFER_BIT);
    //SKy
    glColor3f(0.38f, 0.68f, 0.92f);
    glBegin(GL_QUADS);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f( 1.0f, 1.0f);
    glVertex2f( 1.0f, 0.15f);
    glVertex2f(-1.0f, 0.15f);
    glEnd();
    // Green
    glColor3f(0.10f, 0.55f, 0.12f);
    glBegin(GL_QUADS);
    glVertex2f(-1.0f, 0.15f);
    glVertex2f( 1.0f, 0.15f);
    glVertex2f( 1.0f, -0.55f);
    glVertex2f(-1.0f, -0.55f);
    glEnd();
    // Road
    glColor3f(0.18f, 0.18f, 0.18f);
    glBegin(GL_QUADS);
    glVertex2f(-1.0f, -0.55f);
    glVertex2f( 1.0f, -0.55f);
    glVertex2f( 1.0f, -1.0f);
    glVertex2f(-1.0f, -1.0f);
    glEnd();
    // Road middle line
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);

    glVertex2f(-0.90f, -0.76f);
    glVertex2f(-0.78f, -0.76f);
    glVertex2f(-0.78f, -0.75f);
    glVertex2f(-0.90f, -0.75f);

    glVertex2f(-0.72f, -0.76f);
    glVertex2f(-0.60f, -0.76f);
    glVertex2f(-0.60f, -0.75f);
    glVertex2f(-0.72f, -0.75f);

    glVertex2f(-0.54f, -0.76f);
    glVertex2f(-0.42f, -0.76f);
    glVertex2f(-0.42f, -0.75f);
    glVertex2f(-0.54f, -0.75f);

    glVertex2f(-0.36f, -0.76f);
    glVertex2f(-0.24f, -0.76f);
    glVertex2f(-0.24f, -0.75f);
    glVertex2f(-0.36f, -0.75f);

    glVertex2f(-0.18f, -0.76f);
    glVertex2f(-0.06f, -0.76f);
    glVertex2f(-0.06f, -0.75f);
    glVertex2f(-0.18f, -0.75f);

    glVertex2f(0.00f, -0.76f);
    glVertex2f(0.12f, -0.76f);
    glVertex2f(0.12f, -0.75f);
    glVertex2f(0.00f, -0.75f);

    glVertex2f(0.18f, -0.76f);
    glVertex2f(0.30f, -0.76f);
    glVertex2f(0.30f, -0.75f);
    glVertex2f(0.18f, -0.75f);

    glVertex2f(0.36f, -0.76f);
    glVertex2f(0.48f, -0.76f);
    glVertex2f(0.48f, -0.75f);
    glVertex2f(0.36f, -0.75f);

    glVertex2f(0.54f, -0.76f);
    glVertex2f(0.66f, -0.76f);
    glVertex2f(0.66f, -0.75f);
    glVertex2f(0.54f, -0.75f);

    glVertex2f(0.72f, -0.76f);
    glVertex2f(0.84f, -0.76f);
    glVertex2f(0.84f, -0.75f);
    glVertex2f(0.72f, -0.75f);
    glEnd();
    // Left path
    glColor3f(0.30f, 0.25f, 0.22f);
    glBegin(GL_QUADS);
    glVertex2f(-0.72f, -0.55f);
    glVertex2f(-0.50f, -0.55f);
    glVertex2f(-0.22f, 0.15f);
    glVertex2f(-0.32f, 0.15f);
    glEnd();
    // Right path
    glColor3f(0.30f, 0.25f, 0.22f);
    glBegin(GL_QUADS);
    glVertex2f(0.50f, -0.55f);
    glVertex2f(0.72f, -0.55f);
    glVertex2f(0.32f, 0.15f);
    glVertex2f(0.22f, 0.15f);
    glEnd();
    // Pool
    glColor3f(0.15f, 0.65f, 0.75f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.0f, -0.25f);

    for(int i = 0; i <= 50; i++)
    {
        float angle = 2.0f * PI * i / 50;

        glVertex2f(
            0.28f * cos(angle),
            -0.25f + 0.10f * sin(angle)
        );
    }
    glEnd();
    // Road border
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-1.00f,-0.55f);
    glVertex2f(1.00f,-0.55f);
    glVertex2f(1.00f,-0.59f);
    glVertex2f(-1.00f,-0.59f);
    glEnd();
    // White Borders
    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.90f,-0.55f);
    glVertex2f(-0.80f,-0.55f);
    glVertex2f(-0.80f,-0.59f);
    glVertex2f(-0.90f,-0.59f);

    glVertex2f(-0.70f,-0.55f);
    glVertex2f(-0.60f,-0.55f);
    glVertex2f(-0.60f,-0.59f);
    glVertex2f(-0.70f,-0.59f);

    glVertex2f(-0.50f,-0.55f);
    glVertex2f(-0.40f,-0.55f);
    glVertex2f(-0.40f,-0.59f);
    glVertex2f(-0.50f,-0.59f);

    glVertex2f(-0.30f,-0.55f);
    glVertex2f(-0.20f,-0.55f);
    glVertex2f(-0.20f,-0.59f);
    glVertex2f(-0.30f,-0.59f);

    glVertex2f(-0.10f,-0.55f);
    glVertex2f(0.00f,-0.55f);
    glVertex2f(0.00f,-0.59f);
    glVertex2f(-0.10f,-0.59f);

    glVertex2f(0.10f,-0.55f);
    glVertex2f(0.20f,-0.55f);
    glVertex2f(0.20f,-0.59f);
    glVertex2f(0.10f,-0.59f);

    glVertex2f(0.30f,-0.55f);
    glVertex2f(0.40f,-0.55f);
    glVertex2f(0.40f,-0.59f);
    glVertex2f(0.30f,-0.59f);

    glVertex2f(0.50f,-0.55f);
    glVertex2f(0.60f,-0.55f);
    glVertex2f(0.60f,-0.59f);
    glVertex2f(0.50f,-0.59f);

    glVertex2f(0.70f,-0.55f);
    glVertex2f(0.80f,-0.55f);
    glVertex2f(0.80f,-0.59f);
    glVertex2f(0.70f,-0.59f);

    glVertex2f(0.90f,-0.55f);
    glVertex2f(1.00f,-0.55f);
    glVertex2f(1.00f,-0.59f);
    glVertex2f(0.90f,-0.59f);
    glEnd();
    // Left Lamp
    glColor3f(0.02f,0.02f,0.02f);
    glBegin(GL_QUADS);
    glVertex2f(-0.82f,-0.55f);
    glVertex2f(-0.80f,-0.55f);
    glVertex2f(-0.80f,-0.45f);
    glVertex2f(-0.82f,-0.45f);
    glEnd();
    glColor3f(0.25f,0.25f,0.25f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.84f,-0.45f);
    glVertex2f(-0.78f,-0.45f);
    glVertex2f(-0.79f,-0.40f);
    glVertex2f(-0.83f,-0.40f);
    glEnd();
// Traffic Signal Pole
    glColor3f(0.08f, 0.08f, 0.08f);
    glBegin(GL_QUADS);
    glVertex2f(-0.55f, -0.55f);
    glVertex2f(-0.53f, -0.55f);
    glVertex2f(-0.53f, -0.20f);
    glVertex2f(-0.55f, -0.20f);
    glEnd();

// Signal Box
    glColor3f(0.05f, 0.05f, 0.05f);
    glBegin(GL_QUADS);
    glVertex2f(-0.59f, -0.20f);
    glVertex2f(-0.49f, -0.20f);
    glVertex2f(-0.49f, -0.04f);
    glVertex2f(-0.59f, -0.04f);
    glEnd();

// Red Light
    if(redLight_mahim)
        glColor3f(1.0f, 0.0f, 0.0f);
    else
        glColor3f(0.15f, 0.0f, 0.0f);

    circle_mahim(-0.54f, -0.085f, 0.025f);

// Green Light
    if(!redLight_mahim)
        glColor3f(0.0f, 1.0f, 0.0f);
    else
        glColor3f(0.0f, 0.15f, 0.0f);

    circle_mahim(-0.54f, -0.155f, 0.025f);

    // Middle Lamp
    glColor3f(0.02f,0.02f,0.02f);
    glBegin(GL_QUADS);
    glVertex2f(-0.25f,-0.55f);
    glVertex2f(-0.23f,-0.55f);
    glVertex2f(-0.23f,-0.30f);
    glVertex2f(-0.25f,-0.30f);
    glEnd();

    glColor3f(0.25f,0.25f,0.25f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.27f,-0.30f);
    glVertex2f(-0.21f,-0.30f);
    glVertex2f(-0.22f,-0.25f);
    glVertex2f(-0.26f,-0.25f);
    glEnd();
    // Middle-Right Lamp
    glColor3f(0.02f,0.02f,0.02f);
    glBegin(GL_QUADS);
    glVertex2f(0.23f,-0.55f);
    glVertex2f(0.25f,-0.55f);
    glVertex2f(0.25f,-0.30f);
    glVertex2f(0.23f,-0.30f);
    glEnd();
    glColor3f(0.25f,0.25f,0.25f);
    glBegin(GL_POLYGON);
    glVertex2f(0.21f,-0.30f);
    glVertex2f(0.27f,-0.30f);
    glVertex2f(0.26f,-0.25f);
    glVertex2f(0.22f,-0.25f);
    glEnd();
    // Right Lamp
    glColor3f(0.02f,0.02f,0.02f);
    glBegin(GL_QUADS);
    glVertex2f(0.80f,-0.55f);
    glVertex2f(0.82f,-0.55f);
    glVertex2f(0.82f,-0.45f);
    glVertex2f(0.80f,-0.45f);
    glEnd();
    glColor3f(0.25f,0.25f,0.25f);
    glBegin(GL_POLYGON);
    glVertex2f(0.78f,-0.45f);
    glVertex2f(0.84f,-0.45f);
    glVertex2f(0.83f,-0.40f);
    glVertex2f(0.79f,-0.40f);
    glEnd();
    // Bench
    glColor3f(0.45f,0.22f,0.08f);
    glBegin(GL_QUADS);
    glVertex2f(-0.10f,-0.43f);
    glVertex2f(0.15f,-0.43f);
    glVertex2f(0.15f,-0.39f);
    glVertex2f(-0.10f,-0.39f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(-0.10f,-0.34f);
    glVertex2f(0.15f,-0.34f);
    glVertex2f(0.15f,-0.30f);
    glVertex2f(-0.10f,-0.30f);
    glEnd();
    glColor3f(0.15f,0.08f,0.03f);
    glBegin(GL_QUADS);
    glVertex2f(-0.07f,-0.48f);
    glVertex2f(-0.04f,-0.48f);
    glVertex2f(-0.04f,-0.42f);
    glVertex2f(-0.07f,-0.42f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(0.09f,-0.48f);
    glVertex2f(0.12f,-0.48f);
    glVertex2f(0.12f,-0.42f);
    glVertex2f(0.09f,-0.42f);
    glEnd();

    // Left tree 1
    glColor3f(0.30f, 0.12f, 0.03f);
    glBegin(GL_QUADS);
    glVertex2f(-0.92f, -0.55f);
    glVertex2f(-0.88f, -0.55f);
    glVertex2f(-0.88f, -0.30f);
    glVertex2f(-0.92f, -0.30f);
    glEnd();
    glPushMatrix();

    glTranslatef(treeSway_mahim, 0.0f, 0.0f);
    glColor3f(0.02f, 0.30f, 0.04f);
    circle_mahim(-0.95f, -0.27f, 0.09f);

    glColor3f(0.03f, 0.40f, 0.05f);
    circle_mahim(-0.86f, -0.27f, 0.10f);

    glColor3f(0.02f, 0.35f, 0.04f);
    circle_mahim(-0.91f, -0.19f, 0.10f);

    glColor3f(0.04f, 0.45f, 0.06f);
    circle_mahim(-0.84f, -0.20f, 0.08f);
    glPopMatrix();
    // Left tree 2
    glColor3f(0.30f, 0.12f, 0.03f);
    glBegin(GL_QUADS);
    glVertex2f(-0.70f, -0.55f);
    glVertex2f(-0.67f, -0.55f);
    glVertex2f(-0.67f, -0.30f);
    glVertex2f(-0.70f, -0.30f);
    glEnd();

    glPushMatrix();

    glTranslatef(treeSway_mahim, 0.0f, 0.0f);
    glColor3f(0.02f, 0.30f, 0.04f);
    circle_mahim(-0.74f, -0.31f, 0.07f);

    glColor3f(0.03f, 0.40f, 0.05f);
    circle_mahim(-0.66f, -0.31f, 0.08f);

    glColor3f(0.02f, 0.35f, 0.04f);
    circle_mahim(-0.70f, -0.24f, 0.08f);
    glPopMatrix();
    // Left tree 3
    glColor3f(0.30f, 0.12f, 0.03f);
    glBegin(GL_QUADS);
    glVertex2f(-0.40f, -0.55f);
    glVertex2f(-0.37f, -0.55f);
    glVertex2f(-0.37f, -0.30f);
    glVertex2f(-0.40f, -0.30f);
    glEnd();
    glPushMatrix();

    glTranslatef(treeSway_mahim, 0.0f, 0.0f);
    glColor3f(0.02f, 0.32f, 0.04f);
    circle_mahim(-0.43f, -0.36f, 0.06f);

    glColor3f(0.03f, 0.42f, 0.05f);
    circle_mahim(-0.35f, -0.36f, 0.07f);

    glColor3f(0.02f, 0.35f, 0.04f);
    circle_mahim(-0.39f, -0.30f, 0.07f);
    glPopMatrix();
    // Right tree 1
    glColor3f(0.30f, 0.12f, 0.03f);
    glBegin(GL_QUADS);
    glVertex2f(0.37f, -0.55f);
    glVertex2f(0.40f, -0.55f);
    glVertex2f(0.40f, -0.30f);
    glVertex2f(0.37f, -0.30f);
    glEnd();
    glPushMatrix();

    glTranslatef(treeSway_mahim, 0.0f, 0.0f);
    glColor3f(0.02f, 0.32f, 0.04f);
    circle_mahim(0.34f, -0.36f, 0.06f);

    glColor3f(0.03f, 0.42f, 0.05f);
    circle_mahim(0.44f, -0.36f, 0.07f);

    glColor3f(0.02f, 0.35f, 0.04f);
    circle_mahim(0.39f, -0.30f, 0.07f);
    glPopMatrix();

    // Right tree 2
    glColor3f(0.30f, 0.12f, 0.03f);
    glBegin(GL_QUADS);
    glVertex2f(0.67f, -0.55f);
    glVertex2f(0.70f, -0.55f);
    glVertex2f(0.70f, -0.30f);
    glVertex2f(0.67f, -0.30f);
    glEnd();
    glPushMatrix();

    glTranslatef(treeSway_mahim, 0.0f, 0.0f);
    glColor3f(0.02f, 0.30f, 0.04f);
    circle_mahim(0.64f, -0.31f, 0.07f);

    glColor3f(0.03f, 0.40f, 0.05f);
    circle_mahim(0.72f, -0.31f, 0.08f);

    glColor3f(0.02f, 0.35f, 0.04f);
    circle_mahim(0.68f, -0.24f, 0.08f);
    glPopMatrix();
    // Right tree 3
    glColor3f(0.30f, 0.12f, 0.03f);
    glBegin(GL_QUADS);
    glVertex2f(0.88f, -0.55f);
    glVertex2f(0.92f, -0.55f);
    glVertex2f(0.92f, -0.30f);
    glVertex2f(0.88f, -0.30f);
    glEnd();
    glPushMatrix();

    glTranslatef(treeSway_mahim, 0.0f, 0.0f);
    glColor3f(0.02f, 0.30f, 0.04f);
    circle_mahim(0.85f, -0.27f, 0.09f);

    glColor3f(0.03f, 0.40f, 0.05f);
    circle_mahim(0.94f, -0.27f, 0.10f);

    glColor3f(0.02f, 0.35f, 0.04f);
    circle_mahim(0.89f, -0.19f, 0.10f);
    glPopMatrix();
    // Sun
    glPushMatrix();
    glTranslatef(sunX_mahim, sunY_mahim, 0.0f);
    glColor3f(1.0f, 0.85f, 0.30f);
    circle_mahim(0.0f, 0.0f, 0.11f);
    glPopMatrix();
    // Background buildings
    glColor3f(0.42f, 0.48f, 0.55f);
    glBegin(GL_QUADS);
    glVertex2f(-0.95f, 0.15f);
    glVertex2f(-0.78f, 0.15f);
    glVertex2f(-0.78f, 0.42f);
    glVertex2f(-0.95f, 0.42f);
    glEnd();

    glColor3f(0.12f, 0.16f, 0.20f);
    glBegin(GL_QUADS);

    glVertex2f(-0.91f, 0.34f);
    glVertex2f(-0.88f, 0.34f);
    glVertex2f(-0.88f, 0.38f);
    glVertex2f(-0.91f, 0.38f);

    glVertex2f(-0.84f, 0.34f);
    glVertex2f(-0.81f, 0.34f);
    glVertex2f(-0.81f, 0.38f);
    glVertex2f(-0.84f, 0.38f);

    glVertex2f(-0.91f, 0.25f);
    glVertex2f(-0.88f, 0.25f);
    glVertex2f(-0.88f, 0.29f);
    glVertex2f(-0.91f, 0.29f);

    glVertex2f(-0.84f, 0.25f);
    glVertex2f(-0.81f, 0.25f);
    glVertex2f(-0.81f, 0.29f);
    glVertex2f(-0.84f, 0.29f);
    glEnd();

    glColor3f(0.46f, 0.52f, 0.58f);
    glBegin(GL_QUADS);
    glVertex2f(-0.78f, 0.15f);
    glVertex2f(-0.60f, 0.15f);
    glVertex2f(-0.60f, 0.35f);
    glVertex2f(-0.78f, 0.35f);
    glEnd();

    glColor3f(0.12f, 0.16f, 0.20f);
    glBegin(GL_QUADS);
    glVertex2f(-0.74f, 0.27f);
    glVertex2f(-0.71f, 0.27f);
    glVertex2f(-0.71f, 0.31f);
    glVertex2f(-0.74f, 0.31f);

    glVertex2f(-0.67f, 0.27f);
    glVertex2f(-0.64f, 0.27f);
    glVertex2f(-0.64f, 0.31f);
    glVertex2f(-0.67f, 0.31f);

    glVertex2f(-0.74f, 0.20f);
    glVertex2f(-0.71f, 0.20f);
    glVertex2f(-0.71f, 0.24f);
    glVertex2f(-0.74f, 0.24f);

    glVertex2f(-0.67f, 0.20f);
    glVertex2f(-0.64f, 0.20f);
    glVertex2f(-0.64f, 0.24f);
    glVertex2f(-0.67f, 0.24f);
    glEnd();

    glColor3f(0.46f, 0.52f, 0.58f);
    glBegin(GL_QUADS);
    glVertex2f(0.60f, 0.15f);
    glVertex2f(0.78f, 0.15f);
    glVertex2f(0.78f, 0.38f);
    glVertex2f(0.60f, 0.38f);
    glEnd();

    glColor3f(0.12f, 0.16f, 0.20f);
    glBegin(GL_QUADS);
    glVertex2f(0.64f, 0.29f);
    glVertex2f(0.67f, 0.29f);
    glVertex2f(0.67f, 0.33f);
    glVertex2f(0.64f, 0.33f);

    glVertex2f(0.71f, 0.29f);
    glVertex2f(0.74f, 0.29f);
    glVertex2f(0.74f, 0.33f);
    glVertex2f(0.71f, 0.33f);

    glVertex2f(0.64f, 0.21f);
    glVertex2f(0.67f, 0.21f);
    glVertex2f(0.67f, 0.25f);
    glVertex2f(0.64f, 0.25f);

    glVertex2f(0.71f, 0.21f);
    glVertex2f(0.74f, 0.21f);
    glVertex2f(0.74f, 0.25f);
    glVertex2f(0.71f, 0.25f);
    glEnd();
    glColor3f(0.42f, 0.48f, 0.55f);
    glBegin(GL_QUADS);
    glVertex2f(0.78f, 0.15f);
    glVertex2f(0.96f, 0.15f);
    glVertex2f(0.96f, 0.45f);
    glVertex2f(0.78f, 0.45f);
    glEnd();
    glColor3f(0.12f, 0.16f, 0.20f);
    glBegin(GL_QUADS);

    glVertex2f(0.82f, 0.35f);
    glVertex2f(0.85f, 0.35f);
    glVertex2f(0.85f, 0.39f);
    glVertex2f(0.82f, 0.39f);

    glVertex2f(0.89f, 0.35f);
    glVertex2f(0.92f, 0.35f);
    glVertex2f(0.92f, 0.39f);
    glVertex2f(0.89f, 0.39f);

    glVertex2f(0.82f, 0.27f);
    glVertex2f(0.85f, 0.27f);
    glVertex2f(0.85f, 0.31f);
    glVertex2f(0.82f, 0.31f);

    glVertex2f(0.89f, 0.27f);
    glVertex2f(0.92f, 0.27f);
    glVertex2f(0.92f, 0.31f);
    glVertex2f(0.89f, 0.31f);

    glVertex2f(0.82f, 0.19f);
    glVertex2f(0.85f, 0.19f);
    glVertex2f(0.85f, 0.23f);
    glVertex2f(0.82f, 0.23f);

    glVertex2f(0.89f, 0.19f);
    glVertex2f(0.92f, 0.19f);
    glVertex2f(0.92f, 0.23f);
    glVertex2f(0.89f, 0.23f);
    glEnd();

    glPushMatrix();

    glTranslatef(x1_mahim, 0.0f, 0.0f);

    glColor3f(0.92f, 0.95f, 1.0f);
    circle_mahim(-0.35f, 0.70f, 0.035f);

    glColor3f(1.0f, 1.0f, 1.0f);
    circle_mahim(-0.30f, 0.72f, 0.05f);

    glColor3f(1.0f, 1.0f, 1.0f);
    circle_mahim(-0.25f, 0.70f, 0.035f);
    glPopMatrix();

// SMALL CLOUD - RIGHT SIDE
    glPushMatrix();

    glTranslatef(x2_mahim, 0.0f, 0.0f);

    glColor3f(0.92f, 0.95f, 1.0f);
    circle_mahim(0.35f, 0.70f, 0.035f);

    glColor3f(1.0f, 1.0f, 1.0f);
    circle_mahim(0.40f, 0.72f, 0.05f);

    glColor3f(1.0f, 1.0f, 1.0f);
    circle_mahim(0.45f, 0.70f, 0.035f);

    glPopMatrix();
    // Middle building
    glColor3f(0.72f, 0.72f, 0.68f);
    glBegin(GL_QUADS);
    glVertex2f(-0.22f, 0.15f);
    glVertex2f( 0.22f, 0.15f);
    glVertex2f( 0.22f, 0.58f);
    glVertex2f(-0.22f, 0.58f);
    glEnd();

    glColor3f(0.58f, 0.58f, 0.54f);
    glBegin(GL_QUADS);
    glVertex2f(-0.22f, 0.15f);
    glVertex2f(-0.16f, 0.15f);
    glVertex2f(-0.16f, 0.60f);
    glVertex2f(-0.22f, 0.60f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.16f, 0.15f);
    glVertex2f(0.22f, 0.15f);
    glVertex2f(0.22f, 0.60f);
    glVertex2f(0.16f, 0.60f);
    glEnd();

    glColor3f(0.68f, 0.68f, 0.64f);
    glBegin(GL_QUADS);
    glVertex2f(-0.16f, 0.55f);
    glVertex2f( 0.16f, 0.55f);
    glVertex2f( 0.16f, 0.63f);
    glVertex2f(-0.16f, 0.63f);
    glEnd();

    glColor3f(0.50f, 0.50f, 0.47f);
    glLineWidth(1.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.22f, 0.22f);
    glVertex2f(0.22f, 0.22f);
    glVertex2f(-0.22f, 0.29f);
    glVertex2f(0.22f, 0.29f);
    glVertex2f(-0.22f, 0.36f);
    glVertex2f(0.22f, 0.36f);
    glVertex2f(-0.22f, 0.43f);
    glVertex2f(0.22f, 0.43f);
    glVertex2f(-0.22f, 0.50f);
    glVertex2f(0.22f, 0.50f);
    glVertex2f(-0.22f, 0.57f);
    glVertex2f(0.22f, 0.57f);

    glVertex2f(-0.18f, 0.15f);
    glVertex2f(-0.18f, 0.22f);
    glVertex2f(-0.12f, 0.15f);
    glVertex2f(-0.12f, 0.22f);
    glVertex2f(-0.06f, 0.15f);
    glVertex2f(-0.06f, 0.22f);
    glVertex2f(0.00f, 0.15f);
    glVertex2f(0.00f, 0.22f);
    glVertex2f(0.06f, 0.15f);
    glVertex2f(0.06f, 0.22f);
    glVertex2f(0.12f, 0.15f);
    glVertex2f(0.12f, 0.22f);
    glVertex2f(0.18f, 0.15f);
    glVertex2f(0.18f, 0.22f);

    glVertex2f(-0.15f, 0.22f);
    glVertex2f(-0.15f, 0.29f);
    glVertex2f(-0.08f, 0.22f);
    glVertex2f(-0.08f, 0.29f);
    glVertex2f(0.00f, 0.22f);
    glVertex2f(0.00f, 0.29f);
    glVertex2f(0.08f, 0.22f);
    glVertex2f(0.08f, 0.29f);
    glVertex2f(0.15f, 0.22f);
    glVertex2f(0.15f, 0.29f);

    glVertex2f(-0.18f, 0.29f);
    glVertex2f(-0.18f, 0.36f);
    glVertex2f(-0.10f, 0.29f);
    glVertex2f(-0.10f, 0.36f);
    glVertex2f(-0.02f, 0.29f);
    glVertex2f(-0.02f, 0.36f);
    glVertex2f(0.06f, 0.29f);
    glVertex2f(0.06f, 0.36f);
    glVertex2f(0.14f, 0.29f);
    glVertex2f(0.14f, 0.36f);

    glVertex2f(-0.15f, 0.36f);
    glVertex2f(-0.15f, 0.43f);
    glVertex2f(-0.07f, 0.36f);
    glVertex2f(-0.07f, 0.43f);
    glVertex2f(0.01f, 0.36f);
    glVertex2f(0.01f, 0.43f);
    glVertex2f(0.09f, 0.36f);
    glVertex2f(0.09f, 0.43f);
    glVertex2f(0.17f, 0.36f);
    glVertex2f(0.17f, 0.43f);

    glVertex2f(-0.18f, 0.43f);
    glVertex2f(-0.18f, 0.50f);
    glVertex2f(-0.10f, 0.43f);
    glVertex2f(-0.10f, 0.50f);
    glVertex2f(-0.02f, 0.43f);
    glVertex2f(-0.02f, 0.50f);
    glVertex2f(0.06f, 0.43f);
    glVertex2f(0.06f, 0.50f);
    glVertex2f(0.14f, 0.43f);
    glVertex2f(0.14f, 0.50f);

    glVertex2f(-0.15f, 0.50f);
    glVertex2f(-0.15f, 0.57f);
    glVertex2f(-0.07f, 0.50f);
    glVertex2f(-0.07f, 0.57f);
    glVertex2f(0.01f, 0.50f);
    glVertex2f(0.01f, 0.57f);
    glVertex2f(0.09f, 0.50f);
    glVertex2f(0.09f, 0.57f);
    glVertex2f(0.17f, 0.50f);
    glVertex2f(0.17f, 0.57f);
    glEnd();

    // Main gate
    glColor3f(0.08f, 0.08f, 0.08f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.08f, 0.15f);
    glVertex2f( 0.08f, 0.15f);
    glVertex2f( 0.08f, 0.27f);
    glVertex2f(0.075f, 0.30f);
    glVertex2f(0.06f, 0.33f);
    glVertex2f(0.04f, 0.35f);
    glVertex2f(0.00f, 0.36f);

    glVertex2f(-0.04f, 0.35f);
    glVertex2f(-0.06f, 0.33f);
    glVertex2f(-0.075f, 0.30f);
    glVertex2f(-0.08f, 0.27f);
    glEnd();

    glColor3f(0.65f, 0.38f, 0.10f);
    glBegin(GL_QUADS);
    glVertex2f(-0.065f, 0.15f);
    glVertex2f(-0.005f, 0.15f);
    glVertex2f(-0.005f, 0.27f);
    glVertex2f(-0.065f, 0.27f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.005f, 0.15f);
    glVertex2f(0.065f, 0.15f);
    glVertex2f(0.065f, 0.27f);
    glVertex2f(0.005f, 0.27f);
    glEnd();

    glColor3f(0.35f, 0.22f, 0.08f);
    glBegin(GL_LINES);
    glVertex2f(0.0f, 0.15f);
    glVertex2f(0.0f, 0.27f);
    glEnd();

    glColor3f(0.48f, 0.48f, 0.44f);
    glLineWidth(2.0f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.08f, 0.15f);
    glVertex2f(-0.08f, 0.27f);

    glVertex2f(-0.075f, 0.30f);
    glVertex2f(-0.06f, 0.33f);
    glVertex2f(-0.04f, 0.35f);
    glVertex2f(0.00f, 0.36f);

    glVertex2f(0.04f, 0.35f);
    glVertex2f(0.06f, 0.33f);
    glVertex2f(0.075f, 0.30f);
    glVertex2f(0.08f, 0.27f);
    glVertex2f(0.08f, 0.15f);
    glEnd();

    // flag_mahim
    glPushMatrix();

    glTranslatef(0.005f, 0.725f, 0.0f);
    glRotatef(flag_mahimAngle, 0.0f, 0.0f, 1.0f);
    glTranslatef(-0.005f, -0.725f, 0.0f);

    glColor3f(0.0f, 0.45f, 0.20f);
    glBegin(GL_QUADS);
    glVertex2f(0.002f, 0.76f);
    glVertex2f(0.13f, 0.76f);
    glVertex2f(0.13f, 0.69f);
    glVertex2f(0.002f, 0.69f);
    glEnd();
    // Red circle_mahim
    glColor3f(0.85f, 0.0f, 0.0f);
    circle_mahim(0.065f, 0.725f, 0.025f);
    glPopMatrix();
    // flag_mahim Pole
    glColor3f(0.35f, 0.35f, 0.32f);
    glBegin(GL_QUADS);
    glVertex2f(-0.01f, 0.63f);
    glVertex2f(0.005f, 0.63f);
    glVertex2f(0.005f, 0.78f);
    glVertex2f(-0.01f, 0.78f);
    glEnd();
    // Left building
    glColor3f(0.72f, 0.72f, 0.68f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.72f, 0.15f);
    glVertex2f(-0.72f, 0.55f);
    glVertex2f(-0.55f, 0.62f);
    glVertex2f(-0.22f, 0.58f);
    glVertex2f(-0.22f, 0.15f);
    glEnd();

    glColor3f(0.58f, 0.58f, 0.54f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.72f, 0.15f);
    glVertex2f(-0.72f, 0.55f);
    glVertex2f(-0.67f, 0.57f);
    glVertex2f(-0.67f, 0.16f);
    glEnd();

    glColor3f(0.58f, 0.58f, 0.54f);
    glBegin(GL_QUADS);
    glVertex2f(-0.63f, 0.15f);
    glVertex2f(-0.57f, 0.15f);
    glVertex2f(-0.57f, 0.58f);
    glVertex2f(-0.63f, 0.57f);
    glEnd();

    glColor3f(0.60f, 0.60f, 0.56f);
    glBegin(GL_QUADS);
    glVertex2f(-0.28f, 0.15f);
    glVertex2f(-0.22f, 0.15f);
    glVertex2f(-0.22f, 0.60f);
    glVertex2f(-0.28f, 0.60f);
    glEnd();

    glColor3f(0.50f, 0.50f, 0.47f);
    glLineWidth(1.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.67f, 0.23f);
    glVertex2f(-0.28f, 0.23f);
    glVertex2f(-0.67f, 0.29f);
    glVertex2f(-0.28f, 0.29f);
    glVertex2f(-0.67f, 0.35f);
    glVertex2f(-0.28f, 0.35f);
    glVertex2f(-0.67f, 0.41f);
    glVertex2f(-0.28f, 0.41f);
    glVertex2f(-0.67f, 0.47f);
    glVertex2f(-0.28f, 0.47f);
    glVertex2f(-0.67f, 0.53f);
    glVertex2f(-0.28f, 0.53f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.58f, 0.15f);
    glVertex2f(-0.58f, 0.57f);
    glVertex2f(-0.52f, 0.15f);
    glVertex2f(-0.52f, 0.59f);
    glVertex2f(-0.46f, 0.15f);
    glVertex2f(-0.46f, 0.60f);
    glVertex2f(-0.40f, 0.15f);
    glVertex2f(-0.40f, 0.59f);
    glVertex2f(-0.34f, 0.15f);
    glVertex2f(-0.34f, 0.59f);
    glEnd();

    glColor3f(0.12f, 0.12f, 0.12f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.63f, 0.32f);
    glVertex2f(-0.59f, 0.32f);
    glVertex2f(-0.61f, 0.48f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.63f, 0.28f);
    glVertex2f(-0.59f, 0.28f);
    glVertex2f(-0.61f, 0.19f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.45f, 0.34f);
    glVertex2f(-0.35f, 0.34f);
    glVertex2f(-0.40f, 0.48f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.45f, 0.28f);
    glVertex2f(-0.35f, 0.28f);
    glVertex2f(-0.40f, 0.19f);
    glEnd();
    // Right building
    glColor3f(0.72f, 0.72f, 0.68f);
    glBegin(GL_POLYGON);
    glVertex2f(0.22f, 0.15f);
    glVertex2f(0.22f, 0.58f);
    glVertex2f(0.55f, 0.62f);
    glVertex2f(0.72f, 0.55f);
    glVertex2f(0.72f, 0.15f);
    glEnd();

    glColor3f(0.58f, 0.58f, 0.54f);
    glBegin(GL_POLYGON);
    glVertex2f(0.67f, 0.16f);
    glVertex2f(0.67f, 0.57f);
    glVertex2f(0.72f, 0.55f);
    glVertex2f(0.72f, 0.15f);
    glEnd();

    glColor3f(0.63f, 0.63f, 0.59f);
    glBegin(GL_QUADS);
    glVertex2f(0.57f, 0.15f);
    glVertex2f(0.63f, 0.15f);
    glVertex2f(0.63f, 0.57f);
    glVertex2f(0.57f, 0.58f);
    glEnd();

    glColor3f(0.60f, 0.60f, 0.56f);
    glBegin(GL_QUADS);
    glVertex2f(0.22f, 0.15f);
    glVertex2f(0.28f, 0.15f);
    glVertex2f(0.28f, 0.60f);
    glVertex2f(0.22f, 0.60f);
    glEnd();

    glColor3f(0.50f, 0.50f, 0.47f);
    glLineWidth(1.0f);
    glBegin(GL_LINES);
    glVertex2f(0.28f, 0.23f);
    glVertex2f(0.67f, 0.23f);
    glVertex2f(0.28f, 0.29f);
    glVertex2f(0.67f, 0.29f);
    glVertex2f(0.28f, 0.35f);
    glVertex2f(0.67f, 0.35f);
    glVertex2f(0.28f, 0.41f);
    glVertex2f(0.67f, 0.41f);
    glVertex2f(0.28f, 0.47f);
    glVertex2f(0.67f, 0.47f);
    glVertex2f(0.28f, 0.53f);
    glVertex2f(0.67f, 0.53f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.34f, 0.15f);
    glVertex2f(0.34f, 0.59f);
    glVertex2f(0.40f, 0.15f);
    glVertex2f(0.40f, 0.60f);
    glVertex2f(0.46f, 0.15f);
    glVertex2f(0.46f, 0.59f);
    glVertex2f(0.52f, 0.15f);
    glVertex2f(0.52f, 0.59f);
    glVertex2f(0.58f, 0.15f);
    glVertex2f(0.58f, 0.57f);
    glEnd();

    glColor3f(0.12f, 0.12f, 0.12f);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.35f, 0.34f);
    glVertex2f(0.45f, 0.34f);
    glVertex2f(0.40f, 0.48f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.35f, 0.28f);
    glVertex2f(0.45f, 0.28f);
    glVertex2f(0.40f, 0.19f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.59f, 0.34f);
    glVertex2f(0.63f, 0.34f);
    glVertex2f(0.61f, 0.48f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(0.59f, 0.28f);
    glVertex2f(0.63f, 0.28f);
    glVertex2f(0.61f, 0.19f);
    glEnd();
    //RED CAR
    glPushMatrix();
    glTranslatef(position_mahim1, 0.0f, 0.0f);
    // Car body
    glColor3f(0.80f, 0.05f, 0.05f);
    glBegin(GL_QUADS);
    glVertex2f(0.45f, -0.72f);
    glVertex2f(0.75f, -0.72f);
    glVertex2f(0.75f, -0.64f);
    glVertex2f(0.45f, -0.64f);
    glEnd();
    // Car top
    glColor3f(0.70f, 0.03f, 0.03f);
    glBegin(GL_POLYGON);
    glVertex2f(0.49f, -0.64f);
    glVertex2f(0.54f, -0.58f);
    glVertex2f(0.67f, -0.58f);
    glVertex2f(0.72f, -0.64f);
    glEnd();
    // Left window
    glColor3f(0.45f, 0.70f, 0.75f);
    glBegin(GL_QUADS);
    glVertex2f(0.53f, -0.63f);
    glVertex2f(0.60f, -0.63f);
    glVertex2f(0.60f, -0.59f);
    glVertex2f(0.55f, -0.59f);
    glEnd();
    // Right window
    glBegin(GL_QUADS);
    glVertex2f(0.61f, -0.63f);
    glVertex2f(0.69f, -0.63f);
    glVertex2f(0.67f, -0.59f);
    glVertex2f(0.61f, -0.59f);
    glEnd();
    // Window divider
    glColor3f(0.08f, 0.15f, 0.10f);
    glBegin(GL_QUADS);
    glVertex2f(0.60f, -0.63f);
    glVertex2f(0.61f, -0.63f);
    glVertex2f(0.61f, -0.59f);
    glVertex2f(0.60f, -0.59f);
    glEnd();
    // Front bumper - right
    glColor3f(1.0f, 0.95f, 0.65f);
    glBegin(GL_QUADS);
    glVertex2f(0.75f, -0.70f);
    glVertex2f(0.77f, -0.70f);
    glVertex2f(0.77f, -0.66f);
    glVertex2f(0.75f, -0.66f);
    glEnd();
    // Back bumper - left
    glBegin(GL_QUADS);
    glVertex2f(0.43f, -0.70f);
    glVertex2f(0.45f, -0.70f);
    glVertex2f(0.45f, -0.66f);
    glVertex2f(0.43f, -0.66f);
    glEnd();
    // Car wheels
    glColor3f(0.02f, 0.02f, 0.02f);
    circle_mahim(0.51f, -0.72f, 0.032f);
    circle_mahim(0.69f, -0.72f, 0.032f);
    // Wheel center
    glColor3f(0.25f, 0.25f, 0.25f);
    circle_mahim(0.51f, -0.72f, 0.012f);
    circle_mahim(0.69f, -0.72f, 0.012f);
    glPopMatrix();
    //GREEN CAR
    glPushMatrix();
    glTranslatef(position_mahim, 0.0f, 0.0f);
    // Car body
    glColor3f(0.05f, 0.45f, 0.12f);
    glBegin(GL_QUADS);
    glVertex2f(-0.88f, -0.94f);
    glVertex2f(-0.58f, -0.94f);
    glVertex2f(-0.58f, -0.86f);
    glVertex2f(-0.88f, -0.86f);
    glEnd();
    // Car top
    glColor3f(0.05f, 0.40f, 0.10f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.85f, -0.86f);
    glVertex2f(-0.80f, -0.80f);
    glVertex2f(-0.67f, -0.80f);
    glVertex2f(-0.62f, -0.86f);
    glEnd();
    // Left window
    glColor3f(0.45f, 0.70f, 0.75f);
    glBegin(GL_QUADS);
    glVertex2f(-0.79f, -0.85f);
    glVertex2f(-0.72f, -0.85f);
    glVertex2f(-0.72f, -0.81f);
    glVertex2f(-0.76f, -0.81f);
    glEnd();
    // Right window
    glBegin(GL_QUADS);
    glVertex2f(-0.70f, -0.85f);
    glVertex2f(-0.63f, -0.85f);
    glVertex2f(-0.66f, -0.81f);
    glVertex2f(-0.70f, -0.81f);
    glEnd();
    // Window divider
    glColor3f(0.08f, 0.15f, 0.10f);
    glBegin(GL_QUADS);
    glVertex2f(-0.72f, -0.85f);
    glVertex2f(-0.70f, -0.85f);
    glVertex2f(-0.70f, -0.81f);
    glVertex2f(-0.72f, -0.81f);
    glEnd();
    // Front bumper - right
    glColor3f(1.0f, 0.95f, 0.65f);
    glBegin(GL_QUADS);
    glVertex2f(-0.58f, -0.92f);
    glVertex2f(-0.56f, -0.92f);
    glVertex2f(-0.56f, -0.88f);
    glVertex2f(-0.58f, -0.88f);
    glEnd();
    // Back bumper - left
    glBegin(GL_QUADS);
    glVertex2f(-0.90f, -0.92f);
    glVertex2f(-0.88f, -0.92f);
    glVertex2f(-0.88f, -0.88f);
    glVertex2f(-0.90f, -0.88f);
    glEnd();
    // Car wheels
    glColor3f(0.02f, 0.02f, 0.02f);
    circle_mahim(-0.81f, -0.94f, 0.032f);
    circle_mahim(-0.65f, -0.94f, 0.032f);
    // Wheel center
    glColor3f(0.25f, 0.25f, 0.25f);
    circle_mahim(-0.81f, -0.94f, 0.012f);
    circle_mahim(-0.65f, -0.94f, 0.012f);
    glPopMatrix();

    //BRTC RED
    glPushMatrix();
    glTranslatef(position_mahim, 0.0f, 0.0f);
    // Main Red Body
    glColor3f(0.90f, 0.05f, 0.05f);
    glBegin(GL_QUADS);
    glVertex2f(-0.45f, -0.93f);
    glVertex2f(-0.05f, -0.93f);
    glVertex2f(-0.05f, -0.77f);
    glVertex2f(-0.45f, -0.77f);
    glEnd();

    // Upper Green Stripe
    glColor3f(0.0f, 0.55f, 0.25f);
    glBegin(GL_QUADS);
    glVertex2f(-0.45f, -0.84f);
    glVertex2f(-0.05f, -0.84f);
    glVertex2f(-0.05f, -0.825f);
    glVertex2f(-0.45f, -0.825f);
    glEnd();

    // Lower Green Stripe
    glBegin(GL_QUADS);
    glVertex2f(-0.45f, -0.87f);
    glVertex2f(-0.05f, -0.87f);
    glVertex2f(-0.05f, -0.855f);
    glVertex2f(-0.45f, -0.855f);
    glEnd();

    // Windows
    glColor3f(0.25f, 0.45f, 0.48f);
    glBegin(GL_QUADS);

    // Window 1
    glVertex2f(-0.43f, -0.815f);
    glVertex2f(-0.37f, -0.815f);
    glVertex2f(-0.37f, -0.775f);
    glVertex2f(-0.43f, -0.775f);

    // Window 2
    glVertex2f(-0.365f, -0.815f);
    glVertex2f(-0.305f, -0.815f);
    glVertex2f(-0.305f, -0.775f);
    glVertex2f(-0.365f, -0.775f);

    // Window 3
    glVertex2f(-0.30f, -0.815f);
    glVertex2f(-0.24f, -0.815f);
    glVertex2f(-0.24f, -0.775f);
    glVertex2f(-0.30f, -0.775f);

    // Window 4
    glVertex2f(-0.235f, -0.815f);
    glVertex2f(-0.175f, -0.815f);
    glVertex2f(-0.175f, -0.775f);
    glVertex2f(-0.235f, -0.775f);

    // Window 5
    glVertex2f(-0.17f, -0.815f);
    glVertex2f(-0.10f, -0.815f);
    glVertex2f(-0.10f, -0.775f);
    glVertex2f(-0.17f, -0.775f);

    glEnd();


    // Window Divider
    glColor3f(0.05f, 0.12f, 0.15f);
    glLineWidth(2.0f);

    glBegin(GL_LINES);

    glVertex2f(-0.365f, -0.815f);
    glVertex2f(-0.365f, -0.775f);

    glVertex2f(-0.30f, -0.815f);
    glVertex2f(-0.30f, -0.775f);

    glVertex2f(-0.235f, -0.815f);
    glVertex2f(-0.235f, -0.775f);

    glVertex2f(-0.17f, -0.815f);
    glVertex2f(-0.17f, -0.775f);

    glEnd();

    // Door
    glColor3f(0.10f, 0.12f, 0.14f);
    glBegin(GL_QUADS);
    glVertex2f(-0.12f, -0.925f);
    glVertex2f(-0.07f, -0.925f);
    glVertex2f(-0.07f, -0.77f);
    glVertex2f(-0.12f, -0.77f);
    glEnd();

    // Door Red Part
    glColor3f(0.85f, 0.03f, 0.03f);
    glBegin(GL_QUADS);
    glVertex2f(-0.115f, -0.92f);
    glVertex2f(-0.095f, -0.92f);

    glVertex2f(-0.095f, -0.775f);
    glVertex2f(-0.115f, -0.775f);
    glEnd();

    // Door Green Stripe
    glColor3f(0.0f, 0.55f, 0.25f);
    glBegin(GL_QUADS);
    glVertex2f(-0.12f, -0.84f);
    glVertex2f(-0.07f, -0.84f);
    glVertex2f(-0.07f, -0.825f);
    glVertex2f(-0.12f, -0.825f);
    glEnd();

    // BRTC Text
    glColor3f(1.0f, 1.0f, 1.0f);
    glRasterPos2f(-0.30f, -0.875f);

    const char *text = "BRTC";
    for(int i = 0; text[i] != '\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);

    // Headlight
    glColor3f(1.0f, 1.0f, 0.65f);
    glBegin(GL_QUADS);
    glVertex2f(-0.055f, -0.875f);
    glVertex2f(-0.045f, -0.875f);
    glVertex2f(-0.045f, -0.845f);
    glVertex2f(-0.055f, -0.845f);
    glEnd();

    // Back Light
    glColor3f(0.7f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.455f, -0.875f);
    glVertex2f(-0.445f, -0.875f);
    glVertex2f(-0.445f, -0.845f);
    glVertex2f(-0.455f, -0.845f);
    glEnd();

    // Wheels
    glColor3f(0.05f, 0.05f, 0.05f);
    circle_mahim(-0.36f, -0.94f, 0.032f);
    circle_mahim(-0.12f, -0.94f, 0.032f);

    // Wheel Centers
    glColor3f(0.55f, 0.55f, 0.55f);
    circle_mahim(-0.36f, -0.94f, 0.015f);
    circle_mahim(-0.12f, -0.94f, 0.015f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(cloudposition_mahim, 0.0f, 0.0f);
    // circle_mahim 1
    glColor3f(0.92f, 0.95f, 1.0f);
    circle_mahim(-0.82f, 0.82f, 0.06f);
    // circle_mahim 2 - Middle
    glColor3f(1.0f, 1.0f, 1.0f);
    circle_mahim(-0.75f, 0.84f, 0.08f);
    // circle_mahim 3
    glColor3f(1.0f, 1.0f, 1.0f);
    circle_mahim(-0.67f, 0.82f, 0.06f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-cloudposition_mahim, 0.0f, 0.0f);
    glColor3f(0.92f, 0.95f, 1.0f);
    circle_mahim(0.80f, 0.90f, 0.055f);

    glColor3f(1.0f, 1.0f, 1.0f);
    circle_mahim(0.87f, 0.92f, 0.075f);

    glColor3f(1.0f, 1.0f, 1.0f);
    circle_mahim(0.95f, 0.90f, 0.055f);
    glPopMatrix();

    glPushMatrix();

    glTranslatef(position_mahim1, 0.0f, 0.0f);
    // Main Red Body
    glColor3f(1.0f, 0.25f, 0.45f);
    glBegin(GL_QUADS);
    glVertex2f(-0.42f, -0.72f);
    glVertex2f(-0.02f, -0.72f);
    glVertex2f(-0.02f, -0.59f);
    glVertex2f(-0.42f, -0.59f);
    glEnd();

    // Green Stripe 1
    glColor3f(0.0f, 0.55f, 0.20f);
    glBegin(GL_QUADS);
    glVertex2f(-0.42f, -0.655f);
    glVertex2f(-0.02f, -0.655f);
    glVertex2f(-0.02f, -0.645f);
    glVertex2f(-0.42f, -0.645f);
    glEnd();

    // Green Stripe 2
    glBegin(GL_QUADS);
    glVertex2f(-0.42f, -0.685f);
    glVertex2f(-0.02f, -0.685f);
    glVertex2f(-0.02f, -0.675f);
    glVertex2f(-0.42f, -0.675f);
    glEnd();


    // Windows
    glColor3f(0.30f, 0.52f, 0.55f);

    glBegin(GL_QUADS);

    // Window 1
    glVertex2f(-0.30f, -0.635f);
    glVertex2f(-0.245f, -0.635f);
    glVertex2f(-0.245f, -0.595f);
    glVertex2f(-0.30f, -0.595f);

    // Window 2
    glVertex2f(-0.24f, -0.635f);
    glVertex2f(-0.18f, -0.635f);
    glVertex2f(-0.18f, -0.595f);
    glVertex2f(-0.24f, -0.595f);

    // Window 3
    glVertex2f(-0.175f, -0.635f);
    glVertex2f(-0.115f, -0.635f);
    glVertex2f(-0.115f, -0.595f);
    glVertex2f(-0.175f, -0.595f);

    // Window 4
    glVertex2f(-0.11f, -0.635f);
    glVertex2f(-0.05f, -0.635f);
    glVertex2f(-0.05f, -0.595f);
    glVertex2f(-0.11f, -0.595f);

    // Window 5
    glVertex2f(-0.045f, -0.635f);
    glVertex2f(-0.025f, -0.635f);
    glVertex2f(-0.025f, -0.595f);
    glVertex2f(-0.045f, -0.595f);

    glEnd();
    // Window Dividers
    glColor3f(0.05f, 0.10f, 0.12f);
    glLineWidth(2.0f);

    glBegin(GL_LINES);

    glVertex2f(-0.24f, -0.635f);
    glVertex2f(-0.24f, -0.595f);

    glVertex2f(-0.175f, -0.635f);
    glVertex2f(-0.175f, -0.595f);

    glVertex2f(-0.11f, -0.635f);
    glVertex2f(-0.11f, -0.595f);

    glVertex2f(-0.045f, -0.635f);
    glVertex2f(-0.045f, -0.595f);
    glEnd();
    // FRONT DOOR - LEFT SIDE
    glColor3f(0.08f, 0.10f, 0.12f);

    glBegin(GL_QUADS);
    glVertex2f(-0.405f, -0.715f);
    glVertex2f(-0.35f, -0.715f);
    glVertex2f(-0.35f, -0.59f);
    glVertex2f(-0.405f, -0.59f);
    glEnd();

    // Red Middle of Door
    glColor3f(1.0f, 0.20f, 0.40f);

    glBegin(GL_QUADS);
    glVertex2f(-0.395f, -0.71f);
    glVertex2f(-0.375f, -0.71f);
    glVertex2f(-0.375f, -0.595f);
    glVertex2f(-0.395f, -0.595f);
    glEnd();

    // Door Green Stripe
    glColor3f(0.0f, 0.55f, 0.20f);

    glBegin(GL_QUADS);
    glVertex2f(-0.405f, -0.655f);
    glVertex2f(-0.35f, -0.655f);
    glVertex2f(-0.35f, -0.645f);
    glVertex2f(-0.405f, -0.645f);
    glEnd();
    glColor3f(1.0f, 1.0f, 1.0f);
    glRasterPos2f(-0.30f, -0.675f);
    const char *text1 = "BRTC";
    for(int i = 0; text[i] != '\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
    // FRONT HEADLIGHT - LEFT
    glColor3f(1.0f, 0.95f, 0.50f);

    glBegin(GL_QUADS);
    glVertex2f(-0.43f, -0.685f);
    glVertex2f(-0.42f, -0.685f);
    glVertex2f(-0.42f, -0.66f);
    glVertex2f(-0.43f, -0.66f);
    glEnd();


    // BACK LIGHT - RIGHT
    glColor3f(0.60f, 0.0f, 0.0f);

    glBegin(GL_QUADS);
    glVertex2f(-0.02f, -0.685f);
    glVertex2f(-0.01f, -0.685f);
    glVertex2f(-0.01f, -0.66f);
    glVertex2f(-0.02f, -0.66f);
    glEnd();

    // Wheels
    glColor3f(0.03f, 0.03f, 0.03f);

    circle_mahim(-0.34f, -0.72f, 0.025f);
    circle_mahim(-0.10f, -0.72f, 0.025f);

    // Wheel Centers
    glColor3f(0.55f, 0.55f, 0.55f);

    circle_mahim(-0.34f, -0.72f, 0.012f);
    circle_mahim(-0.10f, -0.72f, 0.012f);
    glPopMatrix();
    // Parliament Name
    glColor3f(0.0f, 0.0f, 0.0f);
    renderBitmapString(-0.12f,0.59f,0.0f,GLUT_BITMAP_HELVETICA_18,"Bangladesh Parliament");
    glFlush();
}
//------------------------------------------------Mahim End------------------------------------------//

//------------------------------------------------Fabliha Start------------------------------------------//
void display_fabliha()
{
    int i;
    int triangleAmount = 100;
    float twicePi = 2.0f * PI;

    glClear(GL_COLOR_BUFFER_BIT);

    // SKY
    glColor3f(0.29f, 0.49f, 0.78f);
    glBegin(GL_QUADS);
    glVertex2f(-1.00f, 1.00f);
    glVertex2f(1.00f, 1.00f);
    glVertex2f(1.00f, -0.05f);
    glVertex2f(-1.00f, -0.05f);
    glEnd();

    // SUN
    glColor3f(1.0f, 0.75f, 0.05f);
    drawCircle_fabliha(-0.50, 0.75, 0.09f);

    // CLOUD 1 - moves toward +X
    glPushMatrix();
    glTranslatef(cloud1Position_fabliha, 0.0f, 0.0f);
    glColor3f(0.96f, 0.92f, 0.85f);
    drawCircle_fabliha(-0.83f, 0.82f, 0.045f);
    drawCircle_fabliha(-0.78f, 0.84f, 0.060f);
    drawCircle_fabliha(-0.72f, 0.82f, 0.050f);
    drawCircle_fabliha(-0.76f, 0.79f, 0.055f);
    glPopMatrix();

    // CLOUD 2 - moves toward -X
    glPushMatrix();
    glTranslatef(cloud2Position_fabliha, 0.0f, 0.0f);
    glColor3f(0.96f, 0.92f, 0.85f);
    drawCircle_fabliha(-0.10f, 0.70f, 0.040f);
    drawCircle_fabliha(-0.05f, 0.72f, 0.055f);
    drawCircle_fabliha(0.01f, 0.70f, 0.045f);
    drawCircle_fabliha(-0.04f, 0.67f, 0.050f);
    glPopMatrix();

    // CLOUD 3 - moves toward +X
    glPushMatrix();
    glTranslatef(cloud3Position_fabliha, 0.0f, 0.0f);
    glColor3f(0.96f, 0.92f, 0.85f);
    drawCircle_fabliha(0.62f, 0.83f, 0.045f);
    drawCircle_fabliha(0.68f, 0.85f, 0.060f);
    drawCircle_fabliha(0.74f, 0.83f, 0.050f);
    drawCircle_fabliha(0.69f, 0.80f, 0.055f);
    glPopMatrix();

    // BACKGROUND AREA
    glColor3f(0.76f, 0.65f, 0.48f);
    glBegin(GL_QUADS);
    glVertex2f(-1.00f, -0.05f);
    glVertex2f(1.00f, -0.05f);
    glVertex2f(1.00f, -0.40f);
    glVertex2f(-1.00f, -0.40f);
    glEnd();

    // BUILDING 1
    glColor3f(0.22f, 0.27f, 0.36f);
    glBegin(GL_QUADS);
    glVertex2f(-1.00f, -0.05f);
    glVertex2f(-0.88f, -0.05f);
    glVertex2f(-0.88f, 0.35f);
    glVertex2f(-1.00f, 0.35f);
    glEnd();

    // BUILDING 2
    glColor3f(0.34f, 0.39f, 0.49f);
    glBegin(GL_QUADS);
    glVertex2f(-0.84f, -0.05f);
    glVertex2f(-0.69f, -0.05f);
    glVertex2f(-0.69f, 0.64f);
    glVertex2f(-0.84f, 0.64f);
    glEnd();

    // BUILDING 3
    glColor3f(0.27f, 0.32f, 0.41f);
    glBegin(GL_QUADS);
    glVertex2f(-0.65f, -0.05f);
    glVertex2f(-0.50f, -0.05f);
    glVertex2f(-0.50f, 0.43f);
    glVertex2f(-0.65f, 0.43f);
    glEnd();

    // BUILDING 4
    glColor3f(0.34f, 0.39f, 0.49f);
    glBegin(GL_QUADS);
    glVertex2f(-0.47f, -0.05f);
    glVertex2f(-0.29f, -0.05f);
    glVertex2f(-0.29f, 0.54f);
    glVertex2f(-0.47f, 0.54f);
    glEnd();

    // BUILDING 5
    glColor3f(0.25f, 0.30f, 0.39f);
    glBegin(GL_QUADS);
    glVertex2f(-0.26f, -0.05f);
    glVertex2f(-0.07f, -0.05f);
    glVertex2f(-0.07f, 0.31f);
    glVertex2f(-0.26f, 0.31f);
    glEnd();

    // BUILDING 6
    glColor3f(0.31f, 0.36f, 0.46f);
    glBegin(GL_QUADS);
    glVertex2f(-0.04f, -0.05f);
    glVertex2f(0.15f, -0.05f);
    glVertex2f(0.15f, 0.49f);
    glVertex2f(-0.04f, 0.49f);
    glEnd();

    // BUILDING 7
    glColor3f(0.23f, 0.28f, 0.37f);
    glBegin(GL_QUADS);
    glVertex2f(0.19f, -0.05f);
    glVertex2f(0.37f, -0.05f);
    glVertex2f(0.37f, 0.62f);
    glVertex2f(0.19f, 0.62f);
    glEnd();

    // BUILDING 8
    glColor3f(0.34f, 0.39f, 0.48f);
    glBegin(GL_QUADS);
    glVertex2f(0.42f, -0.05f);
    glVertex2f(0.62f, -0.05f);
    glVertex2f(0.62f, 0.38f);
    glVertex2f(0.42f, 0.38f);
    glEnd();

    // BUILDING 9
    glColor3f(0.25f, 0.30f, 0.39f);
    glBegin(GL_QUADS);
    glVertex2f(0.67f, -0.05f);
    glVertex2f(0.84f, -0.05f);
    glVertex2f(0.84f, 0.54f);
    glVertex2f(0.67f, 0.54f);
    glEnd();


    // BUILDING 10
    glColor3f(0.30f, 0.35f, 0.44f);

    glBegin(GL_QUADS);

    glVertex2f(0.88f, -0.05f);
    glVertex2f(1.00f, -0.05f);
    glVertex2f(1.00f, 0.70f);
    glVertex2f(0.88f, 0.70f);

    glEnd();

    // BUILDING WINDOWS
    glColor3f(0.055f, 0.075f, 0.115f);
    // Building 1
    glBegin(GL_QUADS);
    glVertex2f(-0.93f, 0.04f);
    glVertex2f(-0.90f, 0.04f);
    glVertex2f(-0.90f, 0.09f);
    glVertex2f(-0.93f, 0.09f);

    glVertex2f(-0.98f, 0.18f);
    glVertex2f(-0.95f, 0.18f);
    glVertex2f(-0.95f, 0.23f);
    glVertex2f(-0.98f, 0.23f);

    glVertex2f(-0.93f, 0.18f);
    glVertex2f(-0.90f, 0.18f);
    glVertex2f(-0.90f, 0.23f);
    glVertex2f(-0.93f, 0.23f);
    glEnd();


    // Building 2
    glBegin(GL_QUADS);
    glVertex2f(-0.81f, 0.04f);
    glVertex2f(-0.79f, 0.04f);
    glVertex2f(-0.79f, 0.10f);
    glVertex2f(-0.81f, 0.10f);

    glVertex2f(-0.78f, 0.04f);
    glVertex2f(-0.76f, 0.04f);
    glVertex2f(-0.76f, 0.10f);
    glVertex2f(-0.78f, 0.10f);

    glVertex2f(-0.74f, 0.04f);
    glVertex2f(-0.72f, 0.04f);
    glVertex2f(-0.72f, 0.10f);
    glVertex2f(-0.74f, 0.10f);

    glVertex2f(-0.78f, 0.18f);
    glVertex2f(-0.76f, 0.18f);
    glVertex2f(-0.76f, 0.23f);
    glVertex2f(-0.78f, 0.23f);

    glVertex2f(-0.74f, 0.18f);
    glVertex2f(-0.72f, 0.18f);
    glVertex2f(-0.72f, 0.23f);
    glVertex2f(-0.74f, 0.23f);

    glVertex2f(-0.81f, 0.32f);
    glVertex2f(-0.79f, 0.32f);
    glVertex2f(-0.79f, 0.38f);
    glVertex2f(-0.81f, 0.38f);

    glVertex2f(-0.78f, 0.32f);
    glVertex2f(-0.76f, 0.32f);
    glVertex2f(-0.76f, 0.38f);
    glVertex2f(-0.78f, 0.38f);

    glVertex2f(-0.81f, 0.46f);
    glVertex2f(-0.79f, 0.46f);
    glVertex2f(-0.79f, 0.52f);
    glVertex2f(-0.81f, 0.52f);

    glVertex2f(-0.78f, 0.46f);
    glVertex2f(-0.76f, 0.46f);
    glVertex2f(-0.76f, 0.52f);
    glVertex2f(-0.78f, 0.52f);

    glVertex2f(-0.74f, 0.46f);
    glVertex2f(-0.72f, 0.46f);
    glVertex2f(-0.72f, 0.52f);
    glVertex2f(-0.74f, 0.52f);
    glEnd();

    // Building 3
    glBegin(GL_QUADS);
    glVertex2f(-0.62f, 0.04f);
    glVertex2f(-0.60f, 0.04f);
    glVertex2f(-0.60f, 0.10f);
    glVertex2f(-0.62f, 0.10f);

    glVertex2f(-0.55f, 0.04f);
    glVertex2f(-0.53f, 0.04f);
    glVertex2f(-0.53f, 0.10f);
    glVertex2f(-0.55f, 0.10f);

    glVertex2f(-0.62f, 0.18f);
    glVertex2f(-0.60f, 0.18f);
    glVertex2f(-0.60f, 0.23f);
    glVertex2f(-0.62f, 0.23f);

    glVertex2f(-0.58f, 0.18f);
    glVertex2f(-0.56f, 0.18f);
    glVertex2f(-0.56f, 0.23f);
    glVertex2f(-0.58f, 0.23f);

    glVertex2f(-0.55f, 0.18f);
    glVertex2f(-0.53f, 0.18f);
    glVertex2f(-0.53f, 0.23f);
    glVertex2f(-0.55f, 0.23f);

    glVertex2f(-0.58f, 0.32f);
    glVertex2f(-0.56f, 0.32f);
    glVertex2f(-0.56f, 0.38f);
    glVertex2f(-0.58f, 0.38f);

    glVertex2f(-0.55f, 0.32f);
    glVertex2f(-0.53f, 0.32f);
    glVertex2f(-0.53f, 0.38f);
    glVertex2f(-0.55f, 0.38f);
    glEnd();

    // Building 4
    glBegin(GL_QUADS);
    glVertex2f(-0.39f, 0.04f);
    glVertex2f(-0.37f, 0.04f);
    glVertex2f(-0.37f, 0.10f);
    glVertex2f(-0.39f, 0.10f);

    glVertex2f(-0.35f, 0.04f);
    glVertex2f(-0.32f, 0.04f);
    glVertex2f(-0.32f, 0.10f);
    glVertex2f(-0.35f, 0.10f);

    glVertex2f(-0.44f, 0.18f);
    glVertex2f(-0.41f, 0.18f);
    glVertex2f(-0.41f, 0.23f);
    glVertex2f(-0.44f, 0.23f);

    glVertex2f(-0.39f, 0.18f);
    glVertex2f(-0.37f, 0.18f);
    glVertex2f(-0.37f, 0.23f);
    glVertex2f(-0.39f, 0.23f);

    glVertex2f(-0.44f, 0.32f);
    glVertex2f(-0.41f, 0.32f);
    glVertex2f(-0.41f, 0.38f);
    glVertex2f(-0.44f, 0.38f);

    glVertex2f(-0.39f, 0.32f);
    glVertex2f(-0.37f, 0.32f);
    glVertex2f(-0.37f, 0.38f);
    glVertex2f(-0.39f, 0.38f);

    glVertex2f(-0.35f, 0.32f);
    glVertex2f(-0.32f, 0.32f);
    glVertex2f(-0.32f, 0.38f);
    glVertex2f(-0.35f, 0.38f);
    glEnd();

    // Building 5
    glBegin(GL_QUADS);
    glVertex2f(-0.23f, 0.04f);
    glVertex2f(-0.20f, 0.04f);
    glVertex2f(-0.20f, 0.10f);
    glVertex2f(-0.23f, 0.10f);

    glVertex2f(-0.13f, 0.04f);
    glVertex2f(-0.10f, 0.04f);
    glVertex2f(-0.10f, 0.10f);
    glVertex2f(-0.13f, 0.10f);

    glVertex2f(-0.23f, 0.18f);
    glVertex2f(-0.20f, 0.18f);
    glVertex2f(-0.20f, 0.23f);
    glVertex2f(-0.23f, 0.23f);

    glVertex2f(-0.18f, 0.18f);
    glVertex2f(-0.15f, 0.18f);
    glVertex2f(-0.15f, 0.23f);
    glVertex2f(-0.18f, 0.23f);

    glVertex2f(-0.13f, 0.18f);
    glVertex2f(-0.10f, 0.18f);
    glVertex2f(-0.10f, 0.23f);
    glVertex2f(-0.13f, 0.23f);
    glEnd();

    // Building 6
    glBegin(GL_QUADS);
    glVertex2f(-0.01f, 0.04f);
    glVertex2f(0.02f, 0.04f);
    glVertex2f(0.02f, 0.10f);
    glVertex2f(-0.01f, 0.10f);

    glVertex2f(0.04f, 0.04f);
    glVertex2f(0.07f, 0.04f);
    glVertex2f(0.07f, 0.10f);
    glVertex2f(0.04f, 0.10f);

    glVertex2f(-0.01f, 0.18f);
    glVertex2f(0.02f, 0.18f);
    glVertex2f(0.02f, 0.23f);
    glVertex2f(-0.01f, 0.23f);

    glVertex2f(0.04f, 0.18f);
    glVertex2f(0.07f, 0.18f);
    glVertex2f(0.07f, 0.23f);
    glVertex2f(0.04f, 0.23f);

    glVertex2f(0.09f, 0.18f);
    glVertex2f(0.12f, 0.18f);
    glVertex2f(0.12f, 0.23f);
    glVertex2f(0.09f, 0.23f);

    glVertex2f(0.04f, 0.32f);
    glVertex2f(0.07f, 0.32f);
    glVertex2f(0.07f, 0.38f);
    glVertex2f(0.04f, 0.38f);

    glVertex2f(0.09f, 0.32f);
    glVertex2f(0.12f, 0.32f);
    glVertex2f(0.12f, 0.38f);
    glVertex2f(0.09f, 0.38f);
    glEnd();

    // Building 7
    glBegin(GL_QUADS);
    glVertex2f(0.27f, 0.04f);
    glVertex2f(0.29f, 0.04f);
    glVertex2f(0.29f, 0.10f);
    glVertex2f(0.27f, 0.10f);

    glVertex2f(0.31f, 0.04f);
    glVertex2f(0.34f, 0.04f);
    glVertex2f(0.34f, 0.10f);
    glVertex2f(0.31f, 0.10f);

    glVertex2f(0.22f, 0.18f);
    glVertex2f(0.25f, 0.18f);
    glVertex2f(0.25f, 0.23f);
    glVertex2f(0.22f, 0.23f);

    glVertex2f(0.27f, 0.18f);
    glVertex2f(0.29f, 0.18f);
    glVertex2f(0.29f, 0.23f);
    glVertex2f(0.27f, 0.23f);

    glVertex2f(0.22f, 0.32f);
    glVertex2f(0.25f, 0.32f);
    glVertex2f(0.25f, 0.38f);
    glVertex2f(0.22f, 0.38f);

    glVertex2f(0.27f, 0.32f);
    glVertex2f(0.29f, 0.32f);
    glVertex2f(0.29f, 0.38f);
    glVertex2f(0.27f, 0.38f);

    glVertex2f(0.31f, 0.32f);
    glVertex2f(0.34f, 0.32f);
    glVertex2f(0.34f, 0.38f);
    glVertex2f(0.31f, 0.38f);

    glVertex2f(0.27f, 0.46f);
    glVertex2f(0.29f, 0.46f);
    glVertex2f(0.29f, 0.52f);
    glVertex2f(0.27f, 0.52f);

    glVertex2f(0.31f, 0.46f);
    glVertex2f(0.34f, 0.46f);
    glVertex2f(0.34f, 0.52f);
    glVertex2f(0.31f, 0.52f);
    glEnd();

    // Building 8
    glBegin(GL_QUADS);
    glVertex2f(0.46f, 0.04f);
    glVertex2f(0.48f, 0.04f);
    glVertex2f(0.48f, 0.10f);
    glVertex2f(0.46f, 0.10f);

    glVertex2f(0.56f, 0.04f);
    glVertex2f(0.58f, 0.04f);
    glVertex2f(0.58f, 0.10f);
    glVertex2f(0.56f, 0.10f);

    glVertex2f(0.46f, 0.18f);
    glVertex2f(0.48f, 0.18f);
    glVertex2f(0.48f, 0.23f);
    glVertex2f(0.46f, 0.23f);

    glVertex2f(0.56f, 0.18f);
    glVertex2f(0.58f, 0.18f);
    glVertex2f(0.58f, 0.23f);
    glVertex2f(0.56f, 0.23f);
    glEnd();

    // Building 9
    glBegin(GL_QUADS);
    glVertex2f(0.70f, 0.04f);
    glVertex2f(0.72f, 0.04f);
    glVertex2f(0.72f, 0.10f);
    glVertex2f(0.70f, 0.10f);

    glVertex2f(0.74f, 0.04f);
    glVertex2f(0.77f, 0.04f);
    glVertex2f(0.77f, 0.10f);
    glVertex2f(0.74f, 0.10f);

    glVertex2f(0.79f, 0.04f);
    glVertex2f(0.81f, 0.04f);
    glVertex2f(0.81f, 0.10f);
    glVertex2f(0.79f, 0.10f);

    glVertex2f(0.74f, 0.18f);
    glVertex2f(0.77f, 0.18f);
    glVertex2f(0.77f, 0.23f);
    glVertex2f(0.74f, 0.23f);

    glVertex2f(0.79f, 0.18f);
    glVertex2f(0.81f, 0.18f);
    glVertex2f(0.81f, 0.23f);
    glVertex2f(0.79f, 0.23f);

    glVertex2f(0.70f, 0.32f);
    glVertex2f(0.72f, 0.32f);
    glVertex2f(0.72f, 0.38f);
    glVertex2f(0.70f, 0.38f);

    glVertex2f(0.74f, 0.32f);
    glVertex2f(0.77f, 0.32f);
    glVertex2f(0.77f, 0.38f);
    glVertex2f(0.74f, 0.38f);
    glEnd();

    // Building 10
    glBegin(GL_QUADS);
    glVertex2f(0.95f, 0.04f);
    glVertex2f(0.98f, 0.04f);
    glVertex2f(0.98f, 0.09f);
    glVertex2f(0.95f, 0.09f);

    glVertex2f(0.90f, 0.18f);
    glVertex2f(0.93f, 0.18f);
    glVertex2f(0.93f, 0.23f);
    glVertex2f(0.90f, 0.23f);

    glVertex2f(0.95f, 0.18f);
    glVertex2f(0.98f, 0.18f);
    glVertex2f(0.98f, 0.23f);
    glVertex2f(0.95f, 0.23f);

    glVertex2f(0.95f, 0.32f);
    glVertex2f(0.98f, 0.32f);
    glVertex2f(0.98f, 0.37f);
    glVertex2f(0.95f, 0.37f);

    glVertex2f(0.90f, 0.46f);
    glVertex2f(0.93f, 0.46f);
    glVertex2f(0.93f, 0.51f);
    glVertex2f(0.90f, 0.51f);

    glVertex2f(0.95f, 0.46f);
    glVertex2f(0.98f, 0.46f);
    glVertex2f(0.98f, 0.51f);
    glVertex2f(0.95f, 0.51f);

    glVertex2f(0.90f, 0.60f);
    glVertex2f(0.93f, 0.60f);
    glVertex2f(0.93f, 0.65f);
    glVertex2f(0.90f, 0.65f);
    glEnd();

    // YELLOW WINDOWS
    glColor3f(1.0f, 0.72f, 0.16f);
    glBegin(GL_QUADS);
    glVertex2f(-0.98f, 0.04f);
    glVertex2f(-0.95f, 0.04f);
    glVertex2f(-0.95f, 0.09f);
    glVertex2f(-0.98f, 0.09f);

    glVertex2f(-0.81f, 0.18f);
    glVertex2f(-0.79f, 0.18f);
    glVertex2f(-0.79f, 0.23f);
    glVertex2f(-0.81f, 0.23f);

    glVertex2f(-0.74f, 0.32f);
    glVertex2f(-0.72f, 0.32f);
    glVertex2f(-0.72f, 0.38f);
    glVertex2f(-0.74f, 0.38f);

    glVertex2f(-0.58f, 0.04f);
    glVertex2f(-0.56f, 0.04f);
    glVertex2f(-0.56f, 0.10f);
    glVertex2f(-0.58f, 0.10f);

    glVertex2f(-0.62f, 0.32f);
    glVertex2f(-0.60f, 0.32f);
    glVertex2f(-0.60f, 0.38f);
    glVertex2f(-0.62f, 0.38f);

    glVertex2f(-0.44f, 0.04f);
    glVertex2f(-0.41f, 0.04f);
    glVertex2f(-0.41f, 0.10f);
    glVertex2f(-0.44f, 0.10f);

    glVertex2f(-0.35f, 0.18f);
    glVertex2f(-0.32f, 0.18f);
    glVertex2f(-0.32f, 0.23f);
    glVertex2f(-0.35f, 0.23f);

    glVertex2f(-0.18f, 0.04f);
    glVertex2f(-0.15f, 0.04f);
    glVertex2f(-0.15f, 0.10f);
    glVertex2f(-0.18f, 0.10f);

    glVertex2f(0.09f, 0.04f);
    glVertex2f(0.12f, 0.04f);
    glVertex2f(0.12f, 0.10f);
    glVertex2f(0.09f, 0.10f);

    glVertex2f(-0.01f, 0.32f);
    glVertex2f(0.02f, 0.32f);
    glVertex2f(0.02f, 0.38f);
    glVertex2f(-0.01f, 0.38f);

    glVertex2f(0.22f, 0.04f);
    glVertex2f(0.25f, 0.04f);
    glVertex2f(0.25f, 0.10f);
    glVertex2f(0.22f, 0.10f);

    glVertex2f(0.31f, 0.18f);
    glVertex2f(0.34f, 0.18f);
    glVertex2f(0.34f, 0.23f);
    glVertex2f(0.31f, 0.23f);

    glVertex2f(0.22f, 0.46f);
    glVertex2f(0.25f, 0.46f);
    glVertex2f(0.25f, 0.52f);
    glVertex2f(0.22f, 0.52f);

    glVertex2f(0.51f, 0.04f);
    glVertex2f(0.53f, 0.04f);
    glVertex2f(0.53f, 0.10f);
    glVertex2f(0.51f, 0.10f);

    glVertex2f(0.51f, 0.18f);
    glVertex2f(0.53f, 0.18f);
    glVertex2f(0.53f, 0.23f);
    glVertex2f(0.51f, 0.23f);

    glVertex2f(0.70f, 0.18f);
    glVertex2f(0.72f, 0.18f);
    glVertex2f(0.72f, 0.23f);
    glVertex2f(0.70f, 0.23f);

    glVertex2f(0.79f, 0.32f);
    glVertex2f(0.81f, 0.32f);
    glVertex2f(0.81f, 0.38f);
    glVertex2f(0.79f, 0.38f);

    glVertex2f(0.90f, 0.04f);
    glVertex2f(0.93f, 0.04f);
    glVertex2f(0.93f, 0.09f);
    glVertex2f(0.90f, 0.09f);

    glVertex2f(0.90f, 0.32f);
    glVertex2f(0.93f, 0.32f);
    glVertex2f(0.93f, 0.37f);
    glVertex2f(0.90f, 0.37f);

    glVertex2f(0.95f, 0.60f);
    glVertex2f(0.98f, 0.60f);
    glVertex2f(0.98f, 0.65f);
    glVertex2f(0.95f, 0.65f);
    glEnd();

    // RIVER
    glColor3f(0.08f, 0.40f, 0.59f);
    glBegin(GL_QUADS);
    glVertex2f(-1.00f, -0.40f);
    glVertex2f(1.00f, -0.40f);
    glVertex2f(1.00f, -0.75f);
    glVertex2f(-1.00f, -0.75f);
    glEnd();

    // WATER MARKS
    glPushMatrix();
    glTranslatef(waterPosition_fabliha, 0.0f, 0.0f);
    glColor3f(0.75f, 0.88f, 0.95f);
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glVertex2f(-0.90f, -0.45f);
    glVertex2f(-0.80f, -0.45f);

    glVertex2f(-0.60f, -0.48f);
    glVertex2f(-0.48f, -0.48f);

    glVertex2f(-0.30f, -0.44f);
    glVertex2f(-0.18f, -0.44f);

    glVertex2f(0.05f, -0.49f);
    glVertex2f(0.17f, -0.49f);

    glVertex2f(0.35f, -0.44f);
    glVertex2f(0.46f, -0.44f);

    glVertex2f(0.65f, -0.50f);
    glVertex2f(0.78f, -0.50f);

    glVertex2f(-0.78f, -0.62f);
    glVertex2f(-0.66f, -0.62f);

    glVertex2f(-0.40f, -0.66f);
    glVertex2f(-0.28f, -0.66f);

    glVertex2f(-0.05f, -0.60f);
    glVertex2f(0.07f, -0.60f);

    glVertex2f(0.28f, -0.67f);
    glVertex2f(0.40f, -0.67f);

    glVertex2f(0.58f, -0.61f);
    glVertex2f(0.72f, -0.61f);

    glVertex2f(0.84f, -0.68f);
    glVertex2f(0.95f, -0.68f);
    glEnd();
    glLineWidth(1.0f);
    glPopMatrix();

    // BOAT 1 - MOVES TOWARD +X
    glPushMatrix();
    glTranslatef(boat1Position_fabliha, 0.0f, 0.0f);
    glColor3f(0.08f, 0.08f, 0.07f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.58f, -0.57f);
    glVertex2f(-0.38f, -0.57f);
    glVertex2f(-0.41f, -0.59f);
    glVertex2f(-0.43f, -0.61f);
    glVertex2f(-0.53f, -0.61f);
    glVertex2f(-0.56f, -0.59f);
    glEnd();

    glColor3f(0.35f,0.20f,0.08f);
    glBegin(GL_QUADS);
    glVertex2f(-0.56f, -0.57f);
    glVertex2f(-0.41f, -0.57f);
    glVertex2f(-0.42f, -0.58f);
    glVertex2f(-0.54f, -0.58f);
    glEnd();

    glColor3f(0.95f,0.65f,0.15f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.54f, -0.56f);
    glVertex2f(-0.42f, -0.56f);
    glVertex2f(-0.43f, -0.51f);
    glVertex2f(-0.46f, -0.49f);
    glVertex2f(-0.51f, -0.49f);
    glVertex2f(-0.53f, -0.51f);
    glEnd();

    glColor3f(0.65f,0.38f,0.08f);
    glBegin(GL_LINES);
    glVertex2f(-0.51f, -0.56f);
    glVertex2f(-0.51f, -0.49f);

    glVertex2f(-0.48f, -0.56f);
    glVertex2f(-0.48f, -0.49f);

    glVertex2f(-0.45f, -0.56f);
    glVertex2f(-0.45f, -0.49f);

    glVertex2f(-0.53f, -0.53f);
    glVertex2f(-0.43f, -0.53f);
    glEnd();

    glColor3f(0.12f,0.55f,0.75f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.62f, -0.61f);
    glVertex2f(-0.58f, -0.62f);
    glVertex2f(-0.53f, -0.62f);
    glVertex2f(-0.48f, -0.63f);
    glVertex2f(-0.43f, -0.62f);
    glVertex2f(-0.38f, -0.62f);
    glVertex2f(-0.34f, -0.61f);
    glEnd();
    glPopMatrix();

    // BOAT 2 - MOVES TOWARD -X
    glPushMatrix();
    glTranslatef(boat2Position_fabliha, 0.0f, 0.0f);
    glColor3f(0.08f,0.08f,0.07f);
    glBegin(GL_POLYGON);
    glVertex2f(0.33f, -0.57f);
    glVertex2f(0.53f, -0.57f);
    glVertex2f(0.51f, -0.59f);
    glVertex2f(0.47f, -0.61f);
    glVertex2f(0.39f, -0.61f);
    glVertex2f(0.35f, -0.59f);
    glEnd();

    glColor3f(0.35f,0.20f,0.08f);
    glBegin(GL_QUADS);
    glVertex2f(0.35f, -0.57f);
    glVertex2f(0.51f, -0.57f);
    glVertex2f(0.49f, -0.58f);
    glVertex2f(0.37f, -0.58f);
    glEnd();

    glColor3f(0.95f,0.65f,0.15f);
    glBegin(GL_POLYGON);
    glVertex2f(0.38f, -0.56f);
    glVertex2f(0.48f, -0.56f);
    glVertex2f(0.47f, -0.51f);
    glVertex2f(0.46f, -0.49f);
    glVertex2f(0.41f, -0.49f);
    glVertex2f(0.39f, -0.51f);
    glEnd();

    glColor3f(0.65f,0.38f,0.08f);
    glBegin(GL_LINES);
    glVertex2f(0.40f, -0.56f);
    glVertex2f(0.40f, -0.49f);

    glVertex2f(0.43f, -0.56f);
    glVertex2f(0.43f, -0.49f);

    glVertex2f(0.46f, -0.56f);
    glVertex2f(0.46f, -0.49f);

    glVertex2f(0.38f, -0.53f);
    glVertex2f(0.48f, -0.53f);
    glEnd();

    glColor3f(0.12f,0.55f,0.75f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.29f, -0.61f);
    glVertex2f(0.33f, -0.62f);
    glVertex2f(0.38f, -0.62f);
    glVertex2f(0.43f, -0.63f);
    glVertex2f(0.48f, -0.62f);
    glVertex2f(0.53f, -0.62f);
    glVertex2f(0.57f, -0.61f);
    glEnd();
    glPopMatrix();

    // CAR 03-Blue - ON TOP OF BRIDGE
    glPushMatrix();
    glTranslatef(car3BluePosition_fabliha, 0.0f, 0.0f);
    glColor3f(0.0f, 0.3f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.60f,-0.05f);
    glVertex2f(-0.42f,-0.05f);
    glVertex2f(-0.42f,-0.01f);
    glVertex2f(-0.60f,-0.01f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.57f,-0.01f);
    glVertex2f(-0.45f,-0.01f);
    glVertex2f(-0.47f,0.04f);
    glVertex2f(-0.55f,0.04f);
    glEnd();

    glColor3f(0.75f,0.90f,0.95f);

    glBegin(GL_QUADS);
    glVertex2f(-0.55f,0.00f);
    glVertex2f(-0.52f,0.00f);
    glVertex2f(-0.52f,0.03f);
    glVertex2f(-0.55f,0.03f);

    glVertex2f(-0.50f,0.00f);
    glVertex2f(-0.47f,0.00f);
    glVertex2f(-0.47f,0.03f);
    glVertex2f(-0.50f,0.03f);
    glEnd();

    // CAR 03 WHEELS
    glColor3f(0.03f,0.03f,0.03f);
    drawCircle_fabliha(-0.56f,-0.05f,0.02f);
    drawCircle_fabliha(-0.45f,-0.05f,0.02f);

    glColor3f(0.20f,0.20f,0.20f);
    drawCircle_fabliha(-0.56f,-0.05f,0.009f);
    drawCircle_fabliha(-0.45f,-0.05f,0.009f);
    glPopMatrix();

    // CAR 04-pink - ON TOP OF BRIDGE
    glPushMatrix();
    glTranslatef(car4PinkPosition_fabliha, 0.0f, 0.0f);
    glColor3f(1.0f, 0.0f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.35f,-0.05f);
    glVertex2f(0.53f,-0.05f);
    glVertex2f(0.53f,-0.01f);
    glVertex2f(0.35f,-0.01f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.38f,-0.01f);
    glVertex2f(0.50f,-0.01f);
    glVertex2f(0.48f,0.04f);
    glVertex2f(0.40f,0.04f);
    glEnd();

    glColor3f(0.75f,0.90f,0.95f);
    glBegin(GL_QUADS);
    glVertex2f(0.40f,0.00f);
    glVertex2f(0.43f,0.00f);
    glVertex2f(0.43f,0.03f);
    glVertex2f(0.40f,0.03f);

    glVertex2f(0.45f,0.00f);
    glVertex2f(0.48f,0.00f);
    glVertex2f(0.48f,0.03f);
    glVertex2f(0.45f,0.03f);
    glEnd();

    // CAR 04 WHEELS
    glColor3f(0.03f,0.03f,0.03f);
    drawCircle_fabliha(0.38f,-0.05f,0.02f);
    drawCircle_fabliha(0.49f,-0.05f,0.02f);

    glColor3f(0.20f,0.20f,0.20f);
    drawCircle_fabliha(0.38f,-0.05f,0.009f);
    drawCircle_fabliha(0.49f,-0.05f,0.009f);
    glPopMatrix();

    // BRIDGE UPPER ARCH STRUCTURE
    glColor3f(0.82f, 0.82f, 0.86f);
    glLineWidth(5.0f);
    // ARCH 1 - OUTER
    glBegin(GL_LINE_STRIP);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            -0.75f + 0.20f * cos(i * PI / triangleAmount),
            -0.10f + 0.20f * sin(i * PI / triangleAmount)
        );
    }
    glEnd();

    // ARCH 2 - OUTER
    glBegin(GL_LINE_STRIP);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            -0.37f + 0.20f * cos(i * PI / triangleAmount),
            -0.10f + 0.20f * sin(i * PI / triangleAmount)
        );
    }
    glEnd();

    // ARCH 3 - OUTER
    glBegin(GL_LINE_STRIP);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            0.00f + 0.20f * cos(i * PI / triangleAmount),
            -0.10f + 0.20f * sin(i * PI / triangleAmount)
        );
    }
    glEnd();

    // ARCH 4 - OUTER
    glBegin(GL_LINE_STRIP);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            0.37f + 0.20f * cos(i * PI / triangleAmount),
            -0.10f + 0.20f * sin(i * PI / triangleAmount)
        );
    }
    glEnd();

    // ARCH 5 - OUTER
    glBegin(GL_LINE_STRIP);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            0.75f + 0.20f * cos(i * PI / triangleAmount),
            -0.10f + 0.20f * sin(i * PI / triangleAmount)
        );
    }
    glEnd();


    // SECOND ARCH SET
    glColor3f(0.92f, 0.92f, 0.94f);
    glLineWidth(4.0f);

    // Arch crossing 1
    glBegin(GL_LINE_STRIP);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            -0.57f + 0.20f * cos(i * PI / triangleAmount),
            -0.10f + 0.20f * sin(i * PI / triangleAmount)
        );
    }
    glEnd();

    // Arch crossing 2
    glBegin(GL_LINE_STRIP);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            -0.19f + 0.20f * cos(i * PI / triangleAmount),
            -0.10f + 0.20f * sin(i * PI / triangleAmount)
        );
    }
    glEnd();

    // Arch crossing 3
    glBegin(GL_LINE_STRIP);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            0.19f + 0.20f * cos(i * PI / triangleAmount),
            -0.10f + 0.20f * sin(i * PI / triangleAmount)
        );
    }
    glEnd();

    // Arch crossing 4
    glBegin(GL_LINE_STRIP);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            0.57f + 0.20f * cos(i * PI / triangleAmount),
            -0.10f + 0.20f * sin(i * PI / triangleAmount)
        );
    }
    glEnd();

    // BRIDGE BODY
    glColor3f(0.55f, 0.56f, 0.62f);
    glBegin(GL_QUADS);
    glVertex2f(-0.94f, -0.05f);
    glVertex2f(0.94f, -0.05f);
    glVertex2f(0.94f, -0.40f);
    glVertex2f(-0.94f, -0.40f);
    glEnd();

    // BRIDGE TOP
    glColor3f(0.70f, 0.70f, 0.74f);
    glBegin(GL_QUADS);
    glVertex2f(-0.96f, -0.05f);
    glVertex2f(0.96f, -0.05f);
    glVertex2f(0.96f, -0.09f);
    glVertex2f(-0.96f, -0.09f);
    glEnd();

    // ARCH 1
    glColor3f(0.08f, 0.40f, 0.59f);
    glBegin(GL_TRIANGLE_FAN);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            -0.75f + 0.17f * cos(i * PI / triangleAmount),
            -0.40f + 0.17f * sin(i * PI / triangleAmount)
        );
    }
    glEnd();

    // ARCH 2
    glBegin(GL_TRIANGLE_FAN);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            -0.38f + 0.17f * cos(i * PI / triangleAmount),
            -0.40f + 0.17f * sin(i * PI / triangleAmount)
        );
    }
    glEnd();

    // ARCH 3
    glBegin(GL_TRIANGLE_FAN);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            0.00f + 0.17f * cos(i * PI / triangleAmount),
            -0.40f + 0.17f * sin(i * PI / triangleAmount)
        );
    }
    glEnd();


    // ARCH 4
    glBegin(GL_TRIANGLE_FAN);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            0.38f + 0.17f * cos(i * PI / triangleAmount),
            -0.40f + 0.17f * sin(i * PI / triangleAmount)
        );
    }
    glEnd();

    // ARCH 5
    glBegin(GL_TRIANGLE_FAN);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            0.75f + 0.17f * cos(i * PI / triangleAmount),
            -0.40f + 0.17f * sin(i * PI / triangleAmount)
        );
    }
    glEnd();


    // ARCH BORDERS
    glColor3f(0.35f, 0.36f, 0.40f);
    glLineWidth(3.0f);
    // Arch 1 border
    glBegin(GL_LINE_STRIP);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            -0.75f + 0.17f * cos(i * PI / triangleAmount),
            -0.40f + 0.17f * sin(i * PI / triangleAmount)
        );
    }
    glEnd();

    // Arch 2 border
    glBegin(GL_LINE_STRIP);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            -0.38f + 0.17f * cos(i * PI / triangleAmount),
            -0.40f + 0.17f * sin(i * PI / triangleAmount)
        );
    }
    glEnd();

    // Arch 3 border
    glBegin(GL_LINE_STRIP);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            0.00f + 0.17f * cos(i * PI / triangleAmount),
            -0.40f + 0.17f * sin(i * PI / triangleAmount)
        );
    }
    glEnd();

    // Arch 4 border
    glBegin(GL_LINE_STRIP);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            0.38f + 0.17f * cos(i * PI / triangleAmount),
            -0.40f + 0.17f * sin(i * PI / triangleAmount)
        );
    }
    glEnd();

    // Arch 5 border
    glBegin(GL_LINE_STRIP);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            0.75f + 0.17f * cos(i * PI / triangleAmount),
            -0.40f + 0.17f * sin(i * PI / triangleAmount)
        );
    }
    glEnd();
    glLineWidth(1.0f);

    // GREEN LAND
    glColor3f(0.04f,0.28f,0.10f);
    glBegin(GL_QUADS);
    glVertex2f(-1.00f, -0.40f);
    glVertex2f(-0.75f, -0.40f);
    glVertex2f(-0.75f, -0.48f);
    glVertex2f(-1.00f, -0.48f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.75f, -0.40f);
    glVertex2f(1.00f, -0.40f);
    glVertex2f(1.00f, -0.48f);
    glVertex2f(0.75f, -0.48f);
    glEnd();

    // TREES
    // LEFT TREE 1
    glColor3f(0.30f,0.12f,0.03f);
    glBegin(GL_QUADS);
    glVertex2f(-0.94f, -0.41f);
    glVertex2f(-0.90f, -0.41f);
    glVertex2f(-0.90f, -0.16f);
    glVertex2f(-0.94f, -0.16f);
    glEnd();

    glColor3f(0.02f,0.30f,0.04f);
    drawCircle_fabliha(-0.95f, -0.27f, 0.09f);

    glColor3f(0.03f,0.40f,0.05f);
    drawCircle_fabliha(-0.86f, -0.27f, 0.10f);

    glColor3f(0.02f,0.35f,0.04f);
    drawCircle_fabliha(-0.91f, -0.19f, 0.10f);


    // LEFT TREE
    glColor3f(0.30f,0.12f,0.03f);
    glBegin(GL_QUADS);
    glVertex2f(-0.82f, -0.41f);
    glVertex2f(-0.80f, -0.41f);
    glVertex2f(-0.80f, -0.23f);
    glVertex2f(-0.82f, -0.23f);
    glEnd();

    glColor3f(0.02f,0.30f,0.04f);
    drawCircle_fabliha(-0.835f, -0.31f, 0.07f);

    glColor3f(0.03f,0.40f,0.05f);
    drawCircle_fabliha(-0.76f, -0.31f, 0.075f);

    glColor3f(0.02f,0.35f,0.04f);
    drawCircle_fabliha(-0.80f, -0.25f, 0.075f);


    // RIGHT TREE 1
    glColor3f(0.30f,0.12f,0.03f);
    glBegin(GL_QUADS);
    glVertex2f(0.80f, -0.41f);
    glVertex2f(0.82f, -0.41f);
    glVertex2f(0.82f, -0.23f);
    glVertex2f(0.80f, -0.23f);
    glEnd();

    glColor3f(0.02f,0.30f,0.04f);
    drawCircle_fabliha(0.765f, -0.31f, 0.07f);

    glColor3f(0.03f,0.40f,0.05f);
    drawCircle_fabliha(0.84f, -0.31f, 0.075f);

    glColor3f(0.02f,0.35f,0.04f);
    drawCircle_fabliha(0.80f, -0.25f, 0.075f);


    // RIGHT TREE 2
    glColor3f(0.30f,0.12f,0.03f);
    glBegin(GL_QUADS);
    glVertex2f(0.90f, -0.41f);
    glVertex2f(0.94f, -0.41f);
    glVertex2f(0.94f, -0.16f);
    glVertex2f(0.90f, -0.16f);
    glEnd();

    glColor3f(0.02f,0.30f,0.04f);
    drawCircle_fabliha(0.89f, -0.27f, 0.09f);

    glColor3f(0.03f,0.40f,0.05f);
    drawCircle_fabliha(0.98f, -0.27f, 0.10f);

    glColor3f(0.02f,0.35f,0.04f);
    drawCircle_fabliha(0.93f, -0.19f, 0.10f);

    // ROAD
    glColor3f(0.05f,0.05f,0.07f);
    glBegin(GL_QUADS);
    glVertex2f(-1.00f, -0.75f);
    glVertex2f(1.00f, -0.75f);
    glVertex2f(1.00f, -1.00f);
    glVertex2f(-1.00f, -1.00f);
    glEnd();

    // ROAD BORDER
    glColor3f(0.75f,0.75f,0.78f);
    glBegin(GL_QUADS);
    glVertex2f(-1.00f, -0.75f);
    glVertex2f(1.00f, -0.75f);
    glVertex2f(1.00f, -0.73f);
    glVertex2f(-1.00f, -0.73f);

    glVertex2f(-1.00f, -0.99f);
    glVertex2f(1.00f, -0.99f);
    glVertex2f(1.00f, -0.97f);
    glVertex2f(-1.00f, -0.97f);
    glEnd();

    //Traffic Signal
    // SIGNAL POLE
    glColor3f(0.08f, 0.08f, 0.08f);
    glBegin(GL_QUADS);
    glVertex2f(0.57f, -0.73f);
    glVertex2f(0.59f, -0.73f);
    glVertex2f(0.59f, -0.57f);
    glVertex2f(0.57f, -0.57f);
    glEnd();

    // SIGNAL BOX
    glColor3f(0.05f, 0.05f, 0.05f);
    glBegin(GL_QUADS);
    glVertex2f(0.54f, -0.57f);
    glVertex2f(0.62f, -0.57f);
    glVertex2f(0.62f, -0.45f);
    glVertex2f(0.54f, -0.45f);
    glEnd();

    // RED LIGHT
    if(trafficRed_fabliha)
    {
        glColor3f(1.0f, 0.0f, 0.0f);
    }
    else
    {
        glColor3f(0.25f, 0.0f, 0.0f);
    }
    drawCircle_fabliha(0.58f, -0.485f, 0.022f);

    // GREEN LIGHT
    if(trafficGreen_fabliha)
    {
        glColor3f(0.0f, 1.0f, 0.0f);
    }
    else
    {
        glColor3f(0.0f, 0.25f, 0.0f);
    }
    drawCircle_fabliha(0.58f, -0.535f, 0.022f);

    // ROAD MIDDLE DASH LINE
    glColor3f(0.90f,0.90f,0.90f);
    glBegin(GL_QUADS);
    glVertex2f(-0.98f, -0.88f);
    glVertex2f(-0.90f, -0.88f);
    glVertex2f(-0.90f, -0.87f);
    glVertex2f(-0.98f, -0.87f);

    glVertex2f(-0.82f, -0.88f);
    glVertex2f(-0.74f, -0.88f);
    glVertex2f(-0.74f, -0.87f);
    glVertex2f(-0.82f, -0.87f);

    glVertex2f(-0.66f, -0.88f);
    glVertex2f(-0.58f, -0.88f);
    glVertex2f(-0.58f, -0.87f);
    glVertex2f(-0.66f, -0.87f);

    glVertex2f(-0.50f, -0.88f);
    glVertex2f(-0.42f, -0.88f);
    glVertex2f(-0.42f, -0.87f);
    glVertex2f(-0.50f, -0.87f);

    glVertex2f(-0.34f, -0.88f);
    glVertex2f(-0.26f, -0.88f);
    glVertex2f(-0.26f, -0.87f);
    glVertex2f(-0.34f, -0.87f);

    glVertex2f(-0.18f, -0.88f);
    glVertex2f(-0.10f, -0.88f);
    glVertex2f(-0.10f, -0.87f);
    glVertex2f(-0.18f, -0.87f);

    glVertex2f(-0.02f, -0.88f);
    glVertex2f(0.06f, -0.88f);
    glVertex2f(0.06f, -0.87f);
    glVertex2f(-0.02f, -0.87f);

    glVertex2f(0.14f, -0.88f);
    glVertex2f(0.22f, -0.88f);
    glVertex2f(0.22f, -0.87f);
    glVertex2f(0.14f, -0.87f);

    glVertex2f(0.30f, -0.88f);
    glVertex2f(0.38f, -0.88f);
    glVertex2f(0.38f, -0.87f);
    glVertex2f(0.30f, -0.87f);

    glVertex2f(0.46f, -0.88f);
    glVertex2f(0.54f, -0.88f);
    glVertex2f(0.54f, -0.87f);
    glVertex2f(0.46f, -0.87f);

    glVertex2f(0.62f, -0.88f);
    glVertex2f(0.70f, -0.88f);
    glVertex2f(0.70f, -0.87f);
    glVertex2f(0.62f, -0.87f);

    glVertex2f(0.78f, -0.88f);
    glVertex2f(0.86f, -0.88f);
    glVertex2f(0.86f, -0.87f);
    glVertex2f(0.78f, -0.87f);

    glVertex2f(0.94f, -0.88f);
    glVertex2f(1.00f, -0.88f);
    glVertex2f(1.00f, -0.87f);
    glVertex2f(0.94f, -0.87f);
    glEnd();

    // LAMP POST LEFT
    glColor3f(0.12f,0.12f,0.14f);
    glBegin(GL_QUADS);
    glVertex2f(-0.91f, -0.73f);
    glVertex2f(-0.89f, -0.73f);
    glVertex2f(-0.89f, -0.50f);
    glVertex2f(-0.91f, -0.50f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.94f, -0.50f);
    glVertex2f(-0.85f, -0.50f);
    glVertex2f(-0.87f, -0.48f);
    glVertex2f(-0.93f, -0.48f);
    glEnd();

    glColor3f(1.0f,0.85f,0.30f);
    drawCircle_fabliha(-0.897f, -0.49f, 0.025f);

    // LAMP POST RIGHT
    glColor3f(0.12f,0.12f,0.14f);
    glBegin(GL_QUADS);
    glVertex2f(0.89f, -0.73f);
    glVertex2f(0.91f, -0.73f);
    glVertex2f(0.91f, -0.50f);
    glVertex2f(0.89f, -0.50f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.85f, -0.50f);
    glVertex2f(0.94f, -0.50f);
    glVertex2f(0.93f, -0.48f);
    glVertex2f(0.87f, -0.48f);
    glEnd();

    glColor3f(1.0f,0.85f,0.30f);
    drawCircle_fabliha(0.897f, -0.49f, 0.025f);

    // CAR 01-Red- ROAD
    glPushMatrix();
    glTranslatef(car1RedPosition_fabliha, 0.0f, 0.0f);
    glColor3f(0.90f,0.08f,0.04f);
    glBegin(GL_QUADS);
    glVertex2f(0.09f,-0.84f);
    glVertex2f(0.27f,-0.84f);
    glVertex2f(0.27f,-0.80f);
    glVertex2f(0.09f,-0.80f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.12f,-0.80f);
    glVertex2f(0.24f,-0.80f);
    glVertex2f(0.22f,-0.75f);
    glVertex2f(0.14f,-0.75f);
    glEnd();

    glColor3f(0.75f,0.90f,0.95f);
    glBegin(GL_QUADS);
    glVertex2f(0.14f,-0.79f);
    glVertex2f(0.17f,-0.79f);
    glVertex2f(0.17f,-0.76f);
    glVertex2f(0.14f,-0.76f);

    glVertex2f(0.19f,-0.79f);
    glVertex2f(0.22f,-0.79f);
    glVertex2f(0.22f,-0.76f);
    glVertex2f(0.19f,-0.76f);
    glEnd();

    glColor3f(0.03f,0.03f,0.03f);
    drawCircle_fabliha(0.125f, -0.845f, 0.022f);
    drawCircle_fabliha(0.235f, -0.845f, 0.022f);

    glColor3f(0.20f,0.20f,0.20f);
    drawCircle_fabliha(0.125f, -0.845f, 0.009f);
    drawCircle_fabliha(0.235f, -0.845f, 0.009f);
    glPopMatrix();

    // CAR 02-Green  - ROAD
    glPushMatrix();
    glTranslatef(car2GreenPosition_fabliha, 0.0f, 0.0f);
    glColor3f(0.05f,0.55f,0.18f);
    glBegin(GL_QUADS);
    glVertex2f(0.79f,-0.93f);
    glVertex2f(0.97f,-0.93f);
    glVertex2f(0.97f,-0.89f);
    glVertex2f(0.79f,-0.89f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.82f,-0.89f);
    glVertex2f(0.94f,-0.89f);
    glVertex2f(0.92f,-0.84f);
    glVertex2f(0.84f,-0.84f);
    glEnd();

    glColor3f(0.75f,0.90f,0.95f);
    glBegin(GL_QUADS);
    glVertex2f(0.84f,-0.88f);
    glVertex2f(0.87f,-0.88f);
    glVertex2f(0.87f,-0.85f);
    glVertex2f(0.84f,-0.85f);

    glVertex2f(0.89f,-0.88f);
    glVertex2f(0.92f,-0.88f);
    glVertex2f(0.92f,-0.85f);
    glVertex2f(0.89f,-0.85f);
    glEnd();

    glColor3f(0.03f,0.03f,0.03f);
    drawCircle_fabliha(0.825f, -0.935f, 0.022f);
    drawCircle_fabliha(0.935f, -0.935f, 0.022f);

    glColor3f(0.20f,0.20f,0.20f);
    drawCircle_fabliha(0.825f, -0.935f, 0.009f);
    drawCircle_fabliha(0.935f, -0.935f, 0.009f);
    glPopMatrix();

    glFlush();
}
void sound_fabliha()
{
    PlaySound("Vehicles Passing  Sound Effects.wav", NULL, SND_ASYNC|SND_FILENAME);
}


//------------------------------------------------Fabliha End------------------------------------------//

//------------------------------------------------Alvi Start------------------------------------------//

void display_alvi()
{
    glClear(GL_COLOR_BUFFER_BIT);

    // =======SKY=======

    glBegin(GL_QUADS);

    glColor3f(0.01f, 0.02f, 0.07f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f( 1.0f, 1.0f);

    glColor3f(0.06f, 0.12f, 0.20f);
    glVertex2f( 1.0f, -0.10f);
    glVertex2f(-1.0f, -0.10f);

    glEnd();

    // =======STARS=======

    glPushMatrix();

    glTranslatef(0.0f, 0.75f, 0.0f);

    glScalef(starScale_alvi, starScale_alvi, 1.0f);

    glTranslatef(0.0f, -0.75f, 0.0f);

    glPointSize(2.0f);

    glColor3f(0.8f, 0.8f, 0.8f);

    glBegin(GL_POINTS);

    glVertex2f(-0.90f, 0.88f);
    glVertex2f(-0.75f, 0.75f);
    glVertex2f(-0.60f, 0.90f);
    glVertex2f(-0.45f, 0.80f);
    glVertex2f(-0.30f, 0.92f);
    glVertex2f(-0.15f, 0.82f);

    glVertex2f(0.10f, 0.90f);
    glVertex2f(0.25f, 0.82f);
    glVertex2f(0.40f, 0.91f);
    glVertex2f(0.70f, 0.88f);
    glVertex2f(0.88f, 0.80f);

    glVertex2f(-0.85f, 0.65f);
    glVertex2f(-0.55f, 0.68f);
    glVertex2f(0.60f, 0.67f);
    glVertex2f(0.82f, 0.63f);

    glEnd();
    glPopMatrix();

// =======MOON=======

    glColor3f(1.0f, 0.93f, 0.68f);
    drawCircle_alvi(moonX_alvi, moonY_alvi, 0.095f);

    glColor3f(0.025f, 0.045f, 0.095f);
    drawCircle_alvi(moonX_alvi + 0.050f, moonY_alvi + 0.012f, 0.088f);

// =======CLOUDS=======
// Left cloud - moves left to right
    glPushMatrix();

    glTranslatef(cloud1X_alvi, 0.0f, 0.0f);

    drawCloud_alvi(-0.50f, 0.75f);

    glPopMatrix();

// Right cloud - moves right to left
    glPushMatrix();

    glTranslatef(cloud2X_alvi, 0.0f, 0.0f);

    drawCloud_alvi(0.50f, 0.85f);

    glPopMatrix();

    // =======RED CIRCLE=======

    glColor3f(0.75f, 0.03f, 0.06f);

    drawCircle_alvi(0.0f, 0.31f, 0.22f);

    // =======LEFT TREES=======

    //Left Tree 1 trunk

    glColor3f(0.20f, 0.08f, 0.03f);

    glBegin(GL_QUADS);

    glVertex2f(-0.94f, -0.10f);
    glVertex2f(-0.90f, -0.10f);
    glVertex2f(-0.90f, 0.17f);
    glVertex2f(-0.94f, 0.17f);

    glEnd();

    glPushMatrix();

    glTranslatef(treeMove_alvi, 0.0f, 0.0f);

    // Left Tree 1 leaves

    glColor3f(0.01f, 0.25f, 0.05f);

    drawCircle_alvi(-0.92f, 0.28f, 0.12f);
    drawCircle_alvi(-0.99f, 0.23f, 0.10f);
    drawCircle_alvi(-0.84f, 0.23f, 0.10f);
    drawCircle_alvi(-0.97f, 0.34f, 0.09f);
    drawCircle_alvi(-0.87f, 0.35f, 0.09f);
    glPopMatrix();

    //Left Tree 2 trunk

    glColor3f(0.20f, 0.08f, 0.03f);

    glBegin(GL_QUADS);

    glVertex2f(-0.78f, -0.10f);
    glVertex2f(-0.74f, -0.10f);
    glVertex2f(-0.74f, 0.15f);
    glVertex2f(-0.78f, 0.15f);

    glEnd();

    glPushMatrix();

    glTranslatef(treeMove_alvi, 0.0f, 0.0f);
    // Left Tree 2 leaves

    glColor3f(0.01f, 0.28f, 0.05f);

    drawCircle_alvi(-0.76f, 0.26f, 0.11f);
    drawCircle_alvi(-0.83f, 0.22f, 0.09f);
    drawCircle_alvi(-0.69f, 0.22f, 0.09f);
    drawCircle_alvi(-0.80f, 0.32f, 0.085f);
    drawCircle_alvi(-0.72f, 0.32f, 0.085f);
    glPopMatrix();

    //Left Tree 3 trunk

    glColor3f(0.20f, 0.08f, 0.03f);

    glBegin(GL_QUADS);

    glVertex2f(-0.62f, -0.10f);
    glVertex2f(-0.58f, -0.10f);
    glVertex2f(-0.58f, 0.12f);
    glVertex2f(-0.62f, 0.12f);

    glEnd();

    glPushMatrix();

    glTranslatef(treeMove_alvi, 0.0f, 0.0f);

    // Left Tree 3 leaves

    glColor3f(0.01f, 0.25f, 0.05f);

    drawCircle_alvi(-0.60f, 0.23f, 0.10f);
    drawCircle_alvi(-0.66f, 0.19f, 0.08f);
    drawCircle_alvi(-0.54f, 0.19f, 0.08f);
    drawCircle_alvi(-0.63f, 0.28f, 0.075f);
    drawCircle_alvi(-0.57f, 0.28f, 0.075f);
    glPopMatrix();

    // =======RIGHT TREES=======

    //Right Tree 1 trunk

    glColor3f(0.20f, 0.08f, 0.03f);

    glBegin(GL_QUADS);

    glVertex2f(0.58f, -0.10f);
    glVertex2f(0.62f, -0.10f);
    glVertex2f(0.62f, 0.12f);
    glVertex2f(0.58f, 0.12f);

    glEnd();

    glPushMatrix();

    glTranslatef(treeMove_alvi, 0.0f, 0.0f);

    // Right Tree 1 leaves

    glColor3f(0.01f, 0.25f, 0.05f);

    drawCircle_alvi(0.60f, 0.23f, 0.10f);
    drawCircle_alvi(0.54f, 0.19f, 0.08f);
    drawCircle_alvi(0.66f, 0.19f, 0.08f);
    drawCircle_alvi(0.57f, 0.28f, 0.075f);
    drawCircle_alvi(0.63f, 0.28f, 0.075f);
    glPopMatrix();

    // Right Tree 2 trunk

    glColor3f(0.20f, 0.08f, 0.03f);

    glBegin(GL_QUADS);

    glVertex2f(0.74f, -0.10f);
    glVertex2f(0.78f, -0.10f);
    glVertex2f(0.78f, 0.15f);
    glVertex2f(0.74f, 0.15f);

    glEnd();

    glPushMatrix();

    glTranslatef(treeMove_alvi, 0.0f, 0.0f);
    // Right Tree 2 leaves

    glColor3f(0.01f, 0.28f, 0.05f);

    drawCircle_alvi(0.76f, 0.26f, 0.11f);
    drawCircle_alvi(0.69f, 0.22f, 0.09f);
    drawCircle_alvi(0.83f, 0.22f, 0.09f);
    drawCircle_alvi(0.72f, 0.32f, 0.085f);
    drawCircle_alvi(0.80f, 0.32f, 0.085f);
    glPopMatrix();

    // Right Tree 3 trunk

    glColor3f(0.20f, 0.08f, 0.03f);

    glBegin(GL_QUADS);

    glVertex2f(0.90f, -0.10f);
    glVertex2f(0.94f, -0.10f);
    glVertex2f(0.94f, 0.17f);
    glVertex2f(0.90f, 0.17f);

    glEnd();

    glPushMatrix();

    glTranslatef(treeMove_alvi, 0.0f, 0.0f);
    // Right Tree 3 leaves

    glColor3f(0.01f, 0.25f, 0.05f);

    drawCircle_alvi(0.92f, 0.28f, 0.12f);
    drawCircle_alvi(0.84f, 0.23f, 0.10f);
    drawCircle_alvi(0.99f, 0.23f, 0.10f);
    drawCircle_alvi(0.87f, 0.35f, 0.09f);
    drawCircle_alvi(0.97f, 0.34f, 0.09f);
    glPopMatrix();

    // =======SHAHEED MINAR=======

    glColor3f(0.95f, 0.95f, 0.92f);

    // =======MAIN LEFT PILLAR=======

    glBegin(GL_QUADS);

    glVertex2f(-0.18f, 0.68f);
    glVertex2f(-0.14f, 0.68f);
    glVertex2f(-0.14f, -0.03f);
    glVertex2f(-0.18f, -0.03f);

    glEnd();

    // =======MAIN RIGHT PILLAR=======

    glBegin(GL_QUADS);

    glVertex2f(0.14f, 0.68f);
    glVertex2f(0.18f, 0.68f);
    glVertex2f(0.18f, -0.03f);
    glVertex2f(0.14f, -0.03f);

    glEnd();

    // =======MAIN TOP BAR=======

    glBegin(GL_QUADS);

    glVertex2f(-0.18f, 0.68f);
    glVertex2f( 0.18f, 0.68f);
    glVertex2f( 0.18f, 0.63f);
    glVertex2f(-0.18f, 0.63f);

    glEnd();

    // =======MIDDLE BAR 1=======

    glBegin(GL_QUADS);

    glVertex2f(-0.055f, 0.65f);
    glVertex2f(-0.025f, 0.65f);
    glVertex2f(-0.025f, -0.03f);
    glVertex2f(-0.055f, -0.03f);

    glEnd();

    // =======MIDDLE BAR 2=======

    glBegin(GL_QUADS);

    glVertex2f(0.025f, 0.65f);
    glVertex2f(0.055f, 0.65f);
    glVertex2f(0.055f, -0.03f);
    glVertex2f(0.025f, -0.03f);

    glEnd();

    // =======LEFT MIDDLE STRUCTURE=======

    glBegin(GL_QUADS);

    glVertex2f(-0.40f, 0.45f);
    glVertex2f(-0.36f, 0.45f);
    glVertex2f(-0.36f, -0.03f);
    glVertex2f(-0.40f, -0.03f);

    glEnd();

    glBegin(GL_QUADS);

    glVertex2f(-0.30f, 0.45f);
    glVertex2f(-0.26f, 0.45f);
    glVertex2f(-0.26f, -0.03f);
    glVertex2f(-0.30f, -0.03f);

    glEnd();

    glBegin(GL_QUADS);

    glVertex2f(-0.40f, 0.45f);
    glVertex2f(-0.26f, 0.45f);
    glVertex2f(-0.26f, 0.41f);
    glVertex2f(-0.40f, 0.41f);

    glEnd();

    // =======FAR LEFT STRUCTURE=======

    glBegin(GL_QUADS);

    glVertex2f(-0.57f, 0.27f);
    glVertex2f(-0.53f, 0.27f);
    glVertex2f(-0.53f, -0.03f);
    glVertex2f(-0.57f, -0.03f);

    glEnd();

    glBegin(GL_QUADS);

    glVertex2f(-0.49f, 0.27f);
    glVertex2f(-0.45f, 0.27f);
    glVertex2f(-0.45f, -0.03f);
    glVertex2f(-0.49f, -0.03f);

    glEnd();

    glBegin(GL_QUADS);

    glVertex2f(-0.57f, 0.27f);
    glVertex2f(-0.45f, 0.27f);
    glVertex2f(-0.45f, 0.23f);
    glVertex2f(-0.57f, 0.23f);

    glEnd();

    // =======RIGHT MIDDLE STRUCTURE=======

    glBegin(GL_QUADS);

    glVertex2f(0.26f, 0.45f);
    glVertex2f(0.30f, 0.45f);
    glVertex2f(0.30f, -0.03f);
    glVertex2f(0.26f, -0.03f);

    glEnd();

    glBegin(GL_QUADS);

    glVertex2f(0.36f, 0.45f);
    glVertex2f(0.40f, 0.45f);
    glVertex2f(0.40f, -0.03f);
    glVertex2f(0.36f, -0.03f);

    glEnd();

    glBegin(GL_QUADS);

    glVertex2f(0.26f, 0.45f);
    glVertex2f(0.40f, 0.45f);
    glVertex2f(0.40f, 0.41f);
    glVertex2f(0.26f, 0.41f);

    glEnd();

    // =======FAR RIGHT STRUCTURE=======

    glBegin(GL_QUADS);

    glVertex2f(0.45f, 0.27f);
    glVertex2f(0.49f, 0.27f);
    glVertex2f(0.49f, -0.03f);
    glVertex2f(0.45f, -0.03f);

    glEnd();

    glBegin(GL_QUADS);

    glVertex2f(0.53f, 0.27f);
    glVertex2f(0.57f, 0.27f);
    glVertex2f(0.57f, -0.03f);
    glVertex2f(0.53f, -0.03f);

    glEnd();

    glBegin(GL_QUADS);

    glVertex2f(0.45f, 0.27f);
    glVertex2f(0.57f, 0.27f);
    glVertex2f(0.57f, 0.23f);
    glVertex2f(0.45f, 0.23f);

    glEnd();

    // =======SHAHEED MINAR BASE 1=======

    glColor3f(0.40f, 0.17f, 0.12f);

    glBegin(GL_QUADS);

    glVertex2f(-0.65f, -0.03f);
    glVertex2f( 0.65f, -0.03f);
    glVertex2f( 0.72f, -0.11f);
    glVertex2f(-0.72f, -0.11f);

    glEnd();

    // =======BASE 2=======

    glColor3f(0.35f, 0.13f, 0.09f);

    glBegin(GL_QUADS);

    glVertex2f(-0.72f, -0.11f);
    glVertex2f( 0.72f, -0.11f);
    glVertex2f( 0.78f, -0.17f);
    glVertex2f(-0.78f, -0.17f);

    glEnd();

    // =======BASE 3=======

    glColor3f(0.42f, 0.17f, 0.12f);

    glBegin(GL_QUADS);

    glVertex2f(-0.78f, -0.17f);
    glVertex2f( 0.78f, -0.17f);
    glVertex2f( 0.85f, -0.24f);
    glVertex2f(-0.85f, -0.24f);

    glEnd();

    // =======BASE 4=======

    glColor3f(0.32f, 0.12f, 0.09f);

    glBegin(GL_QUADS);

    glVertex2f(-0.85f, -0.24f);
    glVertex2f( 0.85f, -0.24f);
    glVertex2f( 0.92f, -0.31f);
    glVertex2f(-0.92f, -0.31f);

    glEnd();

    // =======BRICK DESIGN ON SHAHEED MINAR STAIRS=======

    glColor3f(0.18f, 0.07f, 0.05f);
    glLineWidth(1.5f);

    // BASE 1
    glBegin(GL_LINES);

    glVertex2f(-0.685f, -0.07f);
    glVertex2f(0.685f, -0.07f);

    glVertex2f(-0.52f, -0.03f);
    glVertex2f(-0.52f, -0.07f);
    glVertex2f(-0.26f, -0.03f);
    glVertex2f(-0.26f, -0.07f);
    glVertex2f(0.00f, -0.03f);
    glVertex2f(0.00f, -0.07f);
    glVertex2f(0.26f, -0.03f);
    glVertex2f(0.26f, -0.07f);
    glVertex2f(0.52f, -0.03f);
    glVertex2f(0.52f, -0.07f);

    glVertex2f(-0.40f, -0.07f);
    glVertex2f(-0.40f, -0.11f);
    glVertex2f(-0.13f, -0.07f);
    glVertex2f(-0.13f, -0.11f);
    glVertex2f(0.13f, -0.07f);
    glVertex2f(0.13f, -0.11f);
    glVertex2f(0.40f, -0.07f);
    glVertex2f(0.40f, -0.11f);

    glEnd();

    // BASE 2
    glBegin(GL_LINES);

    glVertex2f(-0.75f, -0.14f);
    glVertex2f(0.75f, -0.14f);

    glVertex2f(-0.55f, -0.11f);
    glVertex2f(-0.55f, -0.14f);
    glVertex2f(-0.28f, -0.11f);
    glVertex2f(-0.28f, -0.14f);
    glVertex2f(0.00f, -0.11f);
    glVertex2f(0.00f, -0.14f);
    glVertex2f(0.28f, -0.11f);
    glVertex2f(0.28f, -0.14f);
    glVertex2f(0.55f, -0.11f);
    glVertex2f(0.55f, -0.14f);

    glVertex2f(-0.42f, -0.14f);
    glVertex2f(-0.42f, -0.17f);
    glVertex2f(-0.14f, -0.14f);
    glVertex2f(-0.14f, -0.17f);
    glVertex2f(0.14f, -0.14f);
    glVertex2f(0.14f, -0.17f);
    glVertex2f(0.42f, -0.14f);
    glVertex2f(0.42f, -0.17f);

    glEnd();

    // BASE 3
    glBegin(GL_LINES);

    glVertex2f(-0.815f, -0.205f);
    glVertex2f(0.815f, -0.205f);

    glVertex2f(-0.60f, -0.17f);
    glVertex2f(-0.60f, -0.205f);
    glVertex2f(-0.30f, -0.17f);
    glVertex2f(-0.30f, -0.205f);
    glVertex2f(0.00f, -0.17f);
    glVertex2f(0.00f, -0.205f);
    glVertex2f(0.30f, -0.17f);
    glVertex2f(0.30f, -0.205f);
    glVertex2f(0.60f, -0.17f);
    glVertex2f(0.60f, -0.205f);

    glVertex2f(-0.45f, -0.205f);
    glVertex2f(-0.45f, -0.24f);
    glVertex2f(-0.15f, -0.205f);
    glVertex2f(-0.15f, -0.24f);
    glVertex2f(0.15f, -0.205f);
    glVertex2f(0.15f, -0.24f);
    glVertex2f(0.45f, -0.205f);
    glVertex2f(0.45f, -0.24f);

    glEnd();

    // BASE 4
    glBegin(GL_LINES);

    glVertex2f(-0.885f, -0.275f);
    glVertex2f(0.885f, -0.275f);

    glVertex2f(-0.65f, -0.24f);
    glVertex2f(-0.65f, -0.275f);
    glVertex2f(-0.32f, -0.24f);
    glVertex2f(-0.32f, -0.275f);
    glVertex2f(0.00f, -0.24f);
    glVertex2f(0.00f, -0.275f);
    glVertex2f(0.32f, -0.24f);
    glVertex2f(0.32f, -0.275f);
    glVertex2f(0.65f, -0.24f);
    glVertex2f(0.65f, -0.275f);

    glVertex2f(-0.48f, -0.275f);
    glVertex2f(-0.48f, -0.31f);
    glVertex2f(-0.16f, -0.275f);
    glVertex2f(-0.16f, -0.31f);
    glVertex2f(0.16f, -0.275f);
    glVertex2f(0.16f, -0.31f);
    glVertex2f(0.48f, -0.275f);
    glVertex2f(0.48f, -0.31f);

    glEnd();

    glLineWidth(1.0f);

    // =======FRONT GROUND=======

    glColor3f(0.30f, 0.16f, 0.12f);

    glBegin(GL_QUADS);

    glVertex2f(-1.0f, -0.31f);
    glVertex2f( 1.0f, -0.31f);
    glVertex2f( 1.0f, -0.50f);
    glVertex2f(-1.0f, -0.50f);

    glEnd();

    // =======LEFT LAMP 1=======

    glColor3f(0.05f, 0.05f, 0.04f);

    glBegin(GL_QUADS);

    glVertex2f(-0.90f, -0.45f);
    glVertex2f(-0.88f, -0.45f);
    glVertex2f(-0.88f, -0.12f);
    glVertex2f(-0.90f, -0.12f);

    glEnd();

    glColor3f(0.12f, 0.12f, 0.05f);

    glBegin(GL_POLYGON);

    glVertex2f(-0.93f, -0.12f);
    glVertex2f(-0.91f, -0.06f);
    glVertex2f(-0.87f, -0.06f);
    glVertex2f(-0.85f, -0.12f);

    glEnd();

    if(lampOn_alvi)
        glColor3f(1.0f, 0.9f, 0.3f);   // on
    else
        glColor3f(0.08f, 0.08f, 0.05f); // off

    glBegin(GL_QUADS);

    glVertex2f(-0.91f, -0.10f);
    glVertex2f(-0.87f, -0.10f);
    glVertex2f(-0.87f, -0.07f);
    glVertex2f(-0.91f, -0.07f);

    glEnd();

    // =======LEFT LAMP 2=======

    glColor3f(0.05f, 0.05f, 0.04f);

    glBegin(GL_QUADS);

    glVertex2f(-0.70f, -0.38f);
    glVertex2f(-0.685f, -0.38f);
    glVertex2f(-0.685f, -0.12f);
    glVertex2f(-0.70f, -0.12f);

    glEnd();

    glColor3f(0.12f, 0.12f, 0.05f);

    glBegin(GL_POLYGON);

    glVertex2f(-0.725f, -0.12f);
    glVertex2f(-0.71f, -0.07f);
    glVertex2f(-0.675f, -0.07f);
    glVertex2f(-0.66f, -0.12f);

    glEnd();

    if(lampOn_alvi)
        glColor3f(1.0f, 0.9f, 0.3f);   // on
    else
        glColor3f(0.08f, 0.08f, 0.05f); // off

    glBegin(GL_QUADS);

    glVertex2f(-0.71f, -0.105f);
    glVertex2f(-0.675f, -0.105f);
    glVertex2f(-0.675f, -0.075f);
    glVertex2f(-0.71f, -0.075f);

    glEnd();

    // =======RIGHT LAMP 1=======

    glColor3f(0.05f, 0.05f, 0.04f);

    glBegin(GL_QUADS);

    glVertex2f(0.88f, -0.45f);
    glVertex2f(0.90f, -0.45f);
    glVertex2f(0.90f, -0.12f);
    glVertex2f(0.88f, -0.12f);

    glEnd();

    glColor3f(0.12f, 0.12f, 0.05f);

    glBegin(GL_POLYGON);

    glVertex2f(0.85f, -0.12f);
    glVertex2f(0.87f, -0.06f);
    glVertex2f(0.91f, -0.06f);
    glVertex2f(0.93f, -0.12f);

    glEnd();

    if(lampOn_alvi)
        glColor3f(1.0f, 0.9f, 0.3f);   // on
    else
        glColor3f(0.08f, 0.08f, 0.05f); // off

    glBegin(GL_QUADS);

    glVertex2f(0.87f, -0.10f);
    glVertex2f(0.91f, -0.10f);
    glVertex2f(0.91f, -0.07f);
    glVertex2f(0.87f, -0.07f);

    glEnd();

    // =======RIGHT LAMP 2=======

    glColor3f(0.05f, 0.05f, 0.04f);

    glBegin(GL_QUADS);

    glVertex2f(0.685f, -0.38f);
    glVertex2f(0.70f, -0.38f);
    glVertex2f(0.70f, -0.12f);
    glVertex2f(0.685f, -0.12f);

    glEnd();

    glColor3f(0.12f, 0.12f, 0.05f);

    glBegin(GL_POLYGON);

    glVertex2f(0.66f, -0.12f);
    glVertex2f(0.675f, -0.07f);
    glVertex2f(0.71f, -0.07f);
    glVertex2f(0.725f, -0.12f);

    glEnd();

    if(lampOn_alvi)
        glColor3f(1.0f, 0.9f, 0.3f);   // on
    else
        glColor3f(0.08f, 0.08f, 0.05f); // off

    glBegin(GL_QUADS);

    glVertex2f(0.675f, -0.105f);
    glVertex2f(0.71f, -0.105f);
    glVertex2f(0.71f, -0.075f);
    glVertex2f(0.675f, -0.075f);

    glEnd();

    // =======ROAD=======

    glColor3f(0.06f, 0.07f, 0.07f);

    glBegin(GL_QUADS);

    glVertex2f(-1.0f, -0.55f);
    glVertex2f( 1.0f, -0.55f);
    glVertex2f( 1.0f, -1.0f);
    glVertex2f(-1.0f, -1.0f);

    glEnd();

    //=======ROAD BORDER=======

    glBegin(GL_QUADS);

    glColor3f(0.9f, 0.9f, 0.9f);

    glVertex2f(-1.0f, -0.55f);
    glVertex2f(-0.80f, -0.55f);
    glVertex2f(-0.80f, -0.51f);
    glVertex2f(-1.0f, -0.51f);

    glColor3f(0.05f, 0.05f, 0.05f);

    glVertex2f(-0.80f, -0.55f);
    glVertex2f(-0.60f, -0.55f);
    glVertex2f(-0.60f, -0.51f);
    glVertex2f(-0.80f, -0.51f);

    glColor3f(0.9f, 0.9f, 0.9f);

    glVertex2f(-0.60f, -0.55f);
    glVertex2f(-0.40f, -0.55f);
    glVertex2f(-0.40f, -0.51f);
    glVertex2f(-0.60f, -0.51f);

    glColor3f(0.05f, 0.05f, 0.05f);

    glVertex2f(-0.40f, -0.55f);
    glVertex2f(-0.20f, -0.55f);
    glVertex2f(-0.20f, -0.51f);
    glVertex2f(-0.40f, -0.51f);

    glColor3f(0.9f, 0.9f, 0.9f);

    glVertex2f(-0.20f, -0.55f);
    glVertex2f(0.00f, -0.55f);
    glVertex2f(0.00f, -0.51f);
    glVertex2f(-0.20f, -0.51f);

    glColor3f(0.05f, 0.05f, 0.05f);

    glVertex2f(0.00f, -0.55f);
    glVertex2f(0.20f, -0.55f);
    glVertex2f(0.20f, -0.51f);
    glVertex2f(0.00f, -0.51f);

    glColor3f(0.9f, 0.9f, 0.9f);

    glVertex2f(0.20f, -0.55f);
    glVertex2f(0.40f, -0.55f);
    glVertex2f(0.40f, -0.51f);
    glVertex2f(0.20f, -0.51f);

    glColor3f(0.05f, 0.05f, 0.05f);

    glVertex2f(0.40f, -0.55f);
    glVertex2f(0.60f, -0.55f);
    glVertex2f(0.60f, -0.51f);
    glVertex2f(0.40f, -0.51f);

    glColor3f(0.9f, 0.9f, 0.9f);

    glVertex2f(0.60f, -0.55f);
    glVertex2f(0.80f, -0.55f);
    glVertex2f(0.80f, -0.51f);
    glVertex2f(0.60f, -0.51f);

    glColor3f(0.05f, 0.05f, 0.05f);

    glVertex2f(0.80f, -0.55f);
    glVertex2f(1.00f, -0.55f);
    glVertex2f(1.00f, -0.51f);
    glVertex2f(0.80f, -0.51f);

    glEnd();

    // =======ROAD MIDDLE LINES=======

    glColor3f(0.9f, 0.9f, 0.9f);

    glBegin(GL_QUADS);

    glVertex2f(-0.9f, -0.77f);
    glVertex2f(-0.7f, -0.77f);
    glVertex2f(-0.7f, -0.75f);
    glVertex2f(-0.9f, -0.75f);

    glVertex2f(-0.5f, -0.77f);
    glVertex2f(-0.3f, -0.77f);
    glVertex2f(-0.3f, -0.75f);
    glVertex2f(-0.5f, -0.75f);

    glVertex2f(-0.1f, -0.77f);
    glVertex2f(0.1f, -0.77f);
    glVertex2f(0.1f, -0.75f);
    glVertex2f(-0.1f, -0.75f);

    glVertex2f(0.3f, -0.77f);
    glVertex2f(0.5f, -0.77f);
    glVertex2f(0.5f, -0.75f);
    glVertex2f(0.3f, -0.75f);

    glVertex2f(0.7f, -0.77f);
    glVertex2f(0.9f, -0.77f);
    glVertex2f(0.9f, -0.75f);
    glVertex2f(0.7f, -0.75f);

    glEnd();

    // =======TRAFFIC LIGHT=======

    drawTrafficLight_alvi();


    // CAR 1 - Green


    glPushMatrix();
    glTranslatef(position_alvi, 0.0f, 0.0f);
    glTranslatef(-0.73f, -0.885f, 0.0f);
    glScalef(1.25f, 1.25f, 1.0f);
    glTranslatef(0.73f, 0.885f, 0.0f);

    // Car body
    glColor3f(0.02f, 0.40f, 0.20f);
    glBegin(GL_QUADS);
    glVertex2f(-0.88f, -0.94f);
    glVertex2f(-0.58f, -0.94f);
    glVertex2f(-0.58f, -0.86f);
    glVertex2f(-0.88f, -0.86f);
    glEnd();

    // Car top
    glColor3f(0.02f, 0.40f, 0.20f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.85f, -0.86f);
    glVertex2f(-0.80f, -0.80f);
    glVertex2f(-0.67f, -0.80f);
    glVertex2f(-0.62f, -0.86f);
    glEnd();

    // Left window
    glColor3f(0.45f, 0.70f, 0.75f);
    glBegin(GL_QUADS);
    glVertex2f(-0.79f, -0.85f);
    glVertex2f(-0.72f, -0.85f);
    glVertex2f(-0.72f, -0.81f);
    glVertex2f(-0.76f, -0.81f);
    glEnd();

    // Right window
    glBegin(GL_QUADS);
    glVertex2f(-0.70f, -0.85f);
    glVertex2f(-0.63f, -0.85f);
    glVertex2f(-0.66f, -0.81f);
    glVertex2f(-0.70f, -0.81f);
    glEnd();

    // Window divider
    glColor3f(0.08f, 0.15f, 0.10f);
    glBegin(GL_QUADS);
    glVertex2f(-0.72f, -0.85f);
    glVertex2f(-0.70f, -0.85f);
    glVertex2f(-0.70f, -0.81f);
    glVertex2f(-0.72f, -0.81f);
    glEnd();

    // Front headlight - right
    glColor3f(1.0f, 0.95f, 0.65f);
    glBegin(GL_QUADS);
    glVertex2f(-0.58f, -0.92f);
    glVertex2f(-0.56f, -0.92f);
    glVertex2f(-0.56f, -0.88f);
    glVertex2f(-0.58f, -0.88f);
    glEnd();

    // Headlight beam for night mood
    glColor3f(0.55f, 0.50f, 0.20f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.56f, -0.90f);
    glVertex2f(-0.25f, -0.84f);
    glVertex2f(-0.25f, -0.96f);
    glEnd();

    // Back light - left
    glColor3f(0.80f, 0.02f, 0.02f);
    glBegin(GL_QUADS);
    glVertex2f(-0.90f, -0.92f);
    glVertex2f(-0.88f, -0.92f);
    glVertex2f(-0.88f, -0.88f);
    glVertex2f(-0.90f, -0.88f);
    glEnd();

    // Car wheels
    glColor3f(0.02f, 0.02f, 0.02f);
    drawCircle_alvi(-0.81f, -0.94f, 0.032f);
    drawCircle_alvi(-0.65f, -0.94f, 0.032f);

    // Wheel center
    glColor3f(0.25f, 0.25f, 0.25f);
    drawCircle_alvi(-0.81f, -0.94f, 0.012f);
    drawCircle_alvi(-0.65f, -0.94f, 0.012f);

    glPopMatrix();

    // CAR 2 - BLUE

    glPushMatrix();
    glTranslatef(position2_alvi, 0.05f, 0.0f);
    glTranslatef(0.60f, -0.665f, 0.0f);
    glScalef(1.25f, 1.25f, 1.0f);
    glTranslatef(-0.60f, 0.665f, 0.0f);

    // Car body
    glColor3f(0.00f, 0.24f, 0.78f);
    glBegin(GL_QUADS);
    glVertex2f(0.45f, -0.72f);
    glVertex2f(0.75f, -0.72f);
    glVertex2f(0.75f, -0.64f);
    glVertex2f(0.45f, -0.64f);
    glEnd();

    // Car top
    glColor3f(0.04f, 0.16f, 0.62f);
    glBegin(GL_POLYGON);
    glVertex2f(0.49f, -0.64f);
    glVertex2f(0.54f, -0.58f);
    glVertex2f(0.67f, -0.58f);
    glVertex2f(0.72f, -0.64f);
    glEnd();

    // Left window
    glColor3f(0.45f, 0.70f, 0.75f);
    glBegin(GL_QUADS);
    glVertex2f(0.53f, -0.63f);
    glVertex2f(0.60f, -0.63f);
    glVertex2f(0.60f, -0.59f);
    glVertex2f(0.55f, -0.59f);
    glEnd();

    // Right window
    glBegin(GL_QUADS);
    glVertex2f(0.61f, -0.63f);
    glVertex2f(0.69f, -0.63f);
    glVertex2f(0.67f, -0.59f);
    glVertex2f(0.61f, -0.59f);
    glEnd();

    // Window divider
    glColor3f(0.08f, 0.15f, 0.10f);
    glBegin(GL_QUADS);
    glVertex2f(0.60f, -0.63f);
    glVertex2f(0.61f, -0.63f);
    glVertex2f(0.61f, -0.59f);
    glVertex2f(0.60f, -0.59f);
    glEnd();

    // Front headlight - left because this car moves left
    glColor3f(1.0f, 0.95f, 0.65f);
    glBegin(GL_QUADS);
    glVertex2f(0.43f, -0.70f);
    glVertex2f(0.45f, -0.70f);
    glVertex2f(0.45f, -0.66f);
    glVertex2f(0.43f, -0.66f);
    glEnd();

    // Headlight beam for night mood
    glColor3f(0.55f, 0.50f, 0.20f);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.43f, -0.68f);
    glVertex2f(0.12f, -0.62f);
    glVertex2f(0.12f, -0.74f);
    glEnd();

    // Back light - right
    glColor3f(0.80f, 0.02f, 0.02f);
    glBegin(GL_QUADS);
    glVertex2f(0.75f, -0.70f);
    glVertex2f(0.77f, -0.70f);
    glVertex2f(0.77f, -0.66f);
    glVertex2f(0.75f, -0.66f);
    glEnd();

    // Car wheels
    glColor3f(0.02f, 0.02f, 0.02f);
    drawCircle_alvi(0.51f, -0.72f, 0.032f);
    drawCircle_alvi(0.69f, -0.72f, 0.032f);

    // Wheel center
    glColor3f(0.25f, 0.25f, 0.25f);
    drawCircle_alvi(0.51f, -0.72f, 0.012f);
    drawCircle_alvi(0.69f, -0.72f, 0.012f);

    glPopMatrix();

    glFlush();
}

void sound_alvi()
{
    soundOn_alvi = true;
    PlaySound("Shahid_Minar.wav", NULL, SND_ASYNC | SND_FILENAME | SND_LOOP);
}



//------------------------------------------------Alvi End------------------------------------------//

//------------------------------------------------Siam Start------------------------------------------//
void display_siam()
{
    glClear(GL_COLOR_BUFFER_BIT);

    // ======= SKY =======
    glBegin(GL_QUADS);
    glColor3f(0.01f, 0.02f, 0.07f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f( 1.0f, 1.0f);

    glColor3f(0.06f, 0.12f, 0.20f);
    glVertex2f( 1.0f, -0.10f);
    glVertex2f(-1.0f, -0.10f);
    glEnd();

    // ======= STARS =======
    glPushMatrix();
    glTranslatef(0.0f, 0.75f, 0.0f);
    glScalef(starScale_siam, starScale_siam, 1.0f);
    glTranslatef(0.0f, -0.75f, 0.0f);

    glPointSize(2.0f);
    glColor3f(0.8f, 0.8f, 0.8f);
    glBegin(GL_POINTS);
    glVertex2f(-0.90f, 0.88f);
    glVertex2f(-0.75f, 0.75f);
    glVertex2f(-0.60f, 0.90f);
    glVertex2f(-0.45f, 0.80f);
    glVertex2f(-0.30f, 0.92f);
    glVertex2f(-0.15f, 0.82f);
    glVertex2f( 0.10f, 0.90f);
    glVertex2f( 0.25f, 0.82f);
    glVertex2f( 0.40f, 0.91f);
    glVertex2f( 0.70f, 0.88f);
    glVertex2f( 0.88f, 0.80f);
    glVertex2f(-0.85f, 0.65f);
    glVertex2f(-0.55f, 0.68f);
    glVertex2f( 0.60f, 0.67f);
    glVertex2f( 0.82f, 0.63f);
    glEnd();
    glPopMatrix();

    // ======= MOON =======
    drawMoon_siam(moonX_siam, moonY_siam, 0.095f);

    // ======= CLOUDS =======
    glPushMatrix();
    glTranslatef(cloud1X_siam, 0.0f, 0.0f);
    drawCloud_siam(-0.50f, 0.75f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(cloud2X_siam, 0.0f, 0.0f);
    drawCloud_siam(0.50f, 0.85f);
    glPopMatrix();

    // ======= GRASS AND COURTYARD =======
    glColor3f(0.03f, 0.24f, 0.08f);
    glBegin(GL_QUADS);
    glVertex2f(-1.0f, -0.10f);
    glVertex2f( 1.0f, -0.10f);
    glVertex2f( 1.0f, -0.55f);
    glVertex2f(-1.0f, -0.55f);
    glEnd();

    glColor3f(0.30f, 0.30f, 0.29f);
    glBegin(GL_QUADS);
    glVertex2f(-0.38f, -0.55f);
    glVertex2f( 0.38f, -0.55f);
    glVertex2f( 0.16f, -0.10f);
    glVertex2f(-0.16f, -0.10f);
    glEnd();

    glColor3f(0.52f, 0.52f, 0.50f);
    glLineWidth(1.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.28f, -0.55f);
    glVertex2f(-0.10f, -0.10f);
    glVertex2f(-0.14f, -0.55f);
    glVertex2f(-0.05f, -0.10f);
    glVertex2f( 0.00f, -0.55f);
    glVertex2f( 0.00f, -0.10f);
    glVertex2f( 0.14f, -0.55f);
    glVertex2f( 0.05f, -0.10f);
    glVertex2f( 0.28f, -0.55f);
    glVertex2f( 0.10f, -0.10f);
    glVertex2f(-0.34f, -0.48f);
    glVertex2f( 0.34f, -0.48f);
    glVertex2f(-0.30f, -0.38f);
    glVertex2f( 0.30f, -0.38f);
    glVertex2f(-0.25f, -0.27f);
    glVertex2f( 0.25f, -0.27f);
    glVertex2f(-0.20f, -0.17f);
    glVertex2f( 0.20f, -0.17f);
    glEnd();

    // ======= LEFT TREE =======
    glColor3f(0.20f, 0.08f, 0.03f);
    glBegin(GL_QUADS);
    glVertex2f(-0.92f, -0.10f);
    glVertex2f(-0.88f, -0.10f);
    glVertex2f(-0.88f,  0.17f);
    glVertex2f(-0.92f,  0.17f);
    glEnd();

    glPushMatrix();
    glTranslatef(treeMove_siam, 0.0f, 0.0f);
    glColor3f(0.01f, 0.25f, 0.05f);
    drawCircle_siam(-0.90f, 0.28f, 0.12f);
    drawCircle_siam(-0.98f, 0.23f, 0.10f);
    drawCircle_siam(-0.82f, 0.23f, 0.10f);
    drawCircle_siam(-0.95f, 0.35f, 0.09f);
    drawCircle_siam(-0.85f, 0.35f, 0.09f);
    glPopMatrix();

    // ======= RIGHT TREE =======
    glColor3f(0.20f, 0.08f, 0.03f);
    glBegin(GL_QUADS);
    glVertex2f(0.88f, -0.10f);
    glVertex2f(0.92f, -0.10f);
    glVertex2f(0.92f,  0.17f);
    glVertex2f(0.88f,  0.17f);
    glEnd();

    glPushMatrix();
    glTranslatef(treeMove_siam, 0.0f, 0.0f);
    glColor3f(0.01f, 0.25f, 0.05f);
    drawCircle_siam(0.90f, 0.28f, 0.12f);
    drawCircle_siam(0.82f, 0.23f, 0.10f);
    drawCircle_siam(0.98f, 0.23f, 0.10f);
    drawCircle_siam(0.85f, 0.35f, 0.09f);
    drawCircle_siam(0.95f, 0.35f, 0.09f);
    glPopMatrix();

    // ======= BAITUL MUKARRAM MOSQUE =======

    // long side wings
    glColor3f(0.61f, 0.58f, 0.51f);
    glBegin(GL_QUADS);
    glVertex2f(-0.82f, -0.10f);
    glVertex2f( 0.82f, -0.10f);
    glVertex2f( 0.82f,  0.15f);
    glVertex2f(-0.82f,  0.15f);
    glEnd();

    // side-wing shadow strip
    glColor3f(0.49f, 0.47f, 0.42f);
    glBegin(GL_QUADS);
    glVertex2f(-0.82f, 0.115f);
    glVertex2f( 0.82f, 0.115f);
    glVertex2f( 0.82f, 0.130f);
    glVertex2f(-0.82f, 0.130f);
    glEnd();

    // side-wing main roof strip
    glColor3f(0.73f, 0.69f, 0.60f);
    glBegin(GL_QUADS);
    glVertex2f(-0.84f, 0.130f);
    glVertex2f( 0.84f, 0.130f);
    glVertex2f( 0.84f, 0.165f);
    glVertex2f(-0.84f, 0.165f);
    glEnd();

    // narrow upper highlight strip
    glColor3f(0.88f, 0.84f, 0.76f);
    glBegin(GL_QUADS);
    glVertex2f(-0.85f, 0.165f);
    glVertex2f( 0.85f, 0.165f);
    glVertex2f( 0.85f, 0.178f);
    glVertex2f(-0.85f, 0.178f);
    glEnd();

    // side windows - left wing
    for(int i = 0; i < 6; i++)
    {
        float x = -0.78f + i * 0.065f;

        glColor3f(0.19f, 0.16f, 0.12f);
        glBegin(GL_POLYGON);
        glVertex2f(x, -0.08f);
        glVertex2f(x + 0.040f, -0.08f);
        glVertex2f(x + 0.040f, 0.045f);
        glVertex2f(x + 0.020f, 0.090f);
        glVertex2f(x, 0.045f);
        glEnd();

        glColor3f(0.94f, 0.62f, 0.20f);
        glBegin(GL_POLYGON);
        glVertex2f(x + 0.007f, -0.07f);
        glVertex2f(x + 0.033f, -0.07f);
        glVertex2f(x + 0.033f, 0.030f);
        glVertex2f(x + 0.020f, 0.065f);
        glVertex2f(x + 0.007f, 0.030f);
        glEnd();
    }

    // side windows - right wing
    for(int i = 0; i < 6; i++)
    {
        float x = 0.43f + i * 0.065f;

        glColor3f(0.19f, 0.16f, 0.12f);
        glBegin(GL_POLYGON);
        glVertex2f(x, -0.08f);
        glVertex2f(x + 0.040f, -0.08f);
        glVertex2f(x + 0.040f, 0.045f);
        glVertex2f(x + 0.020f, 0.090f);
        glVertex2f(x, 0.045f);
        glEnd();

        glColor3f(0.94f, 0.62f, 0.20f);
        glBegin(GL_POLYGON);
        glVertex2f(x + 0.007f, -0.07f);
        glVertex2f(x + 0.033f, -0.07f);
        glVertex2f(x + 0.033f, 0.030f);
        glVertex2f(x + 0.020f, 0.065f);
        glVertex2f(x + 0.007f, 0.030f);
        glEnd();
    }

    // main central lower block
    glColor3f(0.66f, 0.62f, 0.54f);
    glBegin(GL_QUADS);
    glVertex2f(-0.42f, -0.10f);
    glVertex2f( 0.42f, -0.10f);
    glVertex2f( 0.42f,  0.35f);
    glVertex2f(-0.42f,  0.35f);
    glEnd();

    // lower block side edge shading
    glColor3f(0.56f, 0.53f, 0.47f);
    glBegin(GL_QUADS);
    glVertex2f(-0.42f, -0.10f);
    glVertex2f(-0.395f, -0.10f);
    glVertex2f(-0.395f,  0.35f);
    glVertex2f(-0.42f,  0.35f);
    glEnd();

    glColor3f(0.74f, 0.70f, 0.62f);
    glBegin(GL_QUADS);
    glVertex2f(0.395f, -0.10f);
    glVertex2f(0.42f, -0.10f);
    glVertex2f(0.42f,  0.35f);
    glVertex2f(0.395f,  0.35f);
    glEnd();

    // central-block ledge
    glColor3f(0.78f, 0.74f, 0.65f);
    glBegin(GL_QUADS);
    glVertex2f(-0.44f, 0.325f);
    glVertex2f( 0.44f, 0.325f);
    glVertex2f( 0.44f, 0.355f);
    glVertex2f(-0.44f, 0.355f);
    glEnd();

    // upper cubic block front face
    glColor3f(0.76f, 0.73f, 0.67f);
    glBegin(GL_QUADS);
    glVertex2f(-0.32f, 0.35f);
    glVertex2f( 0.32f, 0.35f);
    glVertex2f( 0.32f, 0.62f);
    glVertex2f(-0.32f, 0.62f);
    glEnd();

    // cubic-block left shadow and right highlight
    glColor3f(0.63f, 0.61f, 0.57f);
    glBegin(GL_QUADS);
    glVertex2f(-0.32f, 0.35f);
    glVertex2f(-0.295f, 0.35f);
    glVertex2f(-0.295f, 0.62f);
    glVertex2f(-0.32f, 0.62f);
    glEnd();

    glColor3f(0.84f, 0.81f, 0.75f);
    glBegin(GL_QUADS);
    glVertex2f(0.295f, 0.35f);
    glVertex2f(0.32f, 0.35f);
    glVertex2f(0.32f, 0.62f);
    glVertex2f(0.295f, 0.62f);
    glEnd();

    // cubic-block horizontal stone divisions
    glColor3f(0.60f, 0.58f, 0.54f);
    glLineWidth(1.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.295f, 0.435f);
    glVertex2f(0.295f, 0.435f);
    glVertex2f(-0.295f, 0.515f);
    glVertex2f(0.295f, 0.515f);
    glVertex2f(-0.295f, 0.585f);
    glVertex2f(0.295f, 0.585f);
    glEnd();

    // cubic-block vertical stone divisions
    glBegin(GL_LINES);
    glVertex2f(-0.150f, 0.35f);
    glVertex2f(-0.150f, 0.62f);
    glVertex2f( 0.000f, 0.35f);
    glVertex2f( 0.000f, 0.62f);
    glVertex2f( 0.150f, 0.35f);
    glVertex2f( 0.150f, 0.62f);
    glEnd();

    // dark strip below the upper roof cap
    glColor3f(0.42f, 0.41f, 0.39f);
    glBegin(GL_QUADS);
    glVertex2f(-0.32f, 0.600f);
    glVertex2f( 0.32f, 0.600f);
    glVertex2f( 0.32f, 0.620f);
    glVertex2f(-0.32f, 0.620f);
    glEnd();

    // broad cream strip
    glColor3f(0.82f, 0.79f, 0.72f);
    glBegin(GL_QUADS);
    glVertex2f(-0.335f, 0.620f);
    glVertex2f( 0.335f, 0.620f);
    glVertex2f( 0.335f, 0.650f);
    glVertex2f(-0.335f, 0.650f);
    glEnd();

    // bright top strip
    glColor3f(0.92f, 0.89f, 0.82f);
    glBegin(GL_QUADS);
    glVertex2f(-0.350f, 0.650f);
    glVertex2f( 0.350f, 0.650f);
    glVertex2f( 0.350f, 0.675f);
    glVertex2f(-0.350f, 0.675f);
    glEnd();

    // main central doorway
    glColor3f(0.09f, 0.10f, 0.11f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.080f, -0.10f);
    glVertex2f( 0.080f, -0.10f);
    glVertex2f( 0.080f,  0.155f);
    glVertex2f( 0.000f,  0.285f);
    glVertex2f(-0.080f,  0.155f);
    glEnd();

    glColor3f(0.22f, 0.19f, 0.14f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.058f, -0.10f);
    glVertex2f( 0.058f, -0.10f);
    glVertex2f( 0.058f,  0.110f);
    glVertex2f( 0.000f,  0.225f);
    glVertex2f(-0.058f,  0.110f);
    glEnd();

    // main gate light
    glColor3f(0.95f, 0.58f, 0.18f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.045f, -0.10f);
    glVertex2f( 0.045f, -0.10f);
    glVertex2f( 0.045f,  0.075f);
    glVertex2f( 0.000f,  0.165f);
    glVertex2f(-0.045f,  0.075f);
    glEnd();

    // double door
    glColor3f(0.72f, 0.43f, 0.12f);
    glBegin(GL_QUADS);
    glVertex2f(-0.036f, -0.09f);
    glVertex2f( 0.036f, -0.09f);
    glVertex2f( 0.036f,  0.058f);
    glVertex2f(-0.036f,  0.058f);
    glEnd();

    glColor3f(0.94f, 0.67f, 0.24f);
    glBegin(GL_QUADS);
    glVertex2f(-0.002f, -0.09f);
    glVertex2f( 0.002f, -0.09f);
    glVertex2f( 0.002f,  0.058f);
    glVertex2f(-0.002f,  0.058f);
    glEnd();
    drawCircle_siam(0.024f, -0.015f, 0.004f);

    // three aligned entrance arches on each side
    for(int i = 0; i < 3; i++)
    {
        float leftX = -0.385f + i * 0.105f;
        float rightX = 0.100f + i * 0.105f;

        glColor3f(0.10f, 0.11f, 0.12f);
        glBegin(GL_POLYGON);
        glVertex2f(leftX, -0.10f);
        glVertex2f(leftX + 0.075f, -0.10f);
        glVertex2f(leftX + 0.075f, 0.095f);
        glVertex2f(leftX + 0.0375f, 0.200f);
        glVertex2f(leftX, 0.095f);
        glEnd();

        glBegin(GL_POLYGON);
        glVertex2f(rightX, -0.10f);
        glVertex2f(rightX + 0.075f, -0.10f);
        glVertex2f(rightX + 0.075f, 0.095f);
        glVertex2f(rightX + 0.0375f, 0.200f);
        glVertex2f(rightX, 0.095f);
        glEnd();

        glColor3f(0.28f, 0.24f, 0.18f);
        glBegin(GL_POLYGON);
        glVertex2f(leftX + 0.012f, -0.10f);
        glVertex2f(leftX + 0.063f, -0.10f);
        glVertex2f(leftX + 0.063f, 0.065f);
        glVertex2f(leftX + 0.0375f, 0.145f);
        glVertex2f(leftX + 0.012f, 0.065f);
        glEnd();

        glBegin(GL_POLYGON);
        glVertex2f(rightX + 0.012f, -0.10f);
        glVertex2f(rightX + 0.063f, -0.10f);
        glVertex2f(rightX + 0.063f, 0.065f);
        glVertex2f(rightX + 0.0375f, 0.145f);
        glVertex2f(rightX + 0.012f, 0.065f);
        glEnd();
    }

    // eight aligned entrance columns with separate bases and caps
    for(int i = 0; i < 4; i++)
    {
        float leftX = -0.410f + i * 0.105f;
        float rightX = 0.074f + i * 0.105f;

        glColor3f(0.69f, 0.65f, 0.57f);
        glBegin(GL_QUADS);
        glVertex2f(leftX, -0.10f);
        glVertex2f(leftX + 0.016f, -0.10f);
        glVertex2f(leftX + 0.016f, 0.215f);
        glVertex2f(leftX, 0.215f);

        glVertex2f(rightX, -0.10f);
        glVertex2f(rightX + 0.016f, -0.10f);
        glVertex2f(rightX + 0.016f, 0.215f);
        glVertex2f(rightX, 0.215f);
        glEnd();

        // column bases
        glColor3f(0.58f, 0.55f, 0.49f);
        glBegin(GL_QUADS);
        glVertex2f(leftX - 0.004f, -0.10f);
        glVertex2f(leftX + 0.020f, -0.10f);
        glVertex2f(leftX + 0.020f, -0.075f);
        glVertex2f(leftX - 0.004f, -0.075f);

        glVertex2f(rightX - 0.004f, -0.10f);
        glVertex2f(rightX + 0.020f, -0.10f);
        glVertex2f(rightX + 0.020f, -0.075f);
        glVertex2f(rightX - 0.004f, -0.075f);
        glEnd();

        // column caps
        glColor3f(0.82f, 0.78f, 0.68f);
        glBegin(GL_QUADS);
        glVertex2f(leftX - 0.004f, 0.205f);
        glVertex2f(leftX + 0.020f, 0.205f);
        glVertex2f(leftX + 0.020f, 0.230f);
        glVertex2f(leftX - 0.004f, 0.230f);

        glVertex2f(rightX - 0.004f, 0.205f);
        glVertex2f(rightX + 0.020f, 0.205f);
        glVertex2f(rightX + 0.020f, 0.230f);
        glVertex2f(rightX - 0.004f, 0.230f);
        glEnd();
    }

    // ======= MINARET =======
    glColor3f(0.68f, 0.64f, 0.55f);
    glBegin(GL_QUADS);
    glVertex2f(0.58f, -0.10f);
    glVertex2f(0.72f, -0.10f);
    glVertex2f(0.72f,  0.12f);
    glVertex2f(0.58f,  0.12f);
    glEnd();

    glColor3f(0.78f, 0.74f, 0.64f);
    glBegin(GL_QUADS);
    glVertex2f(0.61f, 0.05f);
    glVertex2f(0.68f, 0.05f);
    glVertex2f(0.68f, 0.70f);
    glVertex2f(0.61f, 0.70f);
    glEnd();

    glColor3f(0.91f, 0.84f, 0.67f);
    glBegin(GL_QUADS);
    glVertex2f(0.62f, 0.08f);
    glVertex2f(0.63f, 0.08f);
    glVertex2f(0.63f, 0.67f);
    glVertex2f(0.62f, 0.67f);

    glVertex2f(0.66f, 0.08f);
    glVertex2f(0.67f, 0.08f);
    glVertex2f(0.67f, 0.67f);
    glVertex2f(0.66f, 0.67f);
    glEnd();

    // minaret narrow openings
    glColor3f(0.10f, 0.12f, 0.14f);
    glBegin(GL_POLYGON);
    glVertex2f(0.635f, 0.34f);
    glVertex2f(0.645f, 0.34f);
    glVertex2f(0.645f, 0.56f);
    glVertex2f(0.640f, 0.61f);
    glVertex2f(0.635f, 0.56f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.650f, 0.34f);
    glVertex2f(0.660f, 0.34f);
    glVertex2f(0.660f, 0.56f);
    glVertex2f(0.655f, 0.61f);
    glVertex2f(0.650f, 0.56f);
    glEnd();

    // balcony
    glColor3f(0.93f, 0.84f, 0.65f);
    glBegin(GL_QUADS);
    glVertex2f(0.59f, 0.68f);
    glVertex2f(0.70f, 0.68f);
    glVertex2f(0.70f, 0.72f);
    glVertex2f(0.59f, 0.72f);
    glEnd();

    // upper lantern
    glColor3f(0.83f, 0.77f, 0.63f);
    glBegin(GL_QUADS);
    glVertex2f(0.62f, 0.72f);
    glVertex2f(0.67f, 0.72f);
    glVertex2f(0.67f, 0.82f);
    glVertex2f(0.62f, 0.82f);
    glEnd();

    // minaret dome
    glColor3f(0.88f, 0.82f, 0.70f);
    glBegin(GL_POLYGON);
    glVertex2f(0.615f, 0.82f);
    glVertex2f(0.675f, 0.82f);
    glVertex2f(0.667f, 0.86f);
    glVertex2f(0.645f, 0.89f);
    glVertex2f(0.623f, 0.86f);
    glEnd();

    glColor3f(0.96f, 0.78f, 0.31f);
    glBegin(GL_QUADS);
    glVertex2f(0.642f, 0.89f);
    glVertex2f(0.648f, 0.89f);
    glVertex2f(0.648f, 0.95f);
    glVertex2f(0.642f, 0.95f);
    glEnd();
    drawCircle_siam(0.645f, 0.955f, 0.006f);

    // ======= ROAD LAMPS =======

    // left lamp 1
    glColor3f(0.05f, 0.05f, 0.04f);
    glBegin(GL_QUADS);
    glVertex2f(-0.78f, -0.52f);
    glVertex2f(-0.76f, -0.52f);
    glVertex2f(-0.76f, -0.22f);
    glVertex2f(-0.78f, -0.22f);
    glEnd();

    glColor3f(0.12f, 0.12f, 0.05f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.81f, -0.22f);
    glVertex2f(-0.79f, -0.16f);
    glVertex2f(-0.75f, -0.16f);
    glVertex2f(-0.73f, -0.22f);
    glEnd();

    if(lampOn_siam)
        glColor3f(1.0f, 0.9f, 0.3f);
    else
        glColor3f(0.08f, 0.08f, 0.05f);

    drawCircle_siam(-0.77f, -0.185f, 0.027f);

    // left lamp 2
    glColor3f(0.05f, 0.05f, 0.04f);
    glBegin(GL_QUADS);
    glVertex2f(-0.55f, -0.52f);
    glVertex2f(-0.535f, -0.52f);
    glVertex2f(-0.535f, -0.25f);
    glVertex2f(-0.55f, -0.25f);
    glEnd();

    glColor3f(0.12f, 0.12f, 0.05f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.575f, -0.25f);
    glVertex2f(-0.56f, -0.20f);
    glVertex2f(-0.525f, -0.20f);
    glVertex2f(-0.51f, -0.25f);
    glEnd();

    if(lampOn_siam)
        glColor3f(1.0f, 0.9f, 0.3f);
    else
        glColor3f(0.08f, 0.08f, 0.05f);

    drawCircle_siam(-0.5425f, -0.22f, 0.024f);

    // right lamp 1
    glColor3f(0.05f, 0.05f, 0.04f);
    glBegin(GL_QUADS);
    glVertex2f(0.535f, -0.52f);
    glVertex2f(0.55f, -0.52f);
    glVertex2f(0.55f, -0.25f);
    glVertex2f(0.535f, -0.25f);
    glEnd();

    glColor3f(0.12f, 0.12f, 0.05f);
    glBegin(GL_POLYGON);
    glVertex2f(0.51f, -0.25f);
    glVertex2f(0.525f, -0.20f);
    glVertex2f(0.56f, -0.20f);
    glVertex2f(0.575f, -0.25f);
    glEnd();

    if(lampOn_siam)
        glColor3f(1.0f, 0.9f, 0.3f);
    else
        glColor3f(0.08f, 0.08f, 0.05f);

    drawCircle_siam(0.5425f, -0.22f, 0.024f);

    // right lamp 2
    glColor3f(0.05f, 0.05f, 0.04f);
    glBegin(GL_QUADS);
    glVertex2f(0.76f, -0.52f);
    glVertex2f(0.78f, -0.52f);
    glVertex2f(0.78f, -0.22f);
    glVertex2f(0.76f, -0.22f);
    glEnd();

    glColor3f(0.12f, 0.12f, 0.05f);
    glBegin(GL_POLYGON);
    glVertex2f(0.73f, -0.22f);
    glVertex2f(0.75f, -0.16f);
    glVertex2f(0.79f, -0.16f);
    glVertex2f(0.81f, -0.22f);
    glEnd();

    if(lampOn_siam)
        glColor3f(1.0f, 0.9f, 0.3f);
    else
        glColor3f(0.08f, 0.08f, 0.05f);

    drawCircle_siam(0.77f, -0.185f, 0.027f);

    // ======= ROAD =======
    glColor3f(0.06f, 0.07f, 0.07f);
    glBegin(GL_QUADS);
    glVertex2f(-1.0f, -0.55f);
    glVertex2f( 1.0f, -0.55f);
    glVertex2f( 1.0f, -1.0f);
    glVertex2f(-1.0f, -1.0f);
    glEnd();

    // road border
    glBegin(GL_QUADS);
    for(int i = 0; i < 10; i++)
    {
        float x1 = -1.0f + i * 0.20f;
        float x2 = x1 + 0.20f;

        if(i % 2 == 0)
            glColor3f(0.9f, 0.9f, 0.9f);
        else
            glColor3f(0.05f, 0.05f, 0.05f);

        glVertex2f(x1, -0.55f);
        glVertex2f(x2, -0.55f);
        glVertex2f(x2, -0.51f);
        glVertex2f(x1, -0.51f);
    }
    glEnd();

    // road middle lines
    glColor3f(0.9f, 0.9f, 0.9f);
    glBegin(GL_QUADS);
    glVertex2f(-0.90f, -0.77f);
    glVertex2f(-0.70f, -0.77f);
    glVertex2f(-0.70f, -0.75f);
    glVertex2f(-0.90f, -0.75f);
    glVertex2f(-0.50f, -0.77f);
    glVertex2f(-0.30f, -0.77f);
    glVertex2f(-0.30f, -0.75f);
    glVertex2f(-0.50f, -0.75f);
    glVertex2f(-0.10f, -0.77f);
    glVertex2f( 0.10f, -0.77f);
    glVertex2f( 0.10f, -0.75f);
    glVertex2f(-0.10f, -0.75f);
    glVertex2f( 0.30f, -0.77f);
    glVertex2f( 0.50f, -0.77f);
    glVertex2f( 0.50f, -0.75f);
    glVertex2f( 0.30f, -0.75f);
    glVertex2f( 0.70f, -0.77f);
    glVertex2f( 0.90f, -0.77f);
    glVertex2f( 0.90f, -0.75f);
    glVertex2f( 0.70f, -0.75f);
    glEnd();

    // Both stop markings use exactly the same x position.
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.645f, -0.96f);
    glVertex2f(0.655f, -0.96f);
    glVertex2f(0.655f, -0.79f);
    glVertex2f(0.645f, -0.79f);

    glVertex2f(0.645f, -0.73f);
    glVertex2f(0.655f, -0.73f);
    glVertex2f(0.655f, -0.56f);
    glVertex2f(0.645f, -0.56f);
    glEnd();

    // traffic light
    drawTrafficLight_siam();

    // ======= CAR 1 - GREEN =======
    glPushMatrix();
    glTranslatef(position_siam, 0.0f, 0.0f);
    glTranslatef(-0.73f, -0.885f, 0.0f);
    glScalef(1.25f, 1.25f, 1.0f);
    glTranslatef(0.73f, 0.885f, 0.0f);

    // car body
    glColor3f(0.02f, 0.40f, 0.20f);
    glBegin(GL_QUADS);
    glVertex2f(-0.88f, -0.94f);
    glVertex2f(-0.58f, -0.94f);
    glVertex2f(-0.58f, -0.86f);
    glVertex2f(-0.88f, -0.86f);
    glEnd();

    // car top
    glColor3f(0.02f, 0.40f, 0.20f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.85f, -0.86f);
    glVertex2f(-0.80f, -0.80f);
    glVertex2f(-0.67f, -0.80f);
    glVertex2f(-0.62f, -0.86f);
    glEnd();

    // left window
    glColor3f(0.45f, 0.70f, 0.75f);
    glBegin(GL_QUADS);
    glVertex2f(-0.79f, -0.85f);
    glVertex2f(-0.72f, -0.85f);
    glVertex2f(-0.72f, -0.81f);
    glVertex2f(-0.76f, -0.81f);
    glEnd();

    // right window
    glBegin(GL_QUADS);
    glVertex2f(-0.70f, -0.85f);
    glVertex2f(-0.63f, -0.85f);
    glVertex2f(-0.66f, -0.81f);
    glVertex2f(-0.70f, -0.81f);
    glEnd();

    // window divider
    glColor3f(0.08f, 0.15f, 0.10f);
    glBegin(GL_QUADS);
    glVertex2f(-0.72f, -0.85f);
    glVertex2f(-0.70f, -0.85f);
    glVertex2f(-0.70f, -0.81f);
    glVertex2f(-0.72f, -0.81f);
    glEnd();

    // front headlight
    glColor3f(1.0f, 0.95f, 0.65f);
    glBegin(GL_QUADS);
    glVertex2f(-0.58f, -0.92f);
    glVertex2f(-0.56f, -0.92f);
    glVertex2f(-0.56f, -0.88f);
    glVertex2f(-0.58f, -0.88f);
    glEnd();

    // headlight beam
    glColor3f(0.55f, 0.50f, 0.20f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.56f, -0.90f);
    glVertex2f(-0.25f, -0.84f);
    glVertex2f(-0.25f, -0.96f);
    glEnd();

    // back light
    glColor3f(0.80f, 0.02f, 0.02f);
    glBegin(GL_QUADS);
    glVertex2f(-0.90f, -0.92f);
    glVertex2f(-0.88f, -0.92f);
    glVertex2f(-0.88f, -0.88f);
    glVertex2f(-0.90f, -0.88f);
    glEnd();

    // car wheels
    glColor3f(0.02f, 0.02f, 0.02f);
    drawCircle_siam(-0.81f, -0.94f, 0.032f);
    drawCircle_siam(-0.65f, -0.94f, 0.032f);

    // wheel centre
    glColor3f(0.25f, 0.25f, 0.25f);
    drawCircle_siam(-0.81f, -0.94f, 0.012f);
    drawCircle_siam(-0.65f, -0.94f, 0.012f);
    glPopMatrix();

    // ======= CAR 2 - BLUE =======
    glPushMatrix();
    glTranslatef(position2_siam, 0.05f, 0.0f);
    glTranslatef(0.60f, -0.665f, 0.0f);
    glScalef(1.25f, 1.25f, 1.0f);
    glTranslatef(-0.60f, 0.665f, 0.0f);

    // car body
    glColor3f(0.00f, 0.24f, 0.78f);
    glBegin(GL_QUADS);
    glVertex2f(0.45f, -0.72f);
    glVertex2f(0.75f, -0.72f);
    glVertex2f(0.75f, -0.64f);
    glVertex2f(0.45f, -0.64f);
    glEnd();

    // car top
    glColor3f(0.04f, 0.16f, 0.62f);
    glBegin(GL_POLYGON);
    glVertex2f(0.49f, -0.64f);
    glVertex2f(0.54f, -0.58f);
    glVertex2f(0.67f, -0.58f);
    glVertex2f(0.72f, -0.64f);
    glEnd();

    // left window
    glColor3f(0.45f, 0.70f, 0.75f);
    glBegin(GL_QUADS);
    glVertex2f(0.53f, -0.63f);
    glVertex2f(0.60f, -0.63f);
    glVertex2f(0.60f, -0.59f);
    glVertex2f(0.55f, -0.59f);
    glEnd();

    // right window
    glBegin(GL_QUADS);
    glVertex2f(0.61f, -0.63f);
    glVertex2f(0.69f, -0.63f);
    glVertex2f(0.67f, -0.59f);
    glVertex2f(0.61f, -0.59f);
    glEnd();

    // window divider
    glColor3f(0.08f, 0.15f, 0.10f);
    glBegin(GL_QUADS);
    glVertex2f(0.60f, -0.63f);
    glVertex2f(0.61f, -0.63f);
    glVertex2f(0.61f, -0.59f);
    glVertex2f(0.60f, -0.59f);
    glEnd();

    // front headlight - left
    glColor3f(1.0f, 0.95f, 0.65f);
    glBegin(GL_QUADS);
    glVertex2f(0.43f, -0.70f);
    glVertex2f(0.45f, -0.70f);
    glVertex2f(0.45f, -0.66f);
    glVertex2f(0.43f, -0.66f);
    glEnd();

    // headlight beam
    glColor3f(0.55f, 0.50f, 0.20f);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.43f, -0.68f);
    glVertex2f(0.12f, -0.62f);
    glVertex2f(0.12f, -0.74f);
    glEnd();

    // back light - right
    glColor3f(0.80f, 0.02f, 0.02f);
    glBegin(GL_QUADS);
    glVertex2f(0.75f, -0.70f);
    glVertex2f(0.77f, -0.70f);
    glVertex2f(0.77f, -0.66f);
    glVertex2f(0.75f, -0.66f);
    glEnd();

    // car wheels
    glColor3f(0.02f, 0.02f, 0.02f);
    drawCircle_siam(0.51f, -0.72f, 0.032f);
    drawCircle_siam(0.69f, -0.72f, 0.032f);

    // wheel centre
    glColor3f(0.25f, 0.25f, 0.25f);
    drawCircle_siam(0.51f, -0.72f, 0.012f);
    drawCircle_siam(0.69f, -0.72f, 0.012f);
    glPopMatrix();

    // Mosque Name
    glColor3f(0.0f, 0.0f, 0.0f);
    renderBitmapString(-0.106f, 0.50f, 0.0f,
                       GLUT_BITMAP_HELVETICA_12,
                       (char*)"Baitul Mukarram");

    glFlush();
}


//------------------------------------------------Siam End------------------------------------------//

//------------------------------------------------Ananto Start------------------------------------------//

void display_ananto()
{

    glClear(GL_COLOR_BUFFER_BIT);


    // Sky background

    glBegin(GL_QUADS);


    glColor3f(0.05f,0.07f,0.14f);

    glVertex2f(-1.0f,1.0f);

    glVertex2f(1.0f,1.0f);

    glVertex2f(1.0f,0.35f);

    glVertex2f(-1.0f,0.35f);


    glEnd();



    glBegin(GL_QUADS);


    glColor3f(0.09f,0.11f,0.19f);

    glVertex2f(-1.0f,0.35f);

    glVertex2f(1.0f,0.35f);

    glVertex2f(1.0f,-0.05f);

    glVertex2f(-1.0f,-0.05f);


    glEnd();



    // Stars


    glPointSize(2.0f);


    glBegin(GL_POINTS);


    glColor3f(0.85f,0.85f,0.85f);


    glVertex2f(-0.95f,0.90f);

    glVertex2f(-0.88f,0.80f);

    glVertex2f(-0.80f,0.92f);

    glVertex2f(-0.70f,0.85f);

    glVertex2f(-0.62f,0.93f);

    glVertex2f(-0.55f,0.82f);

    glVertex2f(-0.90f,0.65f);

    glVertex2f(-0.68f,0.68f);


    glVertex2f(0.55f,0.93f);

    glVertex2f(0.63f,0.82f);

    glVertex2f(0.72f,0.90f);

    glVertex2f(0.80f,0.80f);

    glVertex2f(0.88f,0.92f);

    glVertex2f(0.95f,0.83f);

    glVertex2f(0.60f,0.65f);

    glVertex2f(0.83f,0.67f);


    glEnd();



    // Moon


    glColor3f(1.0f,0.93f,0.68f);


    drawCircle_ananto(
        moonX_ananto,
        moonY_ananto,
        0.065f
    );


    glColor3f(0.05f,0.07f,0.14f);


    drawCircle_ananto(
        moonX_ananto+0.028f,
        moonY_ananto+0.010f,
        0.055f
    );



    // Clouds


    glPushMatrix();


    glTranslatef(cloud1X_ananto,0.0f,0.0f);


    drawCloud_ananto(-0.55f,0.75f);


    glPopMatrix();



    glPushMatrix();


    glTranslatef(cloud2X_ananto,0.0f,0.0f);


    drawCloud_ananto(0.15f,0.80f);


    glPopMatrix();



    // Background line


    glColor3f(0.02f,0.10f,0.05f);


    glBegin(GL_QUADS);


    glVertex2f(-1.0f,-0.05f);

    glVertex2f(1.0f,-0.05f);

    glVertex2f(1.0f,-0.10f);

    glVertex2f(-1.0f,-0.10f);


    glEnd();

// Dark green background ground

// Dark green side ground

    glColor3f(0.02f, 0.18f, 0.07f);

    glBegin(GL_QUADS);

    glVertex2f(-1.0f, -0.10f);
    glVertex2f(1.0f, -0.10f);
    glVertex2f(1.0f, -0.40f);
    glVertex2f(-1.0f, -0.40f);

    glEnd();

    // Update traffic light

// Draw circle shape



    // Sritishoudho monument


    // Main monument layers


    glColor3f(0.42f,0.41f,0.38f);


    glBegin(GL_TRIANGLES);


    glVertex2f(0.0f,0.32f);

    glVertex2f(-0.62f,-0.03f);

    glVertex2f(0.62f,-0.03f);


    glEnd();



    glColor3f(0.26f,0.25f,0.23f);


    glBegin(GL_LINE_LOOP);


    glVertex2f(0.0f,0.32f);

    glVertex2f(-0.62f,-0.03f);

    glVertex2f(0.62f,-0.03f);


    glEnd();




    // Monument layer 2


    glColor3f(0.49f,0.48f,0.45f);


    glBegin(GL_TRIANGLES);


    glVertex2f(0.0f,0.44f);

    glVertex2f(-0.50f,-0.03f);

    glVertex2f(0.50f,-0.03f);


    glEnd();



    glColor3f(0.32f,0.31f,0.29f);


    glBegin(GL_LINE_LOOP);


    glVertex2f(0.0f,0.44f);

    glVertex2f(-0.50f,-0.03f);

    glVertex2f(0.50f,-0.03f);


    glEnd();




    // Monument layer 3


    glColor3f(0.56f,0.55f,0.52f);


    glBegin(GL_TRIANGLES);


    glVertex2f(0.0f,0.55f);

    glVertex2f(-0.40f,-0.03f);

    glVertex2f(0.40f,-0.03f);


    glEnd();



    glColor3f(0.38f,0.37f,0.35f);


    glBegin(GL_LINE_LOOP);


    glVertex2f(0.0f,0.55f);

    glVertex2f(-0.40f,-0.03f);

    glVertex2f(0.40f,-0.03f);


    glEnd();




    // Monument layer 4


    glColor3f(0.64f,0.63f,0.60f);


    glBegin(GL_TRIANGLES);


    glVertex2f(0.0f,0.66f);

    glVertex2f(-0.30f,-0.03f);

    glVertex2f(0.30f,-0.03f);


    glEnd();



    glColor3f(0.45f,0.44f,0.42f);


    glBegin(GL_LINE_LOOP);


    glVertex2f(0.0f,0.66f);

    glVertex2f(-0.30f,-0.03f);

    glVertex2f(0.30f,-0.03f);


    glEnd();




    // Monument layer 5


    glColor3f(0.72f,0.71f,0.68f);


    glBegin(GL_TRIANGLES);


    glVertex2f(0.0f,0.77f);

    glVertex2f(-0.20f,-0.03f);

    glVertex2f(0.20f,-0.03f);


    glEnd();



    glColor3f(0.52f,0.51f,0.49f);


    glBegin(GL_LINE_LOOP);


    glVertex2f(0.0f,0.77f);

    glVertex2f(-0.20f,-0.03f);

    glVertex2f(0.20f,-0.03f);


    glEnd();




    // Monument layer 6


    glColor3f(0.82f,0.81f,0.78f);


    glBegin(GL_TRIANGLES);


    glVertex2f(0.0f,0.88f);

    glVertex2f(-0.11f,-0.03f);

    glVertex2f(0.11f,-0.03f);


    glEnd();



    glColor3f(0.60f,0.59f,0.56f);


    glBegin(GL_LINE_LOOP);


    glVertex2f(0.0f,0.88f);

    glVertex2f(-0.11f,-0.03f);

    glVertex2f(0.11f,-0.03f);


    glEnd();

    // Monument top


    glColor3f(0.95f,0.95f,0.92f);


    glBegin(GL_TRIANGLES);


    glVertex2f(0.0f,1.00f);

    glVertex2f(-0.045f,-0.03f);

    glVertex2f(0.045f,-0.03f);


    glEnd();



    glColor3f(0.72f,0.71f,0.68f);


    glBegin(GL_LINE_LOOP);


    glVertex2f(0.0f,1.00f);

    glVertex2f(-0.045f,-0.03f);

    glVertex2f(0.045f,-0.03f);


    glEnd();




    // Flag pole


    glColor3f(0.78f,0.78f,0.78f);


    glBegin(GL_QUADS);


    glVertex2f(0.330f,-0.03f);

    glVertex2f(0.350f,-0.03f);

    glVertex2f(0.350f,0.60f);

    glVertex2f(0.330f,0.60f);


    glEnd();




    // Pole shade


    glColor3f(0.55f,0.55f,0.55f);


    glBegin(GL_QUADS);


    glVertex2f(0.345f,-0.03f);

    glVertex2f(0.350f,-0.03f);

    glVertex2f(0.350f,0.60f);

    glVertex2f(0.345f,0.60f);


    glEnd();




    // Flag waving


    glPushMatrix();


    glTranslatef(0.340f,0.560f,0.0f);


    glRotatef(flagAngle_ananto,0.0f,0.0f,1.0f);


    glTranslatef(-0.340f,-0.560f,0.0f);




    glColor3f(0.0f,0.35f,0.16f);


    glBegin(GL_QUADS);


    glVertex2f(0.34f,0.60f);

    glVertex2f(0.50f,0.58f);

    glVertex2f(0.50f,0.50f);

    glVertex2f(0.34f,0.52f);


    glEnd();




    // Flag red circle


    glBegin(GL_POLYGON);


    glColor3f(0.80f,0.05f,0.05f);


    glVertex2f(0.41f,0.583f);

    glVertex2f(0.435f,0.575f);

    glVertex2f(0.450f,0.558f);

    glVertex2f(0.450f,0.538f);

    glVertex2f(0.435f,0.522f);

    glVertex2f(0.41f,0.514f);

    glVertex2f(0.385f,0.522f);

    glVertex2f(0.370f,0.538f);

    glVertex2f(0.370f,0.558f);

    glVertex2f(0.385f,0.575f);


    glEnd();



    glPopMatrix();




    // Walkway


    glColor3f(0.55f,0.42f,0.32f);


    glBegin(GL_QUADS);


    glVertex2f(-0.62f,-0.03f);

    glVertex2f(0.62f,-0.03f);

    glVertex2f(0.68f,-0.26f);

    glVertex2f(-0.68f,-0.26f);


    glEnd();




    // Reflecting pool


    glColor3f(0.10f,0.20f,0.30f);


    glBegin(GL_QUADS);


    glVertex2f(-0.50f,-0.06f);

    glVertex2f(0.50f,-0.06f);

    glVertex2f(0.54f,-0.20f);

    glVertex2f(-0.54f,-0.20f);


    glEnd();




    // Pool reflection


    glColor3f(0.20f,0.32f,0.42f);


    glBegin(GL_QUADS);


    glVertex2f(-0.04f,-0.07f);

    glVertex2f(0.04f,-0.07f);

    glVertex2f(0.05f,-0.19f);

    glVertex2f(-0.05f,-0.19f);


    glEnd();




    glColor3f(0.55f,0.45f,0.20f);


    glBegin(GL_QUADS);


    glVertex2f(0.32f,-0.10f);

    glVertex2f(0.36f,-0.10f);

    glVertex2f(0.37f,-0.18f);

    glVertex2f(0.31f,-0.18f);


    glEnd();


    // Side grass near pool


    glColor3f(0.02f,0.18f,0.07f);


    glBegin(GL_QUADS);


    glVertex2f(-0.68f,-0.03f);

    glVertex2f(-0.62f,-0.03f);

    glVertex2f(-0.66f,-0.26f);

    glVertex2f(-0.74f,-0.26f);


    glEnd();



    glBegin(GL_QUADS);


    glVertex2f(0.62f,-0.03f);

    glVertex2f(0.68f,-0.03f);

    glVertex2f(0.74f,-0.26f);

    glVertex2f(0.66f,-0.26f);


    glEnd();




    // Steps


    glColor3f(0.40f,0.17f,0.12f);


    glBegin(GL_QUADS);


    glVertex2f(-0.74f,-0.26f);

    glVertex2f(0.74f,-0.26f);

    glVertex2f(0.80f,-0.33f);

    glVertex2f(-0.80f,-0.33f);


    glEnd();




    glColor3f(0.35f,0.13f,0.09f);


    glBegin(GL_QUADS);


    glVertex2f(-0.80f,-0.33f);

    glVertex2f(0.80f,-0.33f);

    glVertex2f(0.87f,-0.40f);

    glVertex2f(-0.87f,-0.40f);


    glEnd();




    // Front ground


    glColor3f(0.30f,0.16f,0.12f);


    glBegin(GL_QUADS);


    glVertex2f(-1.0f,-0.40f);

    glVertex2f(1.0f,-0.40f);

    glVertex2f(1.0f,-0.52f);

    glVertex2f(-1.0f,-0.52f);


    glEnd();




    // Lamp post 1


    glBegin(GL_QUADS);


    glColor3f(0.05f,0.05f,0.04f);


    glVertex2f(-0.91f,-0.30f);

    glVertex2f(-0.89f,-0.30f);

    glVertex2f(-0.89f,0.00f);

    glVertex2f(-0.91f,0.00f);


    glEnd();



    glBegin(GL_POLYGON);


    glColor3f(0.12f,0.12f,0.05f);


    glVertex2f(-0.94f,0.00f);

    glVertex2f(-0.92f,0.06f);

    glVertex2f(-0.88f,0.06f);

    glVertex2f(-0.86f,0.00f);


    glEnd();



    glBegin(GL_QUADS);


    glColor3f(1.0f,0.9f,0.3f);


    glVertex2f(-0.92f,0.02f);

    glVertex2f(-0.88f,0.02f);

    glVertex2f(-0.88f,0.05f);

    glVertex2f(-0.92f,0.05f);


    glEnd();




    // Lamp post 2


    glBegin(GL_QUADS);


    glColor3f(0.05f,0.05f,0.04f);


    glVertex2f(-0.67f,-0.26f);

    glVertex2f(-0.655f,-0.26f);

    glVertex2f(-0.655f,0.00f);

    glVertex2f(-0.67f,0.00f);


    glEnd();




    glBegin(GL_POLYGON);


    glColor3f(0.12f,0.12f,0.05f);


    glVertex2f(-0.695f,0.00f);

    glVertex2f(-0.68f,0.05f);

    glVertex2f(-0.645f,0.05f);

    glVertex2f(-0.63f,0.00f);


    glEnd();



    glBegin(GL_QUADS);


    glColor3f(1.0f,0.9f,0.3f);


    glVertex2f(-0.68f,0.015f);

    glVertex2f(-0.645f,0.015f);

    glVertex2f(-0.645f,0.045f);

    glVertex2f(-0.68f,0.045f);


    glEnd();


    // Lamp post 3


    glBegin(GL_QUADS);


    glColor3f(0.05f,0.05f,0.04f);


    glVertex2f(0.655f,-0.26f);

    glVertex2f(0.67f,-0.26f);

    glVertex2f(0.67f,0.00f);

    glVertex2f(0.655f,0.00f);


    glEnd();



    glBegin(GL_POLYGON);


    glColor3f(0.12f,0.12f,0.05f);


    glVertex2f(0.63f,0.00f);

    glVertex2f(0.645f,0.05f);

    glVertex2f(0.68f,0.05f);

    glVertex2f(0.695f,0.00f);


    glEnd();



    glBegin(GL_QUADS);


    glColor3f(1.0f,0.9f,0.3f);


    glVertex2f(0.645f,0.015f);

    glVertex2f(0.68f,0.015f);

    glVertex2f(0.68f,0.045f);

    glVertex2f(0.645f,0.045f);


    glEnd();




    // Lamp post 4


    glBegin(GL_QUADS);


    glColor3f(0.05f,0.05f,0.04f);


    glVertex2f(0.89f,-0.30f);

    glVertex2f(0.91f,-0.30f);

    glVertex2f(0.91f,0.00f);

    glVertex2f(0.89f,0.00f);


    glEnd();



    glBegin(GL_POLYGON);


    glColor3f(0.12f,0.12f,0.05f);


    glVertex2f(0.86f,0.00f);

    glVertex2f(0.88f,0.06f);

    glVertex2f(0.92f,0.06f);

    glVertex2f(0.94f,0.00f);


    glEnd();



    glBegin(GL_QUADS);


    glColor3f(1.0f,0.9f,0.3f);


    glVertex2f(0.88f,0.02f);

    glVertex2f(0.92f,0.02f);

    glVertex2f(0.92f,0.05f);

    glVertex2f(0.88f,0.05f);


    glEnd();




    // Road


    glBegin(GL_QUADS);


    glColor3f(0.06f,0.07f,0.07f);


    glVertex2f(-1.0f,-0.55f);

    glVertex2f(1.0f,-0.55f);

    glVertex2f(1.0f,-1.0f);

    glVertex2f(-1.0f,-1.0f);


    glEnd();




    // Roadside blocks


    glBegin(GL_QUADS);


    glColor3f(0.9f,0.9f,0.9f);


    glVertex2f(-1.0f,-0.55f);

    glVertex2f(-0.80f,-0.55f);

    glVertex2f(-0.80f,-0.51f);

    glVertex2f(-1.0f,-0.51f);


    glEnd();



    glBegin(GL_QUADS);


    glColor3f(0.05f,0.05f,0.05f);


    glVertex2f(-0.80f,-0.55f);

    glVertex2f(-0.60f,-0.55f);

    glVertex2f(-0.60f,-0.51f);

    glVertex2f(-0.80f,-0.51f);


    glEnd();



    glBegin(GL_QUADS);


    glColor3f(0.9f,0.9f,0.9f);


    glVertex2f(-0.60f,-0.55f);

    glVertex2f(-0.40f,-0.55f);

    glVertex2f(-0.40f,-0.51f);

    glVertex2f(-0.60f,-0.51f);


    glEnd();



    glBegin(GL_QUADS);


    glColor3f(0.05f,0.05f,0.05f);


    glVertex2f(-0.40f,-0.55f);

    glVertex2f(-0.20f,-0.55f);

    glVertex2f(-0.20f,-0.51f);

    glVertex2f(-0.40f,-0.51f);


    glEnd();


    glBegin(GL_QUADS);


    glColor3f(0.9f,0.9f,0.9f);


    glVertex2f(-0.20f,-0.55f);

    glVertex2f(0.0f,-0.55f);

    glVertex2f(0.0f,-0.51f);

    glVertex2f(-0.20f,-0.51f);


    glEnd();



    glBegin(GL_QUADS);


    glColor3f(0.05f,0.05f,0.05f);


    glVertex2f(0.0f,-0.55f);

    glVertex2f(0.20f,-0.55f);

    glVertex2f(0.20f,-0.51f);

    glVertex2f(0.0f,-0.51f);


    glEnd();



    glBegin(GL_QUADS);


    glColor3f(0.9f,0.9f,0.9f);


    glVertex2f(0.20f,-0.55f);

    glVertex2f(0.40f,-0.55f);

    glVertex2f(0.40f,-0.51f);

    glVertex2f(0.20f,-0.51f);


    glEnd();



    glBegin(GL_QUADS);


    glColor3f(0.05f,0.05f,0.05f);


    glVertex2f(0.40f,-0.55f);

    glVertex2f(0.60f,-0.55f);

    glVertex2f(0.60f,-0.51f);

    glVertex2f(0.40f,-0.51f);


    glEnd();



    glBegin(GL_QUADS);


    glColor3f(0.9f,0.9f,0.9f);


    glVertex2f(0.60f,-0.55f);

    glVertex2f(0.80f,-0.55f);

    glVertex2f(0.80f,-0.51f);

    glVertex2f(0.60f,-0.51f);


    glEnd();



    glBegin(GL_QUADS);


    glColor3f(0.05f,0.05f,0.05f);


    glVertex2f(0.80f,-0.55f);

    glVertex2f(1.0f,-0.55f);

    glVertex2f(1.0f,-0.51f);

    glVertex2f(0.80f,-0.51f);


    glEnd();




    // Road lines


    glBegin(GL_QUADS);


    glColor3f(0.85f,0.85f,0.85f);


    glVertex2f(-0.85f,-0.76f);

    glVertex2f(-0.62f,-0.76f);

    glVertex2f(-0.62f,-0.73f);

    glVertex2f(-0.85f,-0.73f);


    glEnd();



    glBegin(GL_QUADS);


    glVertex2f(-0.30f,-0.76f);

    glVertex2f(-0.07f,-0.76f);

    glVertex2f(-0.07f,-0.73f);

    glVertex2f(-0.30f,-0.73f);


    glEnd();



    glBegin(GL_QUADS);


    glVertex2f(0.25f,-0.76f);

    glVertex2f(0.48f,-0.76f);

    glVertex2f(0.48f,-0.73f);

    glVertex2f(0.25f,-0.73f);


    glEnd();



    glBegin(GL_QUADS);


    glVertex2f(0.72f,-0.76f);

    glVertex2f(0.95f,-0.76f);

    glVertex2f(0.95f,-0.73f);

    glVertex2f(0.72f,-0.73f);


    glEnd();




    // Car 1 moving left to right


    glPushMatrix();


    glTranslatef(position_ananto,-0.10f,0.0f);



    glBegin(GL_TRIANGLES);


    glColor3f(0.75f,0.70f,0.35f);


    glVertex2f(-0.42f,-0.82f);

    glVertex2f(-0.10f,-0.72f);

    glVertex2f(-0.10f,-0.90f);


    glEnd();



    glBegin(GL_QUADS);


    glColor3f(0.02f,0.40f,0.20f);


    glVertex2f(-0.80f,-0.85f);

    glVertex2f(-0.42f,-0.85f);

    glVertex2f(-0.42f,-0.73f);

    glVertex2f(-0.80f,-0.73f);


    glEnd();



    glBegin(GL_POLYGON);


    glVertex2f(-0.72f,-0.73f);

    glVertex2f(-0.66f,-0.63f);

    glVertex2f(-0.53f,-0.63f);

    glVertex2f(-0.46f,-0.73f);


    glEnd();



    glBegin(GL_QUADS);


    glColor3f(0.20f,0.45f,0.52f);


    glVertex2f(-0.66f,-0.65f);

    glVertex2f(-0.60f,-0.65f);

    glVertex2f(-0.60f,-0.72f);

    glVertex2f(-0.70f,-0.72f);


    glEnd();



    glBegin(GL_QUADS);


    glVertex2f(-0.58f,-0.65f);

    glVertex2f(-0.53f,-0.65f);

    glVertex2f(-0.47f,-0.72f);

    glVertex2f(-0.58f,-0.72f);


    glEnd();



    // Car 1 left wheel


    glBegin(GL_POLYGON);


    glColor3f(0.02f,0.02f,0.02f);


    glVertex2f(-0.75f,-0.83f);

    glVertex2f(-0.72f,-0.81f);

    glVertex2f(-0.68f,-0.81f);

    glVertex2f(-0.65f,-0.83f);

    glVertex2f(-0.64f,-0.87f);

    glVertex2f(-0.65f,-0.91f);

    glVertex2f(-0.68f,-0.93f);

    glVertex2f(-0.72f,-0.93f);

    glVertex2f(-0.75f,-0.91f);

    glVertex2f(-0.76f,-0.87f);


    glEnd();




    // Car 1 right wheel


    glBegin(GL_POLYGON);


    glColor3f(0.02f,0.02f,0.02f);


    glVertex2f(-0.55f,-0.83f);

    glVertex2f(-0.52f,-0.81f);

    glVertex2f(-0.48f,-0.81f);

    glVertex2f(-0.45f,-0.83f);

    glVertex2f(-0.44f,-0.87f);

    glVertex2f(-0.45f,-0.91f);

    glVertex2f(-0.48f,-0.93f);

    glVertex2f(-0.52f,-0.93f);

    glVertex2f(-0.55f,-0.91f);

    glVertex2f(-0.56f,-0.87f);


    glEnd();




    // Car 1 front light


    glBegin(GL_QUADS);


    glColor3f(1.0f,0.9f,0.3f);


    glVertex2f(-0.44f,-0.77f);

    glVertex2f(-0.41f,-0.77f);

    glVertex2f(-0.41f,-0.81f);

    glVertex2f(-0.44f,-0.81f);


    glEnd();




    // Car 1 back light


    glBegin(GL_QUADS);


    glColor3f(1.0f,0.0f,0.0f);


    glVertex2f(-0.82f,-0.76f);

    glVertex2f(-0.79f,-0.76f);

    glVertex2f(-0.79f,-0.80f);

    glVertex2f(-0.82f,-0.80f);


    glEnd();



    glPopMatrix();




    // Car 2 moving right to left


    glPushMatrix();


    glTranslatef(position2_ananto,0.20f,0.0f);


    glScalef(-1.0f,1.0f,1.0f);




    // Car 2 headlight beam


    glBegin(GL_TRIANGLES);


    glColor3f(0.75f,0.70f,0.35f);


    glVertex2f(-0.42f,-0.82f);

    glVertex2f(-0.10f,-0.72f);

    glVertex2f(-0.10f,-0.90f);


    glEnd();




    // Car 2 body


    glBegin(GL_QUADS);


    glColor3f(0.05f,0.20f,0.80f);


    glVertex2f(-0.80f,-0.85f);

    glVertex2f(-0.42f,-0.85f);

    glVertex2f(-0.42f,-0.73f);

    glVertex2f(-0.80f,-0.73f);


    glEnd();




    // Car 2 top


    glBegin(GL_POLYGON);


    glVertex2f(-0.72f,-0.73f);

    glVertex2f(-0.66f,-0.63f);

    glVertex2f(-0.53f,-0.63f);

    glVertex2f(-0.46f,-0.73f);


    glEnd();


    // Car 2 windows


    glBegin(GL_QUADS);


    glColor3f(0.20f,0.45f,0.52f);


    glVertex2f(-0.66f,-0.65f);

    glVertex2f(-0.60f,-0.65f);

    glVertex2f(-0.60f,-0.72f);

    glVertex2f(-0.70f,-0.72f);


    glEnd();



    glBegin(GL_QUADS);


    glVertex2f(-0.58f,-0.65f);

    glVertex2f(-0.53f,-0.65f);

    glVertex2f(-0.47f,-0.72f);

    glVertex2f(-0.58f,-0.72f);


    glEnd();




    // Car 2 left wheel


    glBegin(GL_POLYGON);


    glColor3f(0.02f,0.02f,0.02f);


    glVertex2f(-0.75f,-0.83f);

    glVertex2f(-0.72f,-0.81f);

    glVertex2f(-0.68f,-0.81f);

    glVertex2f(-0.65f,-0.83f);

    glVertex2f(-0.64f,-0.87f);

    glVertex2f(-0.65f,-0.91f);

    glVertex2f(-0.68f,-0.93f);

    glVertex2f(-0.72f,-0.93f);

    glVertex2f(-0.75f,-0.91f);

    glVertex2f(-0.76f,-0.87f);


    glEnd();




    // Car 2 right wheel


    glBegin(GL_POLYGON);


    glColor3f(0.02f,0.02f,0.02f);


    glVertex2f(-0.55f,-0.83f);

    glVertex2f(-0.52f,-0.81f);

    glVertex2f(-0.48f,-0.81f);

    glVertex2f(-0.45f,-0.83f);

    glVertex2f(-0.44f,-0.87f);

    glVertex2f(-0.45f,-0.91f);

    glVertex2f(-0.48f,-0.93f);

    glVertex2f(-0.52f,-0.93f);

    glVertex2f(-0.55f,-0.91f);

    glVertex2f(-0.56f,-0.87f);


    glEnd();




    // Car 2 front light


    glBegin(GL_QUADS);


    glColor3f(1.0f,0.9f,0.3f);


    glVertex2f(-0.44f,-0.77f);

    glVertex2f(-0.41f,-0.77f);

    glVertex2f(-0.41f,-0.81f);

    glVertex2f(-0.44f,-0.81f);


    glEnd();




    // Car 2 back light


    glBegin(GL_QUADS);


    glColor3f(1.0f,0.0f,0.0f);


    glVertex2f(-0.82f,-0.76f);

    glVertex2f(-0.79f,-0.76f);

    glVertex2f(-0.79f,-0.80f);

    glVertex2f(-0.82f,-0.80f);


    glEnd();



    glPopMatrix();




    // Traffic light


    drawTrafficLight_ananto();


    glFlush();

}
//------------------------------------------------Ananto End------------------------------------------//

void keyboard(unsigned char key, int x, int y)
{
    // ================= INSTRUCTION =================
    if(key == 'i' || key == 'I')
    {
        currentDisplay = 3;

        PlaySound(NULL, NULL, 0);

        glutDisplayFunc(display_instruction);
        glutPostRedisplay();
    }


    // ================= MAHIM DISPLAY =================
    if(key == '1')
    {
        currentDisplay = 1;

        PlaySound(NULL, NULL, 0);
        PlaySound("National Anthem.wav",
                  NULL,
                  SND_ASYNC | SND_FILENAME | SND_LOOP);

        glutDisplayFunc(display_mahim);
        glutPostRedisplay();
    }


    // ================= FABLIHA DISPLAY =================
    if(key == '2' || key == 'f' || key == 'F')
    {
        currentDisplay = 2;

        PlaySound(NULL, NULL, 0);
        PlaySound("Vehicles Passing  Sound Effects.wav",
                  NULL,
                  SND_ASYNC | SND_FILENAME | SND_LOOP);

        glutDisplayFunc(display_fabliha);
        glutPostRedisplay();
    }


    // ================= ALVI DISPLAY =================
    if(key == '3')
    {
        currentDisplay = 4;

        PlaySound(NULL, NULL, 0);
        PlaySound("Shahid_Minar.wav",
                  NULL,
                  SND_ASYNC | SND_FILENAME | SND_LOOP);

        glutDisplayFunc(display_alvi);
        glutPostRedisplay();
    }
    // ================= Siam DISPLAY =================
    if(key == '4')
    {
        currentDisplay = 5;

        PlaySound(NULL, NULL, 0);
        PlaySound("Ibn-Al-Noor(chosic.com).wav",
                  NULL,
                  SND_ASYNC | SND_FILENAME | SND_LOOP);

        glutDisplayFunc(display_siam);
        glutPostRedisplay();
    }

    // ================= Ananto DISPLAY =================
    if(key == '5')
    {
        currentDisplay = 6;

        PlaySound(NULL, NULL, 0);
        PlaySound("Ananto_music.wav",
                  NULL,
                  SND_ASYNC | SND_FILENAME | SND_LOOP);

        glutDisplayFunc(display_ananto);
        glutPostRedisplay();
    }

    // ================= BACK TO MAIN DISPLAY =================
    if(key == 'b' || key == 'B')
    {
        currentDisplay = 0;

        PlaySound(NULL, NULL, 0);

        glutDisplayFunc(display);
        glutPostRedisplay();
    }


    // ================= MAHIM CONTROL =================
    if(currentDisplay == 1)
    {
        // Increase Speed
        if(key == 'h' || key == 'H')
        {
            speed_mahim += 0.01f;
        }


        // Decrease Speed
        if(key == 'l' || key == 'L')
        {
            speed_mahim -= 0.01f;

            if(speed_mahim < 0.01f)
            {
                speed_mahim = 0.01f;
            }
        }


        // Red Light
        if(key == 'r' || key == 'R')
        {
            redLight_mahim = true;
        }


        // Green Light
        if(key == 'g' || key == 'G')
        {
            redLight_mahim = false;
        }
    }


    // ================= FABLIHA CONTROL =================
    if(currentDisplay == 2)
    {
        // Red Light
        if(key == 'r' || key == 'R')
        {
            trafficRed_fabliha = true;
            trafficGreen_fabliha = false;
        }


        // Green Light
        if(key == 'g' || key == 'G')
        {
            trafficRed_fabliha = false;
            trafficGreen_fabliha = true;
        }
    }


    // ================= ALVI CONTROL =================
    if(currentDisplay == 4)
    {
        // Lights OFF
        if(key == 'l' || key == 'L')
        {
            lampOn_alvi = false;
        }


        // Lights ON
        if(key == 'o' || key == 'O')
        {
            lampOn_alvi = true;
        }


        // Reset Cars
        if(key == 's' || key == 'S')
        {
            position_alvi = -2.0f;
            position2_alvi = 2.0f;
        }


        // Traffic RED
        if(key == 'r' || key == 'R')
        {
            trafficRed_alvi = true;
            trafficYellow_alvi = false;
            trafficGreen_alvi = false;
        }


        // Traffic YELLOW
        if(key == 'y' || key == 'Y')
        {
            trafficRed_alvi = false;
            trafficYellow_alvi = true;
            trafficGreen_alvi = false;
        }


        // Traffic GREEN
        if(key == 'g' || key == 'G')
        {
            trafficRed_alvi = false;
            trafficYellow_alvi = false;
            trafficGreen_alvi = true;
        }
    }

    // ================= SIAM ARROW KEY CONTROL =================
    if(currentDisplay == 5)
    {
        if(key == GLUT_KEY_UP)
        {
            speed_siam += 0.002f;
            cloudSpeed_siam += 0.0001f;
            treeSpeed_siam += 0.00004f;
            starSpeed_siam += 0.00005f;
        }

        if(key == GLUT_KEY_DOWN)
        {
            speed_siam -= 0.002f;
            cloudSpeed_siam -= 0.0001f;
            treeSpeed_siam -= 0.00004f;
            starSpeed_siam -= 0.00005f;

            if(speed_siam < 0.002f)
                speed_siam = 0.002f;

            if(cloudSpeed_siam < 0.0001f)
                cloudSpeed_siam = 0.0001f;

            if(treeSpeed_siam < 0.00004f)
                treeSpeed_siam = 0.00004f;

            if(starSpeed_siam < 0.00005f)
                starSpeed_siam = 0.00005f;
        }
    }

    // ================= ANANTO CONTROL =================
    if(currentDisplay == 6)
    {
        // Traffic RED
        if(key == 'r' || key == 'R')
        {
            trafficRed_ananto = true;
            trafficYellow_ananto = false;
            trafficGreen_ananto = false;
        }

        // Traffic YELLOW
        if(key == 'y' || key == 'Y')
        {
            trafficRed_ananto = false;
            trafficYellow_ananto = true;
            trafficGreen_ananto = false;
        }

        // Traffic GREEN
        if(key == 'g' || key == 'G')
        {
            trafficRed_ananto = false;
            trafficYellow_ananto = false;
            trafficGreen_ananto = true;
        }

        // Reset Cars
        if(key == 's' || key == 'S')
        {
            position_ananto = -2.0f;
            position2_ananto = 2.0f;
        }
    }


    // ================= MUTE =================
    if(key == 'm' || key == 'M')
    {
        PlaySound(NULL, NULL, 0);
    }


    // ================= UNMUTE =================
    if(key == 'u' || key == 'U')
    {
        // Mahim
        if(currentDisplay == 1)
        {
            PlaySound("National Anthem.wav",
                      NULL,
                      SND_ASYNC | SND_FILENAME | SND_LOOP);
        }


        // Fabliha
        else if(currentDisplay == 2)
        {
            PlaySound("Vehicles Passing  Sound Effects.wav",
                      NULL,
                      SND_ASYNC | SND_FILENAME | SND_LOOP);
        }


        // Alvi
        else if(currentDisplay == 4)
        {
            PlaySound("Shahid_Minar.wav",
                      NULL,
                      SND_ASYNC | SND_FILENAME | SND_LOOP);
        }
        else if(currentDisplay == 5)
        {
            PlaySound("Ibn-Al-Noor(chosic.com).wav",
                      NULL,
                      SND_ASYNC | SND_FILENAME | SND_LOOP);
        }
    }


    glutPostRedisplay();
}


// ================= ARROW KEY CONTROL =================

void specialKey(int key, int x, int y)
{
    // ================= ALVI CONTROL =================
    if(currentDisplay == 4)
    {
        // Increase Speed
        if(key == GLUT_KEY_UP)
        {
            speed_alvi += 0.005f;
        }

        // Decrease Speed
        if(key == GLUT_KEY_DOWN)
        {
            speed_alvi -= 0.005f;

            if(speed_alvi < 0)
            {
                speed_alvi = 0;
            }
        }

        // Stop Cars
        if(key == GLUT_KEY_LEFT)
        {
            carMove_alvi = false;
        }

        // Move Cars
        if(key == GLUT_KEY_RIGHT)
        {
            carMove_alvi = true;
        }
    }


    // ================= SIAM CONTROL =================
    if(currentDisplay == 5)
    {
        // Increase Speed
        if(key == GLUT_KEY_UP)
        {
            speed_siam += 0.002f;
            cloudSpeed_siam += 0.0001f;
            treeSpeed_siam += 0.00004f;
            starSpeed_siam += 0.00005f;
        }

        // Decrease Speed
        if(key == GLUT_KEY_DOWN)
        {
            speed_siam -= 0.002f;
            cloudSpeed_siam -= 0.0001f;
            treeSpeed_siam -= 0.00004f;
            starSpeed_siam -= 0.00005f;

            if(speed_siam < 0.002f)
                speed_siam = 0.002f;

            if(cloudSpeed_siam < 0.0001f)
                cloudSpeed_siam = 0.0001f;

            if(treeSpeed_siam < 0.00004f)
                treeSpeed_siam = 0.00004f;

            if(starSpeed_siam < 0.00005f)
                starSpeed_siam = 0.00005f;
        }
    }


    // ================= ANANTO CONTROL =================
    if(currentDisplay == 6)
    {
        // Increase Speed
        if(key == GLUT_KEY_UP)
        {
            speed_ananto += 0.005f;
        }

        // Decrease Speed
        if(key == GLUT_KEY_DOWN)
        {
            speed_ananto -= 0.005f;

            if(speed_ananto < 0)
            {
                speed_ananto = 0;
            }
        }

        // Stop Cars
        if(key == GLUT_KEY_LEFT)
        {
            carMove_ananto = false;
        }

        // Move Cars
        if(key == GLUT_KEY_RIGHT)
        {
            carMove_ananto = true;
        }
    }


    glutPostRedisplay();
}

void handleMouse(int button, int state, int x, int y)
{
    // ================= ALVI MOUSE CONTROL =================
    if(currentDisplay == 4)
    {
        if(state == GLUT_DOWN)
        {
            // LEFT CLICK = SOUND OFF
            if(button == GLUT_LEFT_BUTTON)
            {
                PlaySound(NULL, NULL, 0);
                soundOn_alvi = false;
            }

            // RIGHT CLICK = SOUND ON
            if(button == GLUT_RIGHT_BUTTON)
            {
                PlaySound("Shahid_Minar.wav",
                          NULL,
                          SND_ASYNC | SND_FILENAME | SND_LOOP);

                soundOn_alvi = true;
            }
        }
    }


    // ================= SIAM MOUSE CONTROL =================
    if(currentDisplay == 5)
    {
        if(state == GLUT_DOWN)
        {
            // LEFT CLICK = PAUSE / RESUME
            if(button == GLUT_LEFT_BUTTON)
            {
                paused_siam = !paused_siam;
            }

            // RIGHT CLICK = AUTOMATIC SIGNAL
            if(button == GLUT_RIGHT_BUTTON)
            {
                automaticSignal_siam = true;
                signalElapsed_siam = 0;
            }
        }
    }

    if(currentDisplay == 6)
    {
        if(state == GLUT_DOWN)
        {
            // LEFT CLICK = SOUND OFF
            if(button == GLUT_LEFT_BUTTON)
            {
                PlaySound(NULL, NULL, 0);
                soundOn_ananto = false;
            }

            // RIGHT CLICK = SOUND ON
            if(button == GLUT_RIGHT_BUTTON)
            {
                PlaySound("Ananto_music.wav",
                          NULL,
                          SND_ASYNC | SND_FILENAME | SND_LOOP);

                soundOn_ananto = true;
            }
        }
    }


    glutPostRedisplay();
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1600, 900);
    glutInitWindowPosition(150, 100);
    glutCreateWindow("INTERACTIVE VISUALIZATION OF BANGLADESH'S ICONIC LANDMARKS");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutSpecialFunc(specialKey);
    initGL();
    //------------------------------------------------Mahim Start------------------------------------------//
    glutTimerFunc(30, update_mahim, 0);
    glutTimerFunc(30, update_mahim1, 0);
    glutTimerFunc(30, updateCloud_mahim, 0);
    glutTimerFunc(30, updateCloud_mahim2, 0);
    glutTimerFunc(30, updateTree_mahim, 0);
    glutTimerFunc(30, updateSun_mahim, 0);
    glutTimerFunc(30, updateflag_mahim, 0);
//------------------------------------------------Mahim End------------------------------------------//

//------------------------------------------------Fabliha Start------------------------------------------//
    glutTimerFunc(1, updateCloud1_fabliha, 0);
    glutTimerFunc(2, updateCloud2_fabliha, 0);
    glutTimerFunc(3, updateCloud3_fabliha, 0);
    glutTimerFunc(1, updateBoat1_fabliha, 0);
    glutTimerFunc(1, updateBoat2_fabliha, 0);
    glutTimerFunc(1, updateCar1Red_fabliha, 0);
    glutTimerFunc(1, updateCar2Green_fabliha, 0);
    glutTimerFunc(1, updateCar3Blue_fabliha, 0);
    glutTimerFunc(1, updateCar4Pink_fabliha, 0);
    glutTimerFunc(2, updateWater_fabliha, 0);
//------------------------------------------------Fabliha End------------------------------------------//

//------------------------------------------------Alvi Start------------------------------------------//
    glutTimerFunc(3000, carUpdate_alvi, 0);
    glutTimerFunc(300, starUpdate_alvi, 0);
    glutTimerFunc(300, treeUpdate_alvi, 0);
    glutTimerFunc(30, moonUpdate_alvi, 0);
    glutTimerFunc(30, cloudUpdate_alvi, 0);

    glutMouseFunc(handleMouse);

//------------------------------------------------Alvi End------------------------------------------//

//------------------------------------------------Siam End------------------------------------------//
    glutTimerFunc(30, carUpdate_siam, 0);
    glutTimerFunc(300, starUpdate_siam, 0);
    glutTimerFunc(300, treeUpdate_siam, 0);
    glutTimerFunc(30, cloudUpdate_siam, 0);

    //------------------------------------------------Siam End------------------------------------------//

    glutTimerFunc(30,cloudUpdate_ananto,0);

    glutTimerFunc(30,moonUpdate_ananto,0);

    glutTimerFunc(30,treeUpdate_ananto,0);

    glutTimerFunc(30,carUpdate_ananto,0);

    glutTimerFunc(30,updateFlag_ananto,0);

    glutTimerFunc(3000,trafficUpdate_ananto,0);
    glutMainLoop();
    return 0;
}
