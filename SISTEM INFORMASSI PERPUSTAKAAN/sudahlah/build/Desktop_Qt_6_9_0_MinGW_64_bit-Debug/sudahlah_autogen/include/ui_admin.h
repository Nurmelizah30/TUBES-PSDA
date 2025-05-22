/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton_Search;
    QPushButton *pushButton_Tambah;
    QPushButton *pushButton_Delete;
    QPushButton *pushButton_Edit;
    QPushButton *pushButton_logout;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QFrame *frame;
    QTableWidget *tableWidget;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName("admin");
        admin->resize(609, 629);
        groupBox = new QGroupBox(admin);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(-10, -60, 591, 611));
        QFont font;
        font.setBold(true);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("color: white;"));
        groupBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_Search = new QPushButton(groupBox);
        pushButton_Search->setObjectName("pushButton_Search");
        pushButton_Search->setGeometry(QRect(200, 510, 83, 29));
        pushButton_Search->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(170, 85, 0);"));
        pushButton_Tambah = new QPushButton(groupBox);
        pushButton_Tambah->setObjectName("pushButton_Tambah");
        pushButton_Tambah->setGeometry(QRect(60, 510, 111, 29));
        pushButton_Tambah->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 85, 0);\n"
"color: 	black;"));
        pushButton_Delete = new QPushButton(groupBox);
        pushButton_Delete->setObjectName("pushButton_Delete");
        pushButton_Delete->setGeometry(QRect(420, 510, 101, 29));
        pushButton_Delete->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(170, 85, 0);"));
        pushButton_Edit = new QPushButton(groupBox);
        pushButton_Edit->setObjectName("pushButton_Edit");
        pushButton_Edit->setGeometry(QRect(310, 510, 83, 29));
        pushButton_Edit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(170, 85, 0);"));
        pushButton_logout = new QPushButton(groupBox);
        pushButton_logout->setObjectName("pushButton_logout");
        pushButton_logout->setGeometry(QRect(70, 570, 83, 29));
        pushButton_logout->setStyleSheet(QString::fromUtf8("background-color: 	#FFE5B4;\n"
"color: black;"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(60, 350, 113, 28));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: 	#FFE5B4;\n"
"color: rgb(0, 0, 0);"));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 320, 111, 20));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background-color: 		#FFE5B4; color: BLACK;"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(410, 320, 111, 20));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color: 		#FFE5B4; color: black;"));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(60, 390, 113, 28));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: 	#FFE5B4;\n"
"color: rgb(0, 0, 0);"));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(60, 430, 113, 28));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: 	#FFE5B4;\n"
"color: rgb(0, 0, 0);"));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(60, 470, 113, 28));
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color: 	#FFE5B4;\n"
"color: rgb(0, 0, 0);"));
        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(410, 350, 113, 28));
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color: 	#FFE5B4;\n"
"color: rgb(0, 0, 0);"));
        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(410, 390, 113, 28));
        lineEdit_6->setStyleSheet(QString::fromUtf8("background-color: 	#FFE5B4;\n"
"color: rgb(0, 0, 0);"));
        lineEdit_7 = new QLineEdit(groupBox);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(410, 430, 113, 28));
        lineEdit_7->setStyleSheet(QString::fromUtf8("background-color: 	#FFE5B4;\n"
"color: rgb(0, 0, 0);"));
        lineEdit_8 = new QLineEdit(groupBox);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(410, 470, 113, 28));
        lineEdit_8->setStyleSheet(QString::fromUtf8("background-color: 	#FFE5B4;\n"
"color: rgb(0, 0, 0);\n"
"\n"
""));
        frame = new QFrame(groupBox);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 20, 581, 281));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(false);
        frame->setFont(font2);
        frame->setStyleSheet(QString::fromUtf8("background-color: #708090;"));
        frame->setFrameShape(QFrame::Shape::NoFrame);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        tableWidget = new QTableWidget(frame);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(50, 80, 481, 181));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(180, 50, 291, 16));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        label_5->setFont(font3);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(-30, 20, 681, 601));
        label_3->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
""));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/images/Buku Akik, Yogyakarta (1).jpg")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(-20, 290, 641, 391));
        label_4->setStyleSheet(QString::fromUtf8("background-color : #DCDCDC"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/images/download (11).jpeg")));
        label_3->raise();
        label_4->raise();
        frame->raise();
        pushButton_Search->raise();
        pushButton_Tambah->raise();
        pushButton_Delete->raise();
        pushButton_Edit->raise();
        pushButton_logout->raise();
        lineEdit->raise();
        label->raise();
        label_2->raise();
        lineEdit_2->raise();
        lineEdit_3->raise();
        lineEdit_4->raise();
        lineEdit_5->raise();
        lineEdit_6->raise();
        lineEdit_7->raise();
        lineEdit_8->raise();

        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QDialog *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("admin", "ADMIN", nullptr));
        pushButton_Search->setText(QCoreApplication::translate("admin", "CARI", nullptr));
        pushButton_Tambah->setText(QCoreApplication::translate("admin", "TAMBAH BUKU", nullptr));
        pushButton_Delete->setText(QCoreApplication::translate("admin", "HAPUS", nullptr));
        pushButton_Edit->setText(QCoreApplication::translate("admin", "EDIT", nullptr));
        pushButton_logout->setText(QCoreApplication::translate("admin", "KEMBALI", nullptr));
        lineEdit->setText(QCoreApplication::translate("admin", "                  ISBN", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("admin", "ISBN", nullptr));
        label->setText(QCoreApplication::translate("admin", "      TAMBAH BUKU :", nullptr));
        label_2->setText(QCoreApplication::translate("admin", "           EDIT BUKU :", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("admin", "             JUDUL BUKU", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("admin", "JUDUL BUKU", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("admin", "            PENGARANG", nullptr));
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("admin", "PENGARANG", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("admin", "                TAHUN", nullptr));
        lineEdit_4->setPlaceholderText(QCoreApplication::translate("admin", "TAHUN", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("admin", "                 ISBN", nullptr));
        lineEdit_5->setPlaceholderText(QCoreApplication::translate("admin", "ISBN", nullptr));
        lineEdit_6->setText(QCoreApplication::translate("admin", "            JUDUL BUKU", nullptr));
        lineEdit_6->setPlaceholderText(QCoreApplication::translate("admin", "JUDUL BUKU", nullptr));
        lineEdit_7->setText(QCoreApplication::translate("admin", "           PENGARANG", nullptr));
        lineEdit_7->setPlaceholderText(QCoreApplication::translate("admin", "PENGARANG", nullptr));
        lineEdit_8->setText(QCoreApplication::translate("admin", "               TAHUN", nullptr));
        lineEdit_8->setPlaceholderText(QCoreApplication::translate("admin", "TAHUN", nullptr));
        label_5->setText(QCoreApplication::translate("admin", "SISTEM INFORMASI PERPUSTAKAAN", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
