#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = QSqlDatabase :: addDatabase ("QSQLITE");
    db.setDatabaseName("F:/ticket.db");

    db.open();
    qDebug()<<db.open();
}


MainWindow::~MainWindow()
{
    db.close();
    delete ui;

}




void MainWindow::on_But1_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_But2_clicked()
{

login_email = ui->login_email_input->text();
login_password = ui->login_password_input->text();
//if(login_email=="nasim@gmail.com" && login_password=="12345")
//{
   // ui->stackedWidget->setCurrentIndex(3);
//}
QSqlQuery query;
//          SELECT *FROM ticket WHERE EMAIL="c" AND PASSWORD ="v"
query.exec("SELECT * FROM ticket WHERE EMAIL='"+login_email+"' AND PASSWORD='"+login_password+"' ");
if( query.next() )
{
    ui->stackedWidget->setCurrentIndex(3);
}
}


void MainWindow::on_signbut_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_s2up_clicked()
{
    nmreg=ui->regnm->text();
    emlreg=ui->regeml->text();
    passreg=ui->regpass->text();
    conreg=ui->regcon->text();
    QSqlQuery query;
    query.exec("INSERT INTO ticket (NAME, EMAIL, PASSWORD, CONTACT) VALUES ( '"+nmreg+"', '"+emlreg+"', '"+passreg+"', '"+conreg+"' )");
    ui->stackedWidget->setCurrentIndex(3);

}




void MainWindow::on_SBdBUT3_clicked()
{
      ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_sbd2c_clicked()
{
       ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_pushButton_clicked()
{
    passenger_count = ui->passenger_count_input->text();
    QString passenger_count;
        qint64 x, y;
        passenger_count  = ui->passenger_count_input->text();
        x = passenger_count.toInt();
        y = 450;
        qint64 z = x*y;
        ui->label_27->setText(QString::number(z));
        ui->label_55->setText(QString::number(x));
        //ui->Result->setText(z);
        ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_pushButton_2_clicked()
{
    this->close();
}



void MainWindow::on_sbc2d_clicked()
{
         ui->stackedWidget->setCurrentIndex(5);
}



void MainWindow::on_SubBUT4_clicked()
{
     ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_pushButton_6_clicked()
{
     this->close();
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}


void MainWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}


void MainWindow::on_pushButton_5_clicked()
{
    pass_count = ui->passinput->text();
    QString pass_count;
        qint64 x, y;
        pass_count  = ui->passinput->text();
        x = pass_count.toInt();
        y = 345;
        qint64 z = x*y;
         ui->label_56->setText(QString::number(x));
        ui->label_37->setText(QString::number(z));
        //ui->Result->setText(z);
        ui->stackedWidget->setCurrentIndex(9);

}


void MainWindow::on_TuBUT5_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);

}


void MainWindow::on_pushButton_10_clicked()
{
    this->close();
}


void MainWindow::on_pushButton_9_clicked()
{
    passturna = ui->turnapass->text();
    QString passturna;
        qint64 x, y;
        passturna  = ui->turnapass->text();
        x = passturna.toInt();
        y = 345;
        qint64 z = x*y;
         ui->label_57->setText(QString::number(x));
        ui->label_49->setText(QString::number(z));
        //ui->Result->setText(z);
        ui->stackedWidget->setCurrentIndex(12);

}


void MainWindow::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);

}


void MainWindow::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);

}


void MainWindow::on_mohBUT6_clicked()
{
    ui->stackedWidget->setCurrentIndex(13);

}


void MainWindow::on_pushButton_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(14);

}


void MainWindow::on_pushButton_14_clicked()
{
    this->close();
}


void MainWindow::on_pushButton_13_clicked()
{
    passprvti = ui->prvtipass->text();

    QString passprvti;
        qint64 x, y;
        passprvti  = ui->prvtipass->text();
        x = passprvti.toInt();
        y = 345;
        qint64 z = x*y;
         ui->label_58->setText(QString::number(x));
        ui->label_47->setText(QString::number(z));
        //ui->Result->setText(z);
        ui->stackedWidget->setCurrentIndex(15);
}


void MainWindow::on_pushButton_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(14);

}


void MainWindow::on_regback_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}


void MainWindow::on_pushButton_15_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);

}


void MainWindow::on_pushButton_16_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);

}


void MainWindow::on_pushButton_17_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);

}


void MainWindow::on_pushButton_18_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);

}


void MainWindow::on_pushButton_19_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);

}


void MainWindow::on_pushButton_20_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);

}


void MainWindow::on_pushButton_21_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);

}


void MainWindow::on_pushButton_22_clicked()
{
    ui->stackedWidget->setCurrentIndex(13);

}


void MainWindow::on_pushButton_23_clicked()
{
    ui->stackedWidget->setCurrentIndex(14);

}


void MainWindow::on_pushButton_24_clicked()
{
     ui->stackedWidget->setCurrentIndex(4);
}

