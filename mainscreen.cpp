//-------------------------------------------------------------------------
//For:
//By:
//Date:
//Purpose:
//-------------------------------------------------------------------------
//Credit:
//Mainscreen background image from videoblocks.com
//Title font from flamingtext.com
//Rebel soldier image from battlefront.wikia.com
#include "mainscreen.h"
#include "ui_mainscreen.h"
#include <Qscreen>

MainScreen::MainScreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainScreen)
{
    ui->setupUi(this);

    //ui->NewGame_pushButton->setAutoFillBackground(true);
    ui->NewGame_pushButton->setStyleSheet("background-color: rgb(255,255, 0); color: rgb(0,0,0)");

    //ui->About_pushButton->setAutoFillBackground(true);
    ui->About_pushButton->setStyleSheet("background-color: rgb(255,255, 0); color: rgb(0,0,0)");

    //ui->Controls_pushButton->setAutoFillBackground(true);
    ui->Controls_pushButton->setStyleSheet("background-color: rgb(255,255, 0); color: rgb(0,0,0)");

    //ui->Exit_pushButton->setAutoFillBackground(true);
    ui->Exit_pushButton->setStyleSheet("background-color: rgb(255,255, 0); color: rgb(0,0,0)");



    //this->setStyleSheet("background-image:url(\"C:/Users/Devin/Documents/School/ME 570/Project 3D files/stardestroyer.png\"); background-position: center; background-repeat:no-repeat;" );
    //Insert background image for the main screen. Image used from videoblocks.com
    QPixmap bkgnd("C:/Users/Devin/Documents/School/ME 570/Project 3D files/stardestroyer.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);




}

MainScreen::~MainScreen()
{
    delete ui;
}

void MainScreen::resizeEvent(QResizeEvent *event)
{
    QMainWindow::resizeEvent(event);
    scale_background();
}

void MainScreen::scale_background()
{
    QPixmap bkgnd("C:/Users/Devin/Documents/School/ME 570/Project 3D files/stardestroyer.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    QPixmap p("C:/Users/Devin/Documents/School/ME 570/Project 3D files/title_rebel.png"); // load pixmap
    // get label dimensions
    int w = ui->Rebel_label->width();
    int h = ui->Rebel_label->height();

    // set a scaled pixmap to a w x h window keeping its aspect ratio
    ui->Rebel_label->setPixmap(p.scaled(w,h,Qt::IgnoreAspectRatio));
}
void MainScreen::on_About_pushButton_clicked()
{

}
//void QScreen::geometryChanged(const QRect &geometry)
//{
//    scale_bg();
//}
