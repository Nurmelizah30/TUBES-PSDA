/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

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

class Ui_user
{
public:
    QGroupBox *groupBox;
    QFrame *frame;
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QLineEdit *label_status;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QDialog *user)
    {
        if (user->objectName().isEmpty())
            user->setObjectName("user");
        user->resize(542, 647);
        groupBox = new QGroupBox(user);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 20, 501, 551));
        QFont font;
        font.setBold(true);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("color: white;\n"
""));
        groupBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        frame = new QFrame(groupBox);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 30, 501, 251));
        frame->setStyleSheet(QString::fromUtf8("background-color: 	#708090; color: white;\n"
"background-color: 	#708090"));
        frame->setFrameShape(QFrame::Shape::NoFrame);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        tableWidget = new QTableWidget(frame);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(20, 30, 461, 181));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 0, 61, 21));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(170, 85, 0);"));
        label_status = new QLineEdit(frame);
        label_status->setObjectName("label_status");
        label_status->setGeometry(QRect(90, 1, 281, 20));
        label_status->setStyleSheet(QString::fromUtf8("background-color :rgb(0, 0, 0)rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"background-color: #fff;\n"
""));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(420, 220, 61, 21));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: 	#FFE5B4;\n"
"color : rgb(0, 0, 0)\n"
"\n"
""));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(-28, 19, 551, 251));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/images/Buku Akik, Yogyakarta (1).jpg")));
        label->setScaledContents(true);
        label->raise();
        frame->raise();

        retranslateUi(user);

        QMetaObject::connectSlotsByName(user);
    } // setupUi

    void retranslateUi(QDialog *user)
    {
        user->setWindowTitle(QCoreApplication::translate("user", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("user", "USER", nullptr));
        pushButton->setText(QCoreApplication::translate("user", "CARI", nullptr));
        label_status->setText(QCoreApplication::translate("user", "                                 MASUKKAN JUDUL BUKU", nullptr));
        label_status->setPlaceholderText(QCoreApplication::translate("user", "MASUKAN ISBN ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("user", "KEMBALI", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class user: public Ui_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
