#ifndef MAINSCREEN_H
#define MAINSCREEN_H

#include <QMainWindow>
#include <QScreen>

namespace Ui {
class MainScreen;
}

class MainScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainScreen(QWidget *parent = 0);
    ~MainScreen();

    void resizeEvent(QResizeEvent* event);
    void scale_background();

private slots:
    void on_About_pushButton_clicked();



private:
    Ui::MainScreen *ui;

};

#endif // MAINSCREEN_H
