#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "game.h"
#include <QMessageBox>

enum class msgType{
    winner,
    error,
    fullBoard
};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

private slots:
    void on_x0y0_clicked();

    void on_x1y0_clicked();

    void on_x2y0_clicked();

    void on_x0y1_clicked();

    void on_x1y1_clicked();

    void on_x2y1_clicked();

    void on_x0y2_clicked();

    void on_x1y2_clicked();

    void on_x2y2_clicked();

    void on_actionNew_game_triggered();

    void on_actionCredits_triggered();

    void on_actionExit_triggered();

private:
    Ui::MainWindow *ui;
    game *currentGame;
    void displayMSG(msgType type);
    void displayMSG(msgType type, QString msgText);
    void clearBoardUi();
    void displayScore();
    void clickedButton(QPushButton* button, unsigned short posX, unsigned short posY);
};

#endif // MAINWINDOW_H
