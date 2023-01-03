#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QSqlDatabase>
#include <QSqlQuery>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:


    void on_But1_clicked();

    void on_But2_clicked();

    void on_signbut_clicked();

    void on_s2up_clicked();



    void on_SBdBUT3_clicked();

    void on_sbd2c_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_sbc2d_clicked();

    void on_SubBUT4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_TuBUT5_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_mohBUT6_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_12_clicked();

    void on_regback_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_24_clicked();

private:
    Ui::MainWindow *ui;
    QString login_email,login_password,passenger_count,pass_count,passturna,passprvti,nmreg,emlreg,passreg,conreg;
    QSqlDatabase db;
};
#endif // MAINWINDOW_H
